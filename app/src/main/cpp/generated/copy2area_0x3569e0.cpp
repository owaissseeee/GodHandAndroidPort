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

// Function: copy2area
// Address: 0x3569e0 - 0x356b10
void copy2area_0x3569e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("copy2area_0x3569e0");
#endif

    switch (ctx->pc) {
        case 0x356a54u: goto label_356a54;
        case 0x356a64u: goto label_356a64;
        case 0x356a78u: goto label_356a78;
        case 0x356a94u: goto label_356a94;
        case 0x356aa4u: goto label_356aa4;
        case 0x356ab8u: goto label_356ab8;
        case 0x356ac8u: goto label_356ac8;
        case 0x356ad8u: goto label_356ad8;
        default: break;
    }

    ctx->pc = 0x3569e0u;

    // 0x3569e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3569e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3569e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3569e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3569e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3569e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3569ec: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x3569ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3569f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3569f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3569f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3569f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3569f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3569f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3569fc: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x3569fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a00: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x356a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x356a04: 0x215f021  addu        $fp, $s0, $s5
    ctx->pc = 0x356a04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x356a08: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x356a08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x356a0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x356a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x356a10: 0xfe382a  slt         $a3, $a3, $fp
    ctx->pc = 0x356a10u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x356a14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x356a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x356a18: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x356a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x356a1c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x356a1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a20: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x356a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x356a24: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x356a24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x356a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x356a2c: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x356a2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x356a30: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x356a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x356a34: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x356a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a38: 0x14e00028  bnez        $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x356A38u;
    {
        const bool branch_taken_0x356a38 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x356A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A38u;
        // 0x356a3c: 0x140a02d  daddu       $s4, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356a38) {
            ctx->pc = 0x356ADCu;
            goto label_356adc;
        }
    }
    ctx->pc = 0x356A40u;
    // 0x356a40: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x356A40u;
    {
        const bool branch_taken_0x356a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356a40) {
            ctx->pc = 0x356A44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356A40u;
            // 0x356a44: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356A80u;
            goto label_356a80;
        }
    }
    ctx->pc = 0x356A48u;
    // 0x356a48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x356a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a4c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x356A4Cu;
    SET_GPR_U32(ctx, 31, 0x356A54u);
    ctx->pc = 0x356A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A4Cu;
    // 0x356a50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x356A4Cu, 0x356A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A54u;
label_356a54:
    // 0x356a54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x356a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a58: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x356a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x356a5c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x356A5Cu;
    SET_GPR_U32(ctx, 31, 0x356A64u);
    ctx->pc = 0x356A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A5Cu;
    // 0x356a60: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x356A5Cu, 0x356A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A64u;
label_356a64:
    // 0x356a64: 0x2d02021  addu        $a0, $s6, $s0
    ctx->pc = 0x356a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x356a68: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x356a68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x356a6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x356a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a70: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x356A70u;
    SET_GPR_U32(ctx, 31, 0x356A78u);
    ctx->pc = 0x356A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A70u;
    // 0x356a74: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x356A70u, 0x356A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A78u;
label_356a78:
    // 0x356a78: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x356A78u;
    {
        const bool branch_taken_0x356a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A78u;
        // 0x356a7c: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356a78) {
            ctx->pc = 0x356ADCu;
            goto label_356adc;
        }
    }
    ctx->pc = 0x356A80u;
label_356a80:
    // 0x356a80: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x356a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x356a84: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x356A84u;
    {
        const bool branch_taken_0x356a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356A84u;
        // 0x356a88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356a84) {
            ctx->pc = 0x356AC0u;
            goto label_356ac0;
        }
    }
    ctx->pc = 0x356A8Cu;
    // 0x356a8c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x356A8Cu;
    SET_GPR_U32(ctx, 31, 0x356A94u);
    ctx->pc = 0x356A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A8Cu;
    // 0x356a90: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x356A8Cu, 0x356A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356A94u;
label_356a94:
    // 0x356a94: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x356a94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x356a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356a9c: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x356A9Cu;
    SET_GPR_U32(ctx, 31, 0x356AA4u);
    ctx->pc = 0x356AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356A9Cu;
    // 0x356aa0: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x356A9Cu, 0x356AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AA4u;
label_356aa4:
    // 0x356aa4: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x356aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x356aa8: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x356aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x356aac: 0x2b33023  subu        $a2, $s5, $s3
    ctx->pc = 0x356aacu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x356ab0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x356AB0u;
    SET_GPR_U32(ctx, 31, 0x356AB8u);
    ctx->pc = 0x356AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356AB0u;
    // 0x356ab4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x356AB0u, 0x356AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AB8u;
label_356ab8:
    // 0x356ab8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x356AB8u;
    {
        const bool branch_taken_0x356ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356AB8u;
        // 0x356abc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356ab8) {
            ctx->pc = 0x356ADCu;
            goto label_356adc;
        }
    }
    ctx->pc = 0x356AC0u;
label_356ac0:
    // 0x356ac0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x356AC0u;
    SET_GPR_U32(ctx, 31, 0x356AC8u);
    ctx->pc = 0x356AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356AC0u;
    // 0x356ac4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x356AC0u, 0x356AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AC8u;
label_356ac8:
    // 0x356ac8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x356ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356acc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x356accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356ad0: 0xc0e9452  jal         func_3A5148
    ctx->pc = 0x356AD0u;
    SET_GPR_U32(ctx, 31, 0x356AD8u);
    ctx->pc = 0x356AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356AD0u;
    // 0x356ad4: 0x2f02021  addu        $a0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x356AD0u, 0x356AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356AD8u;
label_356ad8:
    // 0x356ad8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x356ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_356adc:
    // 0x356adc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x356adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356ae0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356ae0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356ae4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x356ae4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356ae8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x356ae8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x356aec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x356aecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x356af0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x356af0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x356af4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x356af4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356af8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x356af8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x356afc: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x356afcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x356b00: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x356b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x356b04: 0x3e00008  jr          $ra
    ctx->pc = 0x356B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356B04u;
        // 0x356b08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356B0Cu;
    // 0x356b0c: 0x0  nop
    ctx->pc = 0x356b0cu;
    // NOP
    ctx->pc = 0x356b10u;
}
