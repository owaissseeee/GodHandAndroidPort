#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cEvent_clearSystem
// Address: 0x297680 - 0x2977e8
void cEvent_clearSystem_0x297680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_clearSystem_0x297680");
#endif

    switch (ctx->pc) {
        case 0x2976acu: goto label_2976ac;
        case 0x2976c0u: goto label_2976c0;
        case 0x2976d4u: goto label_2976d4;
        case 0x2976e8u: goto label_2976e8;
        case 0x2976fcu: goto label_2976fc;
        case 0x297710u: goto label_297710;
        case 0x297724u: goto label_297724;
        case 0x297738u: goto label_297738;
        case 0x29774cu: goto label_29774c;
        case 0x297760u: goto label_297760;
        case 0x297774u: goto label_297774;
        case 0x297788u: goto label_297788;
        case 0x29779cu: goto label_29779c;
        case 0x2977b0u: goto label_2977b0;
        case 0x2977c4u: goto label_2977c4;
        case 0x2977d0u: goto label_2977d0;
        default: break;
    }

    ctx->pc = 0x297680u;

    // 0x297680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x297680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x297684: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x297684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x297688: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x297688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29768c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297690: 0x3c100000  lui         $s0, 0x0
    ctx->pc = 0x297690u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297690u) & 0xFFFFu)) << 16));
    // 0x297694: 0x26100000  addiu       $s0, $s0, 0x0
    ctx->pc = 0x297694u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297694u) & 0xFFFFu))));
    // 0x297698: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x297698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29769c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29769cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2976a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2976a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976a4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2976A4u;
    SET_GPR_U32(ctx, 31, 0x2976ACu);
    ctx->pc = 0x2976A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2976A4u;
    // 0x2976a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2976A4u, 0x2976ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976ACu;
label_2976ac:
    // 0x2976ac: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2976acu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2976ACu) & 0xFFFFu)) << 16));
    // 0x2976b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2976b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976b4: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2976b4u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2976B4u) & 0xFFFFu))));
    // 0x2976b8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2976B8u;
    SET_GPR_U32(ctx, 31, 0x2976C0u);
    ctx->pc = 0x2976BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2976B8u;
    // 0x2976bc: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2976B8u, 0x2976C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976C0u;
label_2976c0:
    // 0x2976c0: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2976c0u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2976C0u) & 0xFFFFu)) << 16));
    // 0x2976c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2976c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976c8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2976c8u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2976C8u) & 0xFFFFu))));
    // 0x2976cc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2976CCu;
    SET_GPR_U32(ctx, 31, 0x2976D4u);
    ctx->pc = 0x2976D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2976CCu;
    // 0x2976d0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2976CCu, 0x2976D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976D4u;
label_2976d4:
    // 0x2976d4: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2976d4u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2976D4u) & 0xFFFFu)) << 16));
    // 0x2976d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2976d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976dc: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2976dcu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2976DCu) & 0xFFFFu))));
    // 0x2976e0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2976E0u;
    SET_GPR_U32(ctx, 31, 0x2976E8u);
    ctx->pc = 0x2976E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2976E0u;
    // 0x2976e4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2976E0u, 0x2976E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976E8u;
label_2976e8:
    // 0x2976e8: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2976e8u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2976E8u) & 0xFFFFu)) << 16));
    // 0x2976ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2976ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976f0: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2976f0u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2976F0u) & 0xFFFFu))));
    // 0x2976f4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2976F4u;
    SET_GPR_U32(ctx, 31, 0x2976FCu);
    ctx->pc = 0x2976F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2976F4u;
    // 0x2976f8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2976F4u, 0x2976FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976FCu;
label_2976fc:
    // 0x2976fc: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2976fcu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2976FCu) & 0xFFFFu)) << 16));
    // 0x297700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297704: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297704u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297704u) & 0xFFFFu))));
    // 0x297708: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x297708u;
    SET_GPR_U32(ctx, 31, 0x297710u);
    ctx->pc = 0x29770Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297708u;
    // 0x29770c: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x297708u, 0x297710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297710u;
label_297710:
    // 0x297710: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297710u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297710u) & 0xFFFFu)) << 16));
    // 0x297714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297718: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297718u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297718u) & 0xFFFFu))));
    // 0x29771c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x29771Cu;
    SET_GPR_U32(ctx, 31, 0x297724u);
    ctx->pc = 0x297720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29771Cu;
    // 0x297720: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x29771Cu, 0x297724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297724u;
