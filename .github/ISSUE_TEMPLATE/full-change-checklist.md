---
name: Full Change Checklist
about: An full checklist to be created as a blocking milestone issue when a release
  is proposed.
title: ''
labels: ''
assignees: ''

---

# The change checklist.

Must be formally executed for non-trivial releases.

## Analytics

  - [ ] GA property ID correct
  - [ ] custom dimensions and ecommerce metrics correctly reported
  - [ ] comscore tag present and correct
  - [ ] non-standard trackers (Feathr, etc) on old version are identified, present and tested on new version
  - [ ] mormont tracker present and reporting correct dimensions on website
  - [ ] mormont tracker present and reporting correct dimensions on AMP
  
## SEO

  - [ ] sitemap working and correct
  - [ ] sitemap contains no broken URLs
  - [ ] all new URLs appropriate for sitemap are present
  - [ ] refresh times are correct
  - [ ] no h2's used for anything other than section titles in an article
  - [ ] each article has exactly ONE h1 tag containing the title of the article
  - [ ] stuctured data is present and validated

## Ads

  - [ ] any changes to ad density or placement are approved and signed off by commercial
  - [ ] affiliates URL rewriting (e.g. skimlinks) is present and functioning

## Security

  - [ ] No pages echo back user input un-sanitised
  - [ ] All new SQL queries are double signed off by non-frontend team
  - [ ] All new forms of user input (GETs and POSTs, and ajax versions of) are double signed off by non-frontend team, including
  - [ ] No unsantised user input is eval'd
  - [ ] No unsantised user input is serialised or unserialised to json or other format
  - [ ] No files are written to disk
  - [ ] No source is included nor-imported out of the source tree

## Data protection and legal

  - [ ] no static includes are hosted with unvetted 3rd parties, e.g. jquery, font-awesome, google-fonts
  - [ ] privacy policy is present, in the singular (i.e. old copies not still hanging around) and
    - [ ] signed off by legal
    - [ ] linked clearly from each and every form where users are asked for personal information
  - [ ] any other legalese required by local laws (e.g. impressum in DE) is present and linked
  - [ ] behavioural advertising and other tracking consent is actively obtained
  - [ ] consent is retained for no longer than 30 days
  - [ ] other cookies are set for no longer than 30 days where consent has been obtained
  - [ ] redaction rules for private data are present for use in warehousing replica

## Accessibility

  - [ ] The site passes WCAG Level A https://www.w3.org/WAI/WCAG21/quickref/ specifically
    - [ ] Font-size, spacing and colour contrast of article content and major navigation
    - [ ] Navigation is reasonbly simple to navigate using a keyboard
    - [ ] Page can be scrolled by keyboard
    - [ ] Browser zoom works
    - [ ] All form controls are externally labelled
    - [ ] Form controls have programmatically identifiable sequences
    - [ ] Galleries are navigation and dismissible by keyboard
    - [ ] No custom controls 'trap' keyboard focus
    - [ ] CAPTCHA's have non-textual alternatives

## Performance

  - [ ] all GETs are deterministic (i.e. do not modify the database)
  - [ ] all new database methods have appropriate query caching
  - [ ] server side code depends on no new, unapproved cookies
  - [ ] client side storage uses LocalStorage, or similar mechanism, not cookies
  - [ ] performance has been measured and signed-off by platform and ops

## Monitoring

  - [ ] Uptime robot checks for each business-critical page type on the site, e.g. homepage, article page, ticket checkout page etc
  - [ ] Important crons are monitored (probably using datadog)
  - [ ] Dependent systems' health are monitored - DBs, elasticsearch, message queues, etc

## Integrity

  - [ ] New DBs are backed up following our best practices
  - [ ] Backups are monitored
  - [ ] A safe read-only DB user is provided on a production slave for general query needs
  
## DR

  - [ ] Any impact that this change has on disaster recovery has been recognised and considered.
