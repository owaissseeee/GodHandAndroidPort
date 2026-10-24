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

// Function: func_00376720
// Address: 0x376720 - 0x3767b0
void func_00376720_0x376720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00376720_0x376720");
#endif

    switch (ctx->pc) {
        case 0x376748u: goto label_376748;
        case 0x376778u: goto label_376778;
        default: break;
    }

    ctx->pc = 0x376720u;

    // 0x376720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x376720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x376724: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x376724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x376728: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x376728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37672c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37672cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376730: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x376730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x376734: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x376734u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x376738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37673c: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x37673cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x376740: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x376740u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x376744: 0x0  nop
    ctx->pc = 0x376744u;
    // NOP
label_376748:
    // 0x376748: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x376748u;
    {
        const bool branch_taken_0x376748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376748u;
        // 0x37674c: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x376748) {
            ctx->pc = 0x376788u;
            goto label_376788;
        }
    }
    ctx->pc = 0x376750u;
    // 0x376750: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x376750u;
    {
        const bool branch_taken_0x376750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x376750) {
            ctx->pc = 0x376754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376750u;
            // 0x376754: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37678Cu;
            goto label_37678c;
        }
    }
    ctx->pc = 0x376758u;
    // 0x376758: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x376758u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x37675c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37675Cu;
    {
        const bool branch_taken_0x37675c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37675Cu;
        // 0x376760: 0x96040012  lhu         $a0, 0x12($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37675c) {
            ctx->pc = 0x376780u;
            goto label_376780;
        }
    }
    ctx->pc = 0x376764u;
    // 0x376764: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x376764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x376768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37676c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x37676cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x376770: 0xc0ddae0  jal         func_376B80
    ctx->pc = 0x376770u;
    SET_GPR_U32(ctx, 31, 0x376778u);
    ctx->pc = 0x376774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376770u;
    // 0x376774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376B80u, 0x376770u, 0x376778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376778u;
label_376778:
    // 0x376778: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x376778u;
    {
        const bool branch_taken_0x376778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376778u;
        // 0x37677c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376778) {
            ctx->pc = 0x37678Cu;
            goto label_37678c;
        }
    }
    ctx->pc = 0x376780u;
label_376780:
    // 0x376780: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x376780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x376784: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x376784u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_376788:
    // 0x376788: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x376788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_37678c:
    // 0x37678c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x37678cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x376790: 0x643ffed  bgezl       $s2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x376790u;
    {
        const bool branch_taken_0x376790 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x376790) {
            ctx->pc = 0x376794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376790u;
            // 0x376794: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_376748;
        }
    }
    ctx->pc = 0x376798u;
    // 0x376798: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x376798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37679c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37679cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3767a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3767a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3767a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3767a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3767a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3767A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3767ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3767A8u;
        // 0x3767ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3767A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3767B0u;
}
