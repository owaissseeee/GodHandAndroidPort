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

// Function: func_00300C00
// Address: 0x300c00 - 0x300d20
void func_00300C00_0x300c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00300C00_0x300c00");
#endif

    switch (ctx->pc) {
        case 0x300c60u: goto label_300c60;
        case 0x300ce0u: goto label_300ce0;
        default: break;
    }

    ctx->pc = 0x300c00u;

    // 0x300c00: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x300c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x300c04: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300c08: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x300c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x300c0c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x300c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x300c10: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x300c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x300c14: 0x24771960  addiu       $s7, $v1, 0x1960
    ctx->pc = 0x300c14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
    // 0x300c18: 0x245e1940  addiu       $fp, $v0, 0x1940
    ctx->pc = 0x300c18u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
    // 0x300c1c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x300c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x300c20: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x300c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x300c24: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300c28: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x300c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x300c2c: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x300c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x300c30: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x300c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x300c34: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x300c34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300c38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x300c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x300c3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x300c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300c40: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x300c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x300c44: 0x2471b940  addiu       $s1, $v1, -0x46C0
    ctx->pc = 0x300c44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949184));
    // 0x300c48: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x300c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x300c4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x300c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300c50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x300c54: 0x24561980  addiu       $s6, $v0, 0x1980
    ctx->pc = 0x300c54u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x300c58: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x300c58u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x300c5c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x300c5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300c60:
    // 0x300c60: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x300c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x300c64: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x300c64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x300c68: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x300c68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x300c6c: 0x952006  srlv        $a0, $s5, $a0
    ctx->pc = 0x300c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), GPR_U32(ctx, 4) & 0x1F));
    // 0x300c70: 0xbe1821  addu        $v1, $a1, $fp
    ctx->pc = 0x300c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x300c74: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300c78: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300c7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x300C7Cu;
    {
        const bool branch_taken_0x300c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300C7Cu;
        // 0x300c80: 0xb71821  addu        $v1, $a1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300c7c) {
            ctx->pc = 0x300CE0u;
            goto label_300ce0;
        }
    }
    ctx->pc = 0x300C84u;
    // 0x300c84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300c88: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300c8c: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x300C8Cu;
    {
        const bool branch_taken_0x300c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300c8c) {
            ctx->pc = 0x300C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300C8Cu;
            // 0x300c90: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300CE4u;
            goto label_300ce4;
        }
    }
    ctx->pc = 0x300C94u;
    // 0x300c94: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x300c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x300c98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300c9c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300ca0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x300CA0u;
    {
        const bool branch_taken_0x300ca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300ca0) {
            ctx->pc = 0x300CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300CA0u;
            // 0x300ca4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300CE4u;
            goto label_300ce4;
        }
    }
    ctx->pc = 0x300CA8u;
    // 0x300ca8: 0x16540005  bne         $s2, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x300CA8u;
    {
        const bool branch_taken_0x300ca8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x300CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CA8u;
        // 0x300cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ca8) {
            ctx->pc = 0x300CC0u;
            goto label_300cc0;
        }
    }
    ctx->pc = 0x300CB0u;
    // 0x300cb0: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x300cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x300cb4: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x300cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x300cb8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x300CB8u;
    {
        const bool branch_taken_0x300cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300cb8) {
            ctx->pc = 0x300CD8u;
            goto label_300cd8;
        }
    }
    ctx->pc = 0x300CC0u;
label_300cc0:
    // 0x300cc0: 0x56400008  bnel        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x300CC0u;
    {
        const bool branch_taken_0x300cc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x300cc0) {
            ctx->pc = 0x300CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300CC0u;
            // 0x300cc4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300CE4u;
            goto label_300ce4;
        }
    }
    ctx->pc = 0x300CC8u;
    // 0x300cc8: 0x8e220118  lw          $v0, 0x118($s1)
    ctx->pc = 0x300cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x300ccc: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x300cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x300cd0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x300CD0u;
    {
        const bool branch_taken_0x300cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300cd0) {
            ctx->pc = 0x300CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300CD0u;
            // 0x300cd4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300CE4u;
            goto label_300ce4;
        }
    }
    ctx->pc = 0x300CD8u;
label_300cd8:
    // 0x300cd8: 0xc0c0a46  jal         func_302918
    ctx->pc = 0x300CD8u;
    SET_GPR_U32(ctx, 31, 0x300CE0u);
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x300CD8u, 0x300CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300CE0u;
label_300ce0:
    // 0x300ce0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x300ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_300ce4:
    // 0x300ce4: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x300ce4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x300ce8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x300CE8u;
    {
        const bool branch_taken_0x300ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CE8u;
        // 0x300cec: 0x26310260  addiu       $s1, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ce8) {
            ctx->pc = 0x300C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300c60;
        }
    }
    ctx->pc = 0x300CF0u;
    // 0x300cf0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x300cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x300cf4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x300cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x300cf8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x300cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x300cfc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x300cfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x300d00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x300d00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300d04: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x300d04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300d08: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x300d08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300d0c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x300d0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300d10: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x300d10u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300d18: 0x3e00008  jr          $ra
    ctx->pc = 0x300D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D18u;
        // 0x300d1c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300D20u;
}
