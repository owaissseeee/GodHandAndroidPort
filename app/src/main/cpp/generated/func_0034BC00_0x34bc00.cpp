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

// Function: func_0034BC00
// Address: 0x34bc00 - 0x34bcc0
void func_0034BC00_0x34bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034BC00_0x34bc00");
#endif

    switch (ctx->pc) {
        case 0x34bc70u: goto label_34bc70;
        case 0x34bc8cu: goto label_34bc8c;
        case 0x34bc9cu: goto label_34bc9c;
        default: break;
    }

    ctx->pc = 0x34bc00u;

    // 0x34bc00: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x34bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x34bc04: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34bc04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34bc08: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x34bc08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34bc0c: 0x74880  sll         $t1, $a3, 2
    ctx->pc = 0x34bc0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x34bc10: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34bc14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34bc18: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34bc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x34bc1c: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x34bc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x34bc20: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x34bc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x34bc24: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x34bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34bc28: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34bc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x34bc2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34bc30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34bc34: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x34bc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34bc38: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x34bc38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc3c: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x34bc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x34bc40: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x34bc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34bc44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34bc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc48: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x34bc48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x34bc4c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x34BC4Cu;
    {
        const bool branch_taken_0x34bc4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC4Cu;
        // 0x34bc50: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc4c) {
            ctx->pc = 0x34BC60u;
            goto label_34bc60;
        }
    }
    ctx->pc = 0x34BC54u;
    // 0x34bc54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34bc54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x34BC58u;
    {
        const bool branch_taken_0x34bc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC58u;
        // 0x34bc5c: 0x24120004  addiu       $s2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc58) {
            ctx->pc = 0x34BC8Cu;
            goto label_34bc8c;
        }
    }
    ctx->pc = 0x34BC60u;
label_34bc60:
    // 0x34bc60: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x34bc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34bc64: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x34bc64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34bc68: 0xc0d2f30  jal         func_34BCC0
    ctx->pc = 0x34BC68u;
    SET_GPR_U32(ctx, 31, 0x34BC70u);
    ctx->pc = 0x34BC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BC68u;
    // 0x34bc6c: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BCC0u, 0x34BC68u, 0x34BC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC70u;
label_34bc70:
    // 0x34bc70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34bc70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34bc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34BC7Cu;
    {
        const bool branch_taken_0x34bc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BC7Cu;
        // 0x34bc80: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34bc7c) {
            ctx->pc = 0x34BCA0u;
            goto label_34bca0;
        }
    }
    ctx->pc = 0x34BC84u;
    // 0x34bc84: 0xc0d3056  jal         func_34C158
    ctx->pc = 0x34BC84u;
    SET_GPR_U32(ctx, 31, 0x34BC8Cu);
    ctx->pc = 0x34C158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C158u, 0x34BC84u, 0x34BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC8Cu;
label_34bc8c:
    // 0x34bc8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34bc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34bc90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34bc94: 0xc0d2fea  jal         func_34BFA8
    ctx->pc = 0x34BC94u;
    SET_GPR_U32(ctx, 31, 0x34BC9Cu);
    ctx->pc = 0x34BC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BC94u;
    // 0x34bc98: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BFA8u, 0x34BC94u, 0x34BC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BC9Cu;
label_34bc9c:
    // 0x34bc9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34bc9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34bca0:
    // 0x34bca0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34bca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34bca4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34bca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34bca8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x34bca8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34bcac: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x34bcacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34bcb0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34bcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34bcb4: 0x3e00008  jr          $ra
    ctx->pc = 0x34BCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BCB4u;
        // 0x34bcb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BCBCu;
    // 0x34bcbc: 0x0  nop
    ctx->pc = 0x34bcbcu;
    // NOP
    ctx->pc = 0x34bcc0u;
}
