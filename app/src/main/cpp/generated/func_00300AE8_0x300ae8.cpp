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

// Function: func_00300AE8
// Address: 0x300ae8 - 0x300c00
void func_00300AE8_0x300ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00300AE8_0x300ae8");
#endif

    switch (ctx->pc) {
        case 0x300b48u: goto label_300b48;
        case 0x300bc0u: goto label_300bc0;
        default: break;
    }

    ctx->pc = 0x300ae8u;

    // 0x300ae8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x300ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x300aec: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300af0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x300af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x300af4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x300af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x300af8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x300af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x300afc: 0x24771960  addiu       $s7, $v1, 0x1960
    ctx->pc = 0x300afcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 6496));
    // 0x300b00: 0x245e1940  addiu       $fp, $v0, 0x1940
    ctx->pc = 0x300b00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 6464));
    // 0x300b04: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x300b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x300b08: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x300b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x300b0c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x300b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x300b10: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x300b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x300b14: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x300b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x300b18: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x300b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x300b1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x300b1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b20: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x300b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x300b24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x300b24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b28: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x300b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x300b2c: 0x2471b940  addiu       $s1, $v1, -0x46C0
    ctx->pc = 0x300b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949184));
    // 0x300b30: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x300b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x300b34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x300b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x300b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x300b3c: 0x24561980  addiu       $s6, $v0, 0x1980
    ctx->pc = 0x300b3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x300b40: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x300b40u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x300b44: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x300b44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_300b48:
    // 0x300b48: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x300b48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x300b4c: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x300b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x300b50: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x300b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x300b54: 0x952006  srlv        $a0, $s5, $a0
    ctx->pc = 0x300b54u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 21), GPR_U32(ctx, 4) & 0x1F));
    // 0x300b58: 0xbe1821  addu        $v1, $a1, $fp
    ctx->pc = 0x300b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
    // 0x300b5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300b60: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300b64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x300B64u;
    {
        const bool branch_taken_0x300b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B64u;
        // 0x300b68: 0xb71821  addu        $v1, $a1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b64) {
            ctx->pc = 0x300BC0u;
            goto label_300bc0;
        }
    }
    ctx->pc = 0x300B6Cu;
    // 0x300b6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300b70: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300b74: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x300B74u;
    {
        const bool branch_taken_0x300b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300b74) {
            ctx->pc = 0x300B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300B74u;
            // 0x300b78: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300BC4u;
            goto label_300bc4;
        }
    }
    ctx->pc = 0x300B7Cu;
    // 0x300b7c: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x300b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x300b80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300b84: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x300b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x300b88: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x300B88u;
    {
        const bool branch_taken_0x300b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300b88) {
            ctx->pc = 0x300B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300B88u;
            // 0x300b8c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300BC4u;
            goto label_300bc4;
        }
    }
    ctx->pc = 0x300B90u;
    // 0x300b90: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x300B90u;
    {
        const bool branch_taken_0x300b90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x300B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300B90u;
        // 0x300b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300b90) {
            ctx->pc = 0x300BA4u;
            goto label_300ba4;
        }
    }
    ctx->pc = 0x300B98u;
    // 0x300b98: 0x8622018c  lh          $v0, 0x18C($s1)
    ctx->pc = 0x300b98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x300b9c: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x300B9Cu;
    {
        const bool branch_taken_0x300b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x300b9c) {
            ctx->pc = 0x300BB8u;
            goto label_300bb8;
        }
    }
    ctx->pc = 0x300BA4u;
label_300ba4:
    // 0x300ba4: 0x56540007  bnel        $s2, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x300BA4u;
    {
        const bool branch_taken_0x300ba4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x300ba4) {
            ctx->pc = 0x300BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300BA4u;
            // 0x300ba8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300BC4u;
            goto label_300bc4;
        }
    }
    ctx->pc = 0x300BACu;
    // 0x300bac: 0x8622018c  lh          $v0, 0x18C($s1)
    ctx->pc = 0x300bacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x300bb0: 0x50530004  beql        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x300BB0u;
    {
        const bool branch_taken_0x300bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x300bb0) {
            ctx->pc = 0x300BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300BB0u;
            // 0x300bb4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300BC4u;
            goto label_300bc4;
        }
    }
    ctx->pc = 0x300BB8u;
label_300bb8:
    // 0x300bb8: 0xc0c0a46  jal         func_302918
    ctx->pc = 0x300BB8u;
    SET_GPR_U32(ctx, 31, 0x300BC0u);
    ctx->pc = 0x302918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302918u, 0x300BB8u, 0x300BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300BC0u;
label_300bc0:
    // 0x300bc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x300bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_300bc4:
    // 0x300bc4: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x300bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x300bc8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x300BC8u;
    {
        const bool branch_taken_0x300bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BC8u;
        // 0x300bcc: 0x26310260  addiu       $s1, $s1, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300bc8) {
            ctx->pc = 0x300B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300b48;
        }
    }
    ctx->pc = 0x300BD0u;
    // 0x300bd0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x300bd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x300bd4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x300bd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x300bd8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x300bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x300bdc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x300bdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x300be0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x300be0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x300be4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x300be4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x300be8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x300be8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x300bec: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x300becu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x300bf0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x300bf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x300bf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x300bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x300BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300BF8u;
        // 0x300bfc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300C00u;
}
