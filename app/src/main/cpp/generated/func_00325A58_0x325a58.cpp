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

// Function: func_00325A58
// Address: 0x325a58 - 0x325b90
void func_00325A58_0x325a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325A58_0x325a58");
#endif

    switch (ctx->pc) {
        case 0x325aa0u: goto label_325aa0;
        case 0x325b00u: goto label_325b00;
        case 0x325b10u: goto label_325b10;
        case 0x325b18u: goto label_325b18;
        case 0x325b20u: goto label_325b20;
        default: break;
    }

    ctx->pc = 0x325a58u;

    // 0x325a58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x325a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x325a5c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x325a60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325a64: 0x244280f0  addiu       $v0, $v0, -0x7F10
    ctx->pc = 0x325a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934768));
    // 0x325a68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x325a6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x325a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325a70: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x325a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x325a74: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x325a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x325a78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x325a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x325a7c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x325a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x325a80: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x325a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x325a84: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x325a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x325a88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x325a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x325a8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x325a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C80F0u));
    // 0x325a90: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x325A90u;
    {
        const bool branch_taken_0x325a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x325A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325A90u;
        // 0x325a94: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325a90) {
            ctx->pc = 0x325AC8u;
            goto label_325ac8;
        }
    }
    ctx->pc = 0x325A98u;
    // 0x325a98: 0x3c15003d  lui         $s5, 0x3D
    ctx->pc = 0x325a98u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)61 << 16));
    // 0x325a9c: 0x26a28190  addiu       $v0, $s5, -0x7E70
    ctx->pc = 0x325a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934928));
label_325aa0:
    // 0x325aa0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x325aa0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325aa4: 0x0  nop
    ctx->pc = 0x325aa4u;
    // NOP
    // 0x325aa8: 0x0  nop
    ctx->pc = 0x325aa8u;
    // NOP
    // 0x325aac: 0x0  nop
    ctx->pc = 0x325aacu;
    // NOP
    // 0x325ab0: 0x0  nop
    ctx->pc = 0x325ab0u;
    // NOP
    // 0x325ab4: 0x1060fffa  beqz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x325AB4u;
    {
        const bool branch_taken_0x325ab4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325AB4u;
        // 0x325ab8: 0x3c17003d  lui         $s7, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ab4) {
            ctx->pc = 0x325AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325aa0;
        }
    }
    ctx->pc = 0x325ABCu;
    // 0x325abc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x325ABCu;
    {
        const bool branch_taken_0x325abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325ABCu;
        // 0x325ac0: 0x3c16003d  lui         $s6, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325abc) {
            ctx->pc = 0x325B44u;
            goto label_325b44;
        }
    }
    ctx->pc = 0x325AC4u;
    // 0x325ac4: 0x0  nop
    ctx->pc = 0x325ac4u;
    // NOP
label_325ac8:
    // 0x325ac8: 0x3c15003d  lui         $s5, 0x3D
    ctx->pc = 0x325ac8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)61 << 16));
    // 0x325acc: 0x244381cc  addiu       $v1, $v0, -0x7E34
    ctx->pc = 0x325accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934988));
    // 0x325ad0: 0x26a48190  addiu       $a0, $s5, -0x7E70
    ctx->pc = 0x325ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934928));
    // 0x325ad4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x325ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x325ad8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x325ad8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x3C8190u));
    // 0x325adc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x325ADCu;
    {
        const bool branch_taken_0x325adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325ADCu;
        // 0x325ae0: 0x3c17003d  lui         $s7, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325adc) {
            ctx->pc = 0x325B40u;
            goto label_325b40;
        }
    }
    ctx->pc = 0x325AE4u;
    // 0x325ae4: 0x3c16003d  lui         $s6, 0x3D
    ctx->pc = 0x325ae4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)61 << 16));
    // 0x325ae8: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x325ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325aec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x325aecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325af0: 0x26f38188  addiu       $s3, $s7, -0x7E78
    ctx->pc = 0x325af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294934920));
    // 0x325af4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x325af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325af8: 0x26d08144  addiu       $s0, $s6, -0x7EBC
    ctx->pc = 0x325af8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934852));
    // 0x325afc: 0x0  nop
    ctx->pc = 0x325afcu;
    // NOP
label_325b00:
    // 0x325b00: 0xfe720000  sd          $s2, 0x0($s3)
    ctx->pc = 0x325b00u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 18));
    // 0x325b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325b08: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x325B08u;
    SET_GPR_U32(ctx, 31, 0x325B10u);
    ctx->pc = 0x325B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B08u;
    // 0x325b0c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x325B08u, 0x325B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B10u;
label_325b10:
    // 0x325b10: 0xc0ebef4  jal         func_3AFBD0
    ctx->pc = 0x325B10u;
    SET_GPR_U32(ctx, 31, 0x325B18u);
    ctx->pc = 0x325B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B10u;
    // 0x325b14: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFBD0u, 0x325B10u, 0x325B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B18u;
label_325b18:
    // 0x325b18: 0xc0c94be  jal         func_3252F8
    ctx->pc = 0x325B18u;
    SET_GPR_U32(ctx, 31, 0x325B20u);
    ctx->pc = 0x325B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B18u;
    // 0x325b1c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3252F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252F8u, 0x325B18u, 0x325B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B20u;
label_325b20:
    // 0x325b20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x325b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x325b24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x325b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x325b28: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x325b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x325b2c: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x325b2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x325b30: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x325B30u;
    {
        const bool branch_taken_0x325b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B30u;
        // 0x325b34: 0x26a28190  addiu       $v0, $s5, -0x7E70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b30) {
            ctx->pc = 0x325B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325b00;
        }
    }
    ctx->pc = 0x325B38u;
    // 0x325b38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x325B38u;
    {
        const bool branch_taken_0x325b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x325B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B38u;
        // 0x325b3c: 0xdfb50028  ld          $s5, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b38) {
            ctx->pc = 0x325B4Cu;
            goto label_325b4c;
        }
    }
    ctx->pc = 0x325B40u;
label_325b40:
    // 0x325b40: 0x3c16003d  lui         $s6, 0x3D
    ctx->pc = 0x325b40u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)61 << 16));
label_325b44:
    // 0x325b44: 0x26a28190  addiu       $v0, $s5, -0x7E70
    ctx->pc = 0x325b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934928));
    // 0x325b48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x325b48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_325b4c:
    // 0x325b4c: 0x26e38188  addiu       $v1, $s7, -0x7E78
    ctx->pc = 0x325b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294934920));
    // 0x325b50: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x325b50u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x325b54: 0x26c48144  addiu       $a0, $s6, -0x7EBC
    ctx->pc = 0x325b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294934852));
    // 0x325b58: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x325b58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325b60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325b64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x325b64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325b68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x325b68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325b6c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x325b6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325b70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x325b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325b74: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x325b74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x325b78: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x325b78u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x325b7c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x325b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x325b80: 0x3e00008  jr          $ra
    ctx->pc = 0x325B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B80u;
        // 0x325b84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325B88u;
    // 0x325b88: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x325b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x325b8c: 0x0  nop
    ctx->pc = 0x325b8cu;
    // NOP
    ctx->pc = 0x325b90u;
}