label_297724:
    // 0x297724: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297724u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297724u) & 0xFFFFu)) << 16));
    // 0x297728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29772c: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x29772cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x29772Cu) & 0xFFFFu))));
    // 0x297730: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x297730u;
    SET_GPR_U32(ctx, 31, 0x297738u);
    ctx->pc = 0x297734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297730u;
    // 0x297734: 0x240605e8  addiu       $a2, $zero, 0x5E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x297730u, 0x297738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297738u;
label_297738:
    // 0x297738: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297738u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297738u) & 0xFFFFu)) << 16));
    // 0x29773c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29773cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297740: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297740u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297740u) & 0xFFFFu))));
    // 0x297744: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x297744u;
    SET_GPR_U32(ctx, 31, 0x29774Cu);
    ctx->pc = 0x297748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297744u;
    // 0x297748: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x297744u, 0x29774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29774Cu;
label_29774c:
    // 0x29774c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x29774cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x29774Cu) & 0xFFFFu)) << 16));
    // 0x297750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297754: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297754u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297754u) & 0xFFFFu))));
    // 0x297758: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x297758u;
    SET_GPR_U32(ctx, 31, 0x297760u);
    ctx->pc = 0x29775Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297758u;
    // 0x29775c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x297758u, 0x297760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297760u;
label_297760:
    // 0x297760: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297760u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297760u) & 0xFFFFu)) << 16));
    // 0x297764: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297768: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297768u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297768u) & 0xFFFFu))));
    // 0x29776c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x29776Cu;
    SET_GPR_U32(ctx, 31, 0x297774u);
    ctx->pc = 0x297770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29776Cu;
    // 0x297770: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x29776Cu, 0x297774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297774u;
label_297774:
    // 0x297774: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297774u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297774u) & 0xFFFFu)) << 16));
    // 0x297778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29777c: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x29777cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x29777Cu) & 0xFFFFu))));
    // 0x297780: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x297780u;
    SET_GPR_U32(ctx, 31, 0x297788u);
    ctx->pc = 0x297784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297780u;
    // 0x297784: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x297780u, 0x297788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297788u;
label_297788:
    // 0x297788: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x297788u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x297788u) & 0xFFFFu)) << 16));
    // 0x29778c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29778cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297790: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x297790u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x297790u) & 0xFFFFu))));
    // 0x297794: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x297794u;
    SET_GPR_U32(ctx, 31, 0x29779Cu);
    ctx->pc = 0x297798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297794u;
    // 0x297798: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x297794u, 0x29779Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29779Cu;
label_29779c:
    // 0x29779c: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x29779cu;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x29779Cu) & 0xFFFFu)) << 16));
    // 0x2977a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2977a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977a4: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2977a4u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2977A4u) & 0xFFFFu))));
    // 0x2977a8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2977A8u;
    SET_GPR_U32(ctx, 31, 0x2977B0u);
    ctx->pc = 0x2977ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977A8u;
    // 0x2977ac: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2977A8u, 0x2977B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977B0u;
label_2977b0:
    // 0x2977b0: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2977b0u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2977B0u) & 0xFFFFu)) << 16));
    // 0x2977b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2977b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977b8: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x2977b8u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2977B8u) & 0xFFFFu))));
    // 0x2977bc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2977BCu;
    SET_GPR_U32(ctx, 31, 0x2977C4u);
    ctx->pc = 0x2977C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977BCu;
    // 0x2977c0: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2977BCu, 0x2977C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977C4u;
label_2977c4:
    // 0x2977c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2977c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2977c8: 0xc000000  jal         func_000000
    ctx->pc = 0x2977C8u;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x2977C8u) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x2977D0u);
        ctx->pc = 0x2977CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2977C8u;
        // 0x2977cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2977C8u, 0x2977D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2977D0u;
label_2977d0:
    // 0x2977d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2977d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2977d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2977d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2977d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2977d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2977dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2977DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2977E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2977DCu;
        // 0x2977e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2977DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2977E4u;
    // 0x2977e4: 0x0  nop
    ctx->pc = 0x2977e4u;
    // NOP
    ctx->pc = 0x2977e8u;
}
