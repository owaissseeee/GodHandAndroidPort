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

// Function: func_002EA908
// Address: 0x2ea908 - 0x2ea9f0
void func_002EA908_0x2ea908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EA908_0x2ea908");
#endif

    switch (ctx->pc) {
        case 0x2ea9b4u: goto label_2ea9b4;
        default: break;
    }

    ctx->pc = 0x2ea908u;

    // 0x2ea908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ea908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ea90c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ea90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2ea910: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ea910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ea914: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ea914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ea918: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ea918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ea91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ea920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea924: 0xae0002b8  sw          $zero, 0x2B8($s0)
    ctx->pc = 0x2ea924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 0));
    // 0x2ea928: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x2ea928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
    // 0x2ea92c: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2ea92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2ea930: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ea930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ea934: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ea934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ea938: 0xc460013c  lwc1        $f0, 0x13C($v1)
    ctx->pc = 0x2ea938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea93c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ea93cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ea940: 0xe60002c0  swc1        $f0, 0x2C0($s0)
    ctx->pc = 0x2ea940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 704), bits); }
    // 0x2ea944: 0xc4610140  lwc1        $f1, 0x140($v1)
    ctx->pc = 0x2ea944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ea948: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ea948u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2ea94c: 0xe60102c4  swc1        $f1, 0x2C4($s0)
    ctx->pc = 0x2ea94cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 708), bits); }
    // 0x2ea950: 0x8062018c  lb          $v0, 0x18C($v1)
    ctx->pc = 0x2ea950u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 396)));
    // 0x2ea954: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x2ea954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2ea958: 0xae0402c8  sw          $a0, 0x2C8($s0)
    ctx->pc = 0x2ea958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 4));
    // 0x2ea95c: 0x8062018d  lb          $v0, 0x18D($v1)
    ctx->pc = 0x2ea95cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 397)));
    // 0x2ea960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea964: 0x0  nop
    ctx->pc = 0x2ea964u;
    // NOP
    // 0x2ea968: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea96c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ea96cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ea970: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ea970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ea974: 0xe60002b0  swc1        $f0, 0x2B0($s0)
    ctx->pc = 0x2ea974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
    // 0x2ea978: 0x8062018e  lb          $v0, 0x18E($v1)
    ctx->pc = 0x2ea978u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 398)));
    // 0x2ea97c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ea97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea980: 0x0  nop
    ctx->pc = 0x2ea980u;
    // NOP
    // 0x2ea984: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ea984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ea988: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ea988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ea98c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2ea98cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2ea990: 0xe60002b4  swc1        $f0, 0x2B4($s0)
    ctx->pc = 0x2ea990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 692), bits); }
    // 0x2ea994: 0x9066018f  lbu         $a2, 0x18F($v1)
    ctx->pc = 0x2ea994u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 399)));
    // 0x2ea998: 0x2cc20004  sltiu       $v0, $a2, 0x4
    ctx->pc = 0x2ea998u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ea99c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA99Cu;
    {
        const bool branch_taken_0x2ea99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA99Cu;
        // 0x2ea9a0: 0xae0602cc  sw          $a2, 0x2CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea99c) {
            ctx->pc = 0x2EA9C0u;
            goto label_2ea9c0;
        }
    }
    ctx->pc = 0x2EA9A4u;
    // 0x2ea9a4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ea9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ea9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea9ac: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2EA9ACu;
    SET_GPR_U32(ctx, 31, 0x2EA9B4u);
    ctx->pc = 0x2EA9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA9ACu;
    // 0x2ea9b0: 0x24a5e808  addiu       $a1, $a1, -0x17F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2EA9ACu, 0x2EA9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA9B4u;
label_2ea9b4:
    // 0x2ea9b4: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x2ea9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
    // 0x2ea9b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2EA9B8u;
    {
        const bool branch_taken_0x2ea9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9B8u;
        // 0x2ea9bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9b8) {
            ctx->pc = 0x2EA9DCu;
            goto label_2ea9dc;
        }
    }
    ctx->pc = 0x2EA9C0u;
label_2ea9c0:
    // 0x2ea9c0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EA9C0u;
    {
        const bool branch_taken_0x2ea9c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9C0u;
        // 0x2ea9c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9c0) {
            ctx->pc = 0x2EA9D8u;
            goto label_2ea9d8;
        }
    }
    ctx->pc = 0x2EA9C8u;
    // 0x2ea9c8: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA9C8u;
    {
        const bool branch_taken_0x2ea9c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9C8u;
        // 0x2ea9cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea9c8) {
            ctx->pc = 0x2EA9DCu;
            goto label_2ea9dc;
        }
    }
    ctx->pc = 0x2EA9D0u;
    // 0x2ea9d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ea9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea9d4: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x2ea9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
label_2ea9d8:
    // 0x2ea9d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ea9dc:
    // 0x2ea9dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ea9dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9E4u;
        // 0x2ea9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA9ECu;
    // 0x2ea9ec: 0x0  nop
    ctx->pc = 0x2ea9ecu;
    // NOP
    ctx->pc = 0x2ea9f0u;
}
