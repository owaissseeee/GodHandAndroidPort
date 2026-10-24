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

// Function: sceIpuRestartDMA
// Address: 0x3bab50 - 0x3baca0
void sceIpuRestartDMA_0x3bab50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceIpuRestartDMA_0x3bab50");
#endif

    switch (ctx->pc) {
        case 0x3babd4u: goto label_3babd4;
        case 0x3babe0u: goto label_3babe0;
        case 0x3bac10u: goto label_3bac10;
        default: break;
    }

    ctx->pc = 0x3bab50u;

    // 0x3bab50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bab50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bab54: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3bab54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3bab58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3bab58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3bab5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bab5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3bab60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bab60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bab64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3bab68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bab68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bab6c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x3bab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x3bab70: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3bab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3bab74: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x3bab74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3bab78: 0x3053007f  andi        $s3, $v0, 0x7F
    ctx->pc = 0x3bab78u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3bab7c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x3bab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3bab80: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3bab80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3bab84: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x3bab84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3bab88: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3bab88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3bab8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3bab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3bab90: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x3bab90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3bab94: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x3bab94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3bab98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3bab98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3bab9c: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x3BAB9Cu;
    {
        const bool branch_taken_0x3bab9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAB9Cu;
        // 0x3baba0: 0xa28823  subu        $s1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bab9c) {
            ctx->pc = 0x3BABD4u;
            goto label_3babd4;
        }
    }
    ctx->pc = 0x3BABA4u;
    // 0x3baba4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3baba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3baba8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3BABA8u;
    {
        const bool branch_taken_0x3baba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BABA8u;
        // 0x3babac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3baba8) {
            ctx->pc = 0x3BABD4u;
            goto label_3babd4;
        }
    }
    ctx->pc = 0x3BABB0u;
    // 0x3babb0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3babb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3babb4: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x3babb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x3babb8: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x3babb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x3babbc: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3babbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x3babc0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3babc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3babc4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3babc4u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 3));
    // 0x3babc8: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3babc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3babcc: 0xc0eea5e  jal         func_3BA978
    ctx->pc = 0x3BABCCu;
    SET_GPR_U32(ctx, 31, 0x3BABD4u);
    ctx->pc = 0x3BABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BABCCu;
    // 0x3babd0: 0x34840100  ori         $a0, $a0, 0x100 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA978u, 0x3BABCCu, 0x3BABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BABD4u;
label_3babd4:
    // 0x3babd4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3babd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3babd8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x3babd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x3babdc: 0x0  nop
    ctx->pc = 0x3babdcu;
    // NOP
label_3babe0:
    // 0x3babe0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3babe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3babe4: 0x0  nop
    ctx->pc = 0x3babe4u;
    // NOP
    // 0x3babe8: 0x0  nop
    ctx->pc = 0x3babe8u;
    // NOP
    // 0x3babec: 0x0  nop
    ctx->pc = 0x3babecu;
    // NOP
    // 0x3babf0: 0x0  nop
    ctx->pc = 0x3babf0u;
    // NOP
    // 0x3babf4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BABF4u;
    {
        const bool branch_taken_0x3babf4 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3babf4) {
            ctx->pc = 0x3BABE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3babe0;
        }
    }
    ctx->pc = 0x3BABFCu;
    // 0x3babfc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3babfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bac00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3bac00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3bac04: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3bac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3bac08: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x3bac08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x3bac0c: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x3bac0cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 19));
label_3bac10:
    // 0x3bac10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3bac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3bac14: 0x0  nop
    ctx->pc = 0x3bac14u;
    // NOP
    // 0x3bac18: 0x0  nop
    ctx->pc = 0x3bac18u;
    // NOP
    // 0x3bac1c: 0x0  nop
    ctx->pc = 0x3bac1cu;
    // NOP
    // 0x3bac20: 0x0  nop
    ctx->pc = 0x3bac20u;
    // NOP
    // 0x3bac24: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BAC24u;
    {
        const bool branch_taken_0x3bac24 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3bac24) {
            ctx->pc = 0x3BAC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bac10;
        }
    }
    ctx->pc = 0x3BAC2Cu;
    // 0x3bac2c: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3BAC2Cu;
    {
        const bool branch_taken_0x3bac2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAC2Cu;
        // 0x3bac30: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bac2c) {
            ctx->pc = 0x3BAC88u;
            goto label_3bac88;
        }
    }
    ctx->pc = 0x3BAC34u;
    // 0x3bac34: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x3BAC34u;
    {
        const bool branch_taken_0x3bac34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BAC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAC34u;
        // 0x3bac38: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bac34) {
            ctx->pc = 0x3BAC8Cu;
            goto label_3bac8c;
        }
    }
    ctx->pc = 0x3BAC3Cu;
    // 0x3bac3c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3bac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3bac40: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bac40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3bac44: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x3bac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x3bac48: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x3bac48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x3bac4c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3bac4cu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 17));
    // 0x3bac50: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3bac50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3bac54: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x3bac54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x3bac58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3bac58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bac5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3bac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3bac60: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3bac60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bac64: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3bac64u;
    runtime->Store32(rdram, ctx, 0x1000B430u, GPR_U32(ctx, 2));
    // 0x3bac68: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x3bac68u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 18));
    // 0x3bac6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3bac6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bac70: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3bac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3bac74: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bac74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bac78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bac78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bac7c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x3bac7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x3bac80: 0x80eea7c  j           func_3BA9F0
    ctx->pc = 0x3BAC80u;
    ctx->pc = 0x3BAC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BAC80u;
    // 0x3bac84: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA9F0u, 0x3BAC80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3BAC88u;
label_3bac88:
    // 0x3bac88: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3bac88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3bac8c:
    // 0x3bac8c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3bac8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bac90: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bac90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bac94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bac94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bac98: 0x3e00008  jr          $ra
    ctx->pc = 0x3BAC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BAC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BAC98u;
        // 0x3bac9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BAC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BACA0u;
}
