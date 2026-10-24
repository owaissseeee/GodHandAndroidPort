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

// Function: Slots_runHandlerForAll
// Address: 0x3009f8 - 0x300ae8
void Slots_runHandlerForAll_0x3009f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slots_runHandlerForAll_0x3009f8");
#endif

    switch (ctx->pc) {
        case 0x300a50u: goto label_300a50;
        case 0x300aa8u: goto label_300aa8;
        default: break;
    }

    ctx->pc = 0x3009f8u;

    // 0x3009f8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3009f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3009fc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3009fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300a00: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x300a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x300a04: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x300a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x300a08: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x300a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x300a0c: 0x24761960  addiu       $s6, $v1, 0x1960
    ctx->pc = 0x300a0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
    // 0x300a10: 0x24571940  addiu       $s7, $v0, 0x1940
    ctx->pc = 0x300a10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
    // 0x300a14: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x300a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x300a18: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x300a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x300a1c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300a20: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x300a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x300a24: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x300a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x300a28: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x300a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x300a2c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x300a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a30: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x300a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x300a34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x300a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a38: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x300a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x300a3c: 0x2471b940  addiu       $s1, $v1, -0x46C0
    ctx->pc = 0x300a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949184));
    // 0x300a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x300a44: 0x24551980  addiu       $s5, $v0, 0x1980
    ctx->pc = 0x300a44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x300a48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x300a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a4c: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x300a4cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_300a50:
    // 0x300a50: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x300a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x300a54: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x300a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x300a58: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x300a58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x300a5c: 0x942006  srlv        $a0, $s4, $a0
    ctx->pc = 0x300a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
    // 0x300a60: 0xb71821  addu        $v1, $a1, $s7
    ctx->pc = 0x300a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x300a64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300a68: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300a6c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x300A6Cu;
    {
        const bool branch_taken_0x300a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A6Cu;
        // 0x300a70: 0xb61821  addu        $v1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300a6c) {
            ctx->pc = 0x300AA8u;
            goto label_300aa8;
        }
    }
    ctx->pc = 0x300A74u;
    // 0x300a74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300a78: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300a7c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x300A7Cu;
    {
        const bool branch_taken_0x300a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300a7c) {
            ctx->pc = 0x300A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300A7Cu;
            // 0x300a80: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300AACu;
            goto label_300aac;
        }
    }
    ctx->pc = 0x300A84u;
    // 0x300a84: 0xb51821  addu        $v1, $a1, $s5
    ctx->pc = 0x300a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x300a88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300a8c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300a90: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x300A90u;
    {
        const bool branch_taken_0x300a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300a90) {
            ctx->pc = 0x300A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300A90u;
            // 0x300a94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300AACu;
            goto label_300aac;
        }
    }
    ctx->pc = 0x300A98u;
    // 0x300a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x300a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300aa0: 0xc0c0e7a  jal         func_3039E8
    ctx->pc = 0x300AA0u;
    SET_GPR_U32(ctx, 31, 0x300AA8u);
    ctx->pc = 0x300AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300AA0u;
    // 0x300aa4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3039E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3039E8u, 0x300AA0u, 0x300AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AA8u;
label_300aa8:
    // 0x300aa8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x300aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_300aac:
    // 0x300aac: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x300aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x300ab0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x300AB0u;
    {
        const bool branch_taken_0x300ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AB0u;
        // 0x300ab4: 0x26310260  addiu       $s1, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ab0) {
            ctx->pc = 0x300A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300a50;
        }
    }
    ctx->pc = 0x300AB8u;
    // 0x300ab8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x300ab8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x300abc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x300abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x300ac0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x300ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x300ac4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x300ac4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300ac8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x300ac8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300acc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x300accu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300ad0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x300ad0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300ad4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x300ad4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300adc: 0x3e00008  jr          $ra
    ctx->pc = 0x300ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300ADCu;
        // 0x300ae0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300AE4u;
    // 0x300ae4: 0x0  nop
    ctx->pc = 0x300ae4u;
    // NOP
    ctx->pc = 0x300ae8u;
}
