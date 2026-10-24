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

// Function: func_0031C950
// Address: 0x31c950 - 0x31ca58
void func_0031C950_0x31c950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031C950_0x31c950");
#endif

    switch (ctx->pc) {
        case 0x31ca38u: goto label_31ca38;
        case 0x31ca4cu: goto label_31ca4c;
        default: break;
    }

    ctx->pc = 0x31c950u;

    // 0x31c950: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x31c950u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x31c954: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x31c954u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x31c958: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x31c958u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x31c95c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x31c95cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x31c960: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x31c960u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31c964: 0x0  nop
    ctx->pc = 0x31c964u;
    // NOP
    // 0x31c968: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31c968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31c96c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31c96cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31c970: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x31c970u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c974: 0x0  nop
    ctx->pc = 0x31c974u;
    // NOP
    // 0x31c978: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c97c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31c980: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x31c980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31c984: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C984u;
    {
        const bool branch_taken_0x31c984 = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x31C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C984u;
        // 0x31c988: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c984) {
            ctx->pc = 0x31C9A0u;
            goto label_31c9a0;
        }
    }
    ctx->pc = 0x31C98Cu;
    // 0x31c98c: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x31c98cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31c990: 0x0  nop
    ctx->pc = 0x31c990u;
    // NOP
    // 0x31c994: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x31c994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31c998: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31C998u;
    {
        const bool branch_taken_0x31c998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c998) {
            ctx->pc = 0x31C9BCu;
            goto label_31c9bc;
        }
    }
    ctx->pc = 0x31C9A0u;
label_31c9a0:
    // 0x31c9a0: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x31c9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x31c9a4: 0x91842  srl         $v1, $t1, 1
    ctx->pc = 0x31c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x31c9a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31c9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31c9ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x31c9acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x31c9b0: 0x0  nop
    ctx->pc = 0x31c9b0u;
    // NOP
    // 0x31c9b4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x31c9b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x31c9b8: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x31c9b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_31c9bc:
    // 0x31c9bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31c9bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c9c0: 0x0  nop
    ctx->pc = 0x31c9c0u;
    // NOP
    // 0x31c9c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x31c9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31c9c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31c9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31c9cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31c9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31c9d0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x31c9d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31c9d4: 0x0  nop
    ctx->pc = 0x31c9d4u;
    // NOP
    // 0x31c9d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31c9d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31c9dc: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x31c9dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31c9e0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x31c9e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x31c9e4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x31c9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31c9e8: 0x5200006  bltz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x31C9E8u;
    {
        const bool branch_taken_0x31c9e8 = (GPR_S64(ctx, 9) < 0);
        ctx->pc = 0x31C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9E8u;
        // 0x31c9ec: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9e8) {
            ctx->pc = 0x31CA04u;
            goto label_31ca04;
        }
    }
    ctx->pc = 0x31C9F0u;
    // 0x31c9f0: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x31c9f0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31c9f4: 0x0  nop
    ctx->pc = 0x31c9f4u;
    // NOP
    // 0x31c9f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31c9f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31c9fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31C9FCu;
    {
        const bool branch_taken_0x31c9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c9fc) {
            ctx->pc = 0x31CA20u;
            goto label_31ca20;
        }
    }
    ctx->pc = 0x31CA04u;
label_31ca04:
    // 0x31ca04: 0x91842  srl         $v1, $t1, 1
    ctx->pc = 0x31ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x31ca08: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x31ca08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x31ca0c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31ca0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31ca10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31ca10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31ca14: 0x0  nop
    ctx->pc = 0x31ca14u;
    // NOP
    // 0x31ca18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31ca18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31ca1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31ca1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_31ca20:
    // 0x31ca20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x31ca20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x31ca24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31ca24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ca28: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x31ca28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca2c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x31ca2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31ca30: 0xc0c7296  jal         func_31CA58
    ctx->pc = 0x31CA30u;
    SET_GPR_U32(ctx, 31, 0x31CA38u);
    ctx->pc = 0x31CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA30u;
    // 0x31ca34: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CA58u, 0x31CA30u, 0x31CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA38u;
label_31ca38:
    // 0x31ca38: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x31ca38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31ca3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ca44: 0xc057c2e  jal         func_15F0B8
    ctx->pc = 0x31CA44u;
    SET_GPR_U32(ctx, 31, 0x31CA4Cu);
    ctx->pc = 0x31CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA44u;
    // 0x31ca48: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F0B8u, 0x31CA44u, 0x31CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA4Cu;
label_31ca4c:
    // 0x31ca4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ca4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ca50: 0x3e00008  jr          $ra
    ctx->pc = 0x31CA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA50u;
        // 0x31ca54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CA58u;
}
