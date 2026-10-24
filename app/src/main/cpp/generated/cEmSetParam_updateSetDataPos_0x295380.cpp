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

// Function: cEmSetParam_updateSetDataPos
// Address: 0x295380 - 0x295400
void cEmSetParam_updateSetDataPos_0x295380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_updateSetDataPos_0x295380");
#endif

    switch (ctx->pc) {
        case 0x29539cu: goto label_29539c;
        default: break;
    }

    ctx->pc = 0x295380u;

    // 0x295380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295384: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x295384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x295388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x29538c: 0x24848658  addiu       $a0, $a0, -0x79A8
    ctx->pc = 0x29538cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    // 0x295390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295394: 0xc0afbd8  jal         func_2BEF60
    ctx->pc = 0x295394u;
    SET_GPR_U32(ctx, 31, 0x29539Cu);
    ctx->pc = 0x295398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295394u;
    // 0x295398: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF60u, 0x295394u, 0x29539Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29539Cu;
label_29539c:
    // 0x29539c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29539cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2953a0: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2953A0u;
    {
        const bool branch_taken_0x2953a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2953a0) {
            ctx->pc = 0x2953A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2953A0u;
            // 0x2953a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2953F4u;
            goto label_2953f4;
        }
    }
    ctx->pc = 0x2953A8u;
    // 0x2953a8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2953a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2953ac: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2953acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2953b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2953b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2953b4: 0x0  nop
    ctx->pc = 0x2953b4u;
    // NOP
    // 0x2953b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2953b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2953bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2953bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2953c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2953c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2953c4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2953c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2953c8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2953c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2953cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2953ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2953d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2953d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2953d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2953d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2953d8: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x2953d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x2953dc: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2953dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2953e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2953e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2953e4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2953e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2953e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2953e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2953ec: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x2953ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2953f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2953f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2953f4:
    // 0x2953f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2953f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2953f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2953F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2953FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2953F8u;
        // 0x2953fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2953F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295400u;
}
