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

// Function: __kernel_sinf
// Address: 0x3a4728 - 0x3a4830
void ps2___kernel_sinf_0x3a4728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_sinf_0x3a4728");
#endif

    ctx->pc = 0x3a4728u;

    // 0x3a4728: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a4728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a472c: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3a472cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a4730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a4730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4734: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3a4734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3a4738: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a4738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a473c: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x3a473cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
    // 0x3a4740: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3a4740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3a4744: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4748: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3a4748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a474c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A474Cu;
    {
        const bool branch_taken_0x3a474c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a474c) {
            ctx->pc = 0x3A4750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A474Cu;
            // 0x3a4750: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4770u;
            goto label_3a4770;
        }
    }
    ctx->pc = 0x3A4754u;
    // 0x3a4754: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a4754u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3a4758: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a4758u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3a475c: 0x0  nop
    ctx->pc = 0x3a475cu;
    // NOP
    // 0x3a4760: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4760u;
    {
        const bool branch_taken_0x3a4760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a4760) {
            ctx->pc = 0x3A4764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A4760u;
            // 0x3a4764: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4770u;
            goto label_3a4770;
        }
    }
    ctx->pc = 0x3A4768u;
    // 0x3a4768: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4768u;
        // 0x3a476c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4770u;
label_3a4770:
    // 0x3a4770: 0x3c012f2e  lui         $at, 0x2F2E
    ctx->pc = 0x3a4770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12078 << 16));
    // 0x3a4774: 0x3421c9d3  ori         $at, $at, 0xC9D3
    ctx->pc = 0x3a4774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)51667);
    // 0x3a4778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a4778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a477c: 0x3c01b2d7  lui         $at, 0xB2D7
    ctx->pc = 0x3a477cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)45783 << 16));
    // 0x3a4780: 0x34212f34  ori         $at, $at, 0x2F34
    ctx->pc = 0x3a4780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12084);
    // 0x3a4784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a4784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4788: 0x3c013638  lui         $at, 0x3638
    ctx->pc = 0x3a4788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13880 << 16));
    // 0x3a478c: 0x3421ef1b  ori         $at, $at, 0xEF1B
    ctx->pc = 0x3a478cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61211);
    // 0x3a4790: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3a4790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a4794: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3a4794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3a4798: 0x3c01b950  lui         $at, 0xB950
    ctx->pc = 0x3a4798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47440 << 16));
    // 0x3a479c: 0x34210d01  ori         $at, $at, 0xD01
    ctx->pc = 0x3a479cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3329);
    // 0x3a47a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3a47a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3a47a4: 0x3c013c08  lui         $at, 0x3C08
    ctx->pc = 0x3a47a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15368 << 16));
    // 0x3a47a8: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x3a47a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x3a47ac: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3a47acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3a47b0: 0x460c2982  mul.s       $f6, $f5, $f12
    ctx->pc = 0x3a47b0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[12]);
    // 0x3a47b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a47b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a47b8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3a47b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3a47bc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3a47bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3a47c0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3a47c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3a47c4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3a47c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3a47c8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3a47c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3a47cc: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A47CCu;
    {
        const bool branch_taken_0x3a47cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A47CCu;
        // 0x3a47d0: 0x46040040  add.s       $f1, $f0, $f4 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a47cc) {
            ctx->pc = 0x3A47F4u;
            goto label_3a47f4;
        }
    }
    ctx->pc = 0x3A47D4u;
    // 0x3a47d4: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x3a47d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x3a47d8: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x3a47d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x3a47dc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3a47dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3a47e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a47e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a47e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3a47e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3a47e8: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x3a47e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x3a47ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3A47ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A47F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A47ECu;
        // 0x3a47f0: 0x46006000  add.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A47ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A47F4u;
label_3a47f4:
    // 0x3a47f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a47f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3a47f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a47f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a47fc: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x3a47fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3a4800: 0x3c01be2a  lui         $at, 0xBE2A
    ctx->pc = 0x3a4800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48682 << 16));
    // 0x3a4804: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3a4804u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3a4808: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3a4808u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a480c: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x3a480cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x3a4810: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3a4810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3a4814: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3a4814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3a4818: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3a4818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3a481c: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x3a481cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x3a4820: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3a4820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3a4824: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4824u;
        // 0x3a4828: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A482Cu;
    // 0x3a482c: 0x0  nop
    ctx->pc = 0x3a482cu;
    // NOP
    ctx->pc = 0x3a4830u;
}
