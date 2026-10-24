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

// Function: cIDBase_transIcon
// Address: 0x2ab2a0 - 0x2ab360
void cIDBase_transIcon_0x2ab2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_transIcon_0x2ab2a0");
#endif

    switch (ctx->pc) {
        case 0x2ab2d4u: goto label_2ab2d4;
        case 0x2ab34cu: goto label_2ab34c;
        default: break;
    }

    ctx->pc = 0x2ab2a0u;

    // 0x2ab2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ab2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab2a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ab2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ab2a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ab2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ab2ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ab2acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab2b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ab2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2b8: 0x96020090  lhu         $v0, 0x90($s0)
    ctx->pc = 0x2ab2b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2ab2bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AB2BCu;
    {
        const bool branch_taken_0x2ab2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB2BCu;
        // 0x2ab2c0: 0x24053000  addiu       $a1, $zero, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab2bc) {
            ctx->pc = 0x2AB2C8u;
            goto label_2ab2c8;
        }
    }
    ctx->pc = 0x2AB2C4u;
    // 0x2ab2c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ab2c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ab2c8:
    // 0x2ab2c8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2ab2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2ab2cc: 0xc0abb50  jal         func_2AED40
    ctx->pc = 0x2AB2CCu;
    SET_GPR_U32(ctx, 31, 0x2AB2D4u);
    ctx->pc = 0x2AB2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB2CCu;
    // 0x2ab2d0: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AED40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AED40u, 0x2AB2CCu, 0x2AB2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB2D4u;
label_2ab2d4:
    // 0x2ab2d4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ab2d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab2d8: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x2AB2D8u;
    {
        const bool branch_taken_0x2ab2d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB2D8u;
        // 0x2ab2dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab2d8) {
            ctx->pc = 0x2AB34Cu;
            goto label_2ab34c;
        }
    }
    ctx->pc = 0x2AB2E0u;
    // 0x2ab2e0: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x2ab2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab2e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ab2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab2e8: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2ab2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab2ec: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab2ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ab2f0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2ab2f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2ab2f4: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x2ab2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x2ab2f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ab2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ab2fc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab2fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ab300: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ab300u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ab304: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2ab304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2ab308: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ab308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ab30c: 0xa4c300a6  sh          $v1, 0xA6($a2)
    ctx->pc = 0x2ab30cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 166), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ab310: 0xa4c200a8  sh          $v0, 0xA8($a2)
    ctx->pc = 0x2ab310u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 168), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ab314: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x2ab314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab318: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x2ab318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ab31c: 0xe4c00054  swc1        $f0, 0x54($a2)
    ctx->pc = 0x2ab31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x2ab320: 0xe4c10058  swc1        $f1, 0x58($a2)
    ctx->pc = 0x2ab320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 88), bits); }
    // 0x2ab324: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x2ab324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab328: 0xa4c5005c  sh          $a1, 0x5C($a2)
    ctx->pc = 0x2ab328u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 92), (uint16_t)GPR_U32(ctx, 5));
    // 0x2ab32c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2ab32cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2ab330: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2ab330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2ab334: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2ab334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ab338: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ab338u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ab33c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ab33cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ab340: 0xa4c2005e  sh          $v0, 0x5E($a2)
    ctx->pc = 0x2ab340u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ab344: 0xc0aae6a  jal         func_2AB9A8
    ctx->pc = 0x2AB344u;
    SET_GPR_U32(ctx, 31, 0x2AB34Cu);
    ctx->pc = 0x2AB348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB344u;
    // 0x2ab348: 0x9205008b  lbu         $a1, 0x8B($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 139)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB9A8u, 0x2AB344u, 0x2AB34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB34Cu;
label_2ab34c:
    // 0x2ab34c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ab34cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ab350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab358: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB358u;
        // 0x2ab35c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB360u;
}
