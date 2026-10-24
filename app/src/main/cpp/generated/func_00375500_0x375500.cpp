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

// Function: func_00375500
// Address: 0x375500 - 0x375600
void func_00375500_0x375500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375500_0x375500");
#endif

    switch (ctx->pc) {
        case 0x375530u: goto label_375530;
        case 0x37554cu: goto label_37554c;
        case 0x37555cu: goto label_37555c;
        case 0x375564u: goto label_375564;
        case 0x375570u: goto label_375570;
        case 0x3755a8u: goto label_3755a8;
        default: break;
    }

    ctx->pc = 0x375500u;

    // 0x375500: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x375500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x375504: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x375504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x375508: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x375508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x37550c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x37550cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x375510: 0x2451a790  addiu       $s1, $v0, -0x5870
    ctx->pc = 0x375510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x375514: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x375514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x375518: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x375518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x37551c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x37551cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x375520: 0x36100800  ori         $s0, $s0, 0x800
    ctx->pc = 0x375520u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2048);
    // 0x375524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x375524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x375528: 0xc0edc60  jal         func_3B7180
    ctx->pc = 0x375528u;
    SET_GPR_U32(ctx, 31, 0x375530u);
    ctx->pc = 0x37552Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375528u;
    // 0x37552c: 0xae200084  sw          $zero, 0x84($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7180u, 0x375528u, 0x375530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375530u;
label_375530:
    // 0x375530: 0x2983c  dsll32      $s3, $v0, 0
    ctx->pc = 0x375530u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 0));
    // 0x375534: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x375534u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x375538: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x375538u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37553c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37553cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x375540: 0x2444a9c0  addiu       $a0, $v0, -0x5640
    ctx->pc = 0x375540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945216));
    // 0x375544: 0xc0ec144  jal         func_3B0510
    ctx->pc = 0x375544u;
    SET_GPR_U32(ctx, 31, 0x37554Cu);
    ctx->pc = 0x375548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375544u;
    // 0x375548: 0x248507ff  addiu       $a1, $a0, 0x7FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0510u, 0x375544u, 0x37554Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37554Cu;
label_37554c:
    // 0x37554c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37554cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x375550: 0x2444b1c0  addiu       $a0, $v0, -0x4E40
    ctx->pc = 0x375550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x375554: 0xc0ec144  jal         func_3B0510
    ctx->pc = 0x375554u;
    SET_GPR_U32(ctx, 31, 0x37555Cu);
    ctx->pc = 0x375558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375554u;
    // 0x375558: 0x248507ff  addiu       $a1, $a0, 0x7FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2047));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0510u, 0x375554u, 0x37555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37555Cu;
label_37555c:
    // 0x37555c: 0xc0dd63a  jal         func_3758E8
    ctx->pc = 0x37555Cu;
    SET_GPR_U32(ctx, 31, 0x375564u);
    ctx->pc = 0x375560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37555Cu;
    // 0x375560: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3758E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3758E8u, 0x37555Cu, 0x375564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375564u;
label_375564:
    // 0x375564: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x375564u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x375568: 0xc0edc60  jal         func_3B7180
    ctx->pc = 0x375568u;
    SET_GPR_U32(ctx, 31, 0x375570u);
    ctx->pc = 0x3B7180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7180u, 0x375568u, 0x375570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375570u;
label_375570:
    // 0x375570: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x375570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x375574: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x375574u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x375578: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x375578u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x37557c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37557Cu;
    {
        const bool branch_taken_0x37557c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x375580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37557Cu;
        // 0x375580: 0x2121023  subu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37557c) {
            ctx->pc = 0x37558Cu;
            goto label_37558c;
        }
    }
    ctx->pc = 0x375584u;
    // 0x375584: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x375584u;
    {
        const bool branch_taken_0x375584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375584u;
        // 0x375588: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375584) {
            ctx->pc = 0x375590u;
            goto label_375590;
        }
    }
    ctx->pc = 0x37558Cu;
label_37558c:
    // 0x37558c: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x37558cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
label_375590:
    // 0x375590: 0x932023  subu        $a0, $a0, $s3
    ctx->pc = 0x375590u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x375594: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x375594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375598: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x375598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x37559c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x37559cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x3755a0: 0xc0edd64  jal         func_3B7590
    ctx->pc = 0x3755A0u;
    SET_GPR_U32(ctx, 31, 0x3755A8u);
    ctx->pc = 0x3755A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3755A0u;
    // 0x3755a4: 0x4203e  dsrl32      $a0, $a0, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7590u, 0x3755A0u, 0x3755A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3755A8u;
label_3755a8:
    // 0x3755a8: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x3755a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x3755ac: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3755acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3755b0: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x3755b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x3755b4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3755b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3755b8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3755B8u;
    {
        const bool branch_taken_0x3755b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3755BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3755B8u;
        // 0x3755bc: 0xae23009c  sw          $v1, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3755b8) {
            ctx->pc = 0x3755C4u;
            goto label_3755c4;
        }
    }
    ctx->pc = 0x3755C0u;
    // 0x3755c0: 0xae240098  sw          $a0, 0x98($s1)
    ctx->pc = 0x3755c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 4));
label_3755c4:
    // 0x3755c4: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x3755c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x3755c8: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x3755c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x3755cc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3755ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3755d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3755D0u;
    {
        const bool branch_taken_0x3755d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3755d0) {
            ctx->pc = 0x3755D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3755D0u;
            // 0x3755d4: 0xae2300a0  sw          $v1, 0xA0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3755D8u;
            goto label_3755d8;
        }
    }
    ctx->pc = 0x3755D8u;
label_3755d8:
    // 0x3755d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3755d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3755dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3755dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3755e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3755e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3755e4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3755e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3755e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3755e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3755ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3755ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3755F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3755ECu;
        // 0x3755f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3755ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3755F4u;
    // 0x3755f4: 0x0  nop
    ctx->pc = 0x3755f4u;
    // NOP
    // 0x3755f8: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x3755f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x3755fc: 0x0  nop
    ctx->pc = 0x3755fcu;
    // NOP
    ctx->pc = 0x375600u;
}
