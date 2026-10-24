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

// Function: func_00349C28
// Address: 0x349c28 - 0x349ce0
void func_00349C28_0x349c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349C28_0x349c28");
#endif

    switch (ctx->pc) {
        case 0x349c64u: goto label_349c64;
        default: break;
    }

    ctx->pc = 0x349c28u;

    // 0x349c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x349c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x349c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349c30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x349c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x349c34: 0x8c822004  lw          $v0, 0x2004($a0)
    ctx->pc = 0x349c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8196)));
    // 0x349c38: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x349c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349c3c: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x349C3Cu;
    {
        const bool branch_taken_0x349c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x349C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C3Cu;
        // 0x349c40: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c3c) {
            ctx->pc = 0x349CD0u;
            goto label_349cd0;
        }
    }
    ctx->pc = 0x349C44u;
    // 0x349c44: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x349C44u;
    {
        const bool branch_taken_0x349c44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x349C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C44u;
        // 0x349c48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c44) {
            ctx->pc = 0x349C58u;
            goto label_349c58;
        }
    }
    ctx->pc = 0x349C4Cu;
    // 0x349c4c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x349C4Cu;
    {
        const bool branch_taken_0x349c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C4Cu;
        // 0x349c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c4c) {
            ctx->pc = 0x349CBCu;
            goto label_349cbc;
        }
    }
    ctx->pc = 0x349C54u;
    // 0x349c54: 0x0  nop
    ctx->pc = 0x349c54u;
    // NOP
label_349c58:
    // 0x349c58: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x349c58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x349c5c: 0xc0e877c  jal         func_3A1DF0
    ctx->pc = 0x349C5Cu;
    SET_GPR_U32(ctx, 31, 0x349C64u);
    ctx->pc = 0x349C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349C5Cu;
    // 0x349c60: 0x46806320  cvt.s.w     $f12, $f12 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1DF0u, 0x349C5Cu, 0x349C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349C64u;
label_349c64:
    // 0x349c64: 0x3c0140dd  lui         $at, 0x40DD
    ctx->pc = 0x349c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16605 << 16));
    // 0x349c68: 0x34210c54  ori         $at, $at, 0xC54
    ctx->pc = 0x349c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3156);
    // 0x349c6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x349c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x349c70: 0x3c0144d8  lui         $at, 0x44D8
    ctx->pc = 0x349c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17624 << 16));
    // 0x349c74: 0x3421677d  ori         $at, $at, 0x677D
    ctx->pc = 0x349c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26493);
    // 0x349c78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x349c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x349c7c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x349c7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x349c80: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x349c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x349c84: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x349c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x349c88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x349c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x349c8c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x349c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x349c90: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x349c90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x349c94: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349c94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x349c98: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x349c98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x349c9c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349c9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x349ca0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x349ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x349ca4: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x349ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x349ca8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x349ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x349cac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x349cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x349cb0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x349cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x349cb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x349cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x349cb8: 0x623023  subu        $a2, $v1, $v0
    ctx->pc = 0x349cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_349cbc:
    // 0x349cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x349cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349cc4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x349cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349cc8: 0x80cad22  j           func_32B488
    ctx->pc = 0x349CC8u;
    ctx->pc = 0x349CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349CC8u;
    // 0x349ccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B488u, 0x349CC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x349CD0u;
label_349cd0:
    // 0x349cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349cd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x349cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x349CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349CD8u;
        // 0x349cdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349CE0u;
}
