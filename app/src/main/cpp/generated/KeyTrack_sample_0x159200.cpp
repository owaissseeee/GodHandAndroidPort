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

// Function: KeyTrack_sample
// Address: 0x159200 - 0x159300
void KeyTrack_sample_0x159200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyTrack_sample_0x159200");
#endif

    switch (ctx->pc) {
        case 0x1592d4u: goto label_1592d4;
        default: break;
    }

    ctx->pc = 0x159200u;

    // 0x159200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159204: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x159204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x159208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15920c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15920cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x159210: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x159210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x159214: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x159214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x159218: 0x94870004  lhu         $a3, 0x4($a0)
    ctx->pc = 0x159218u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15921c: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x15921cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x159220: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x159220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x159224: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x159224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x159228: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x159228u;
    {
        const bool branch_taken_0x159228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15922Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159228u;
        // 0x15922c: 0x24c30008  addiu       $v1, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159228) {
            ctx->pc = 0x159258u;
            goto label_159258;
        }
    }
    ctx->pc = 0x159230u;
    // 0x159230: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x159230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x159234: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x159234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x159238: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15923c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x15923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159240: 0x9443fffe  lhu         $v1, -0x2($v0)
    ctx->pc = 0x159240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967294)));
    // 0x159244: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159248: 0x0  nop
    ctx->pc = 0x159248u;
    // NOP
    // 0x15924c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15924cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159250: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x159250u;
    {
        const bool branch_taken_0x159250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159250u;
        // 0x159254: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x159250) {
            ctx->pc = 0x1592F0u;
            goto label_1592f0;
        }
    }
    ctx->pc = 0x159258u;
label_159258:
    // 0x159258: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x159258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x15925c: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x15925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x159260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x159260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159264: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x159264u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x159268: 0x0  nop
    ctx->pc = 0x159268u;
    // NOP
    // 0x15926c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x15926cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x159270: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x159270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x159274: 0x24050300  addiu       $a1, $zero, 0x300
    ctx->pc = 0x159274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x159278: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x159278u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15927c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15927cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159280: 0x0  nop
    ctx->pc = 0x159280u;
    // NOP
    // 0x159284: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x159284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x159288: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x159288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15928c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15928cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159290: 0x0  nop
    ctx->pc = 0x159290u;
    // NOP
    // 0x159294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x159294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x159298: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x159298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x15929c: 0x46036381  sub.s       $f14, $f12, $f3
    ctx->pc = 0x15929cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x1592a0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1592a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1592a4: 0x30430f00  andi        $v1, $v0, 0xF00
    ctx->pc = 0x1592a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x1592a8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1592a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1592ac: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x1592acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1592b0: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1592B0u;
    {
        const bool branch_taken_0x1592b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1592B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592B0u;
        // 0x1592b4: 0x46020340  add.s       $f13, $f0, $f2 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592b0) {
            ctx->pc = 0x1592CCu;
            goto label_1592cc;
        }
    }
    ctx->pc = 0x1592B8u;
    // 0x1592b8: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1592b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1592bc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1592BCu;
    {
        const bool branch_taken_0x1592bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1592C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592BCu;
        // 0x1592c0: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592bc) {
            ctx->pc = 0x1592CCu;
            goto label_1592cc;
        }
    }
    ctx->pc = 0x1592C4u;
    // 0x1592c4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1592C4u;
    {
        const bool branch_taken_0x1592c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1592c4) {
            ctx->pc = 0x1592C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1592C4u;
            // 0x1592c8: 0x460e6042  mul.s       $f1, $f12, $f14 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1592DCu;
            goto label_1592dc;
        }
    }
    ctx->pc = 0x1592CCu;
label_1592cc:
    // 0x1592cc: 0xc0b6a36  jal         func_2DA8D8
    ctx->pc = 0x1592CCu;
    SET_GPR_U32(ctx, 31, 0x1592D4u);
    ctx->pc = 0x2DA8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8D8u, 0x1592CCu, 0x1592D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1592D4u;
label_1592d4:
    // 0x1592d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1592D4u;
    {
        const bool branch_taken_0x1592d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1592D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592D4u;
        // 0x1592d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1592d4) {
            ctx->pc = 0x1592F8u;
            goto label_1592f8;
        }
    }
    ctx->pc = 0x1592DCu;
label_1592dc:
    // 0x1592dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1592dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1592e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1592e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1592e4: 0x0  nop
    ctx->pc = 0x1592e4u;
    // NOP
    // 0x1592e8: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x1592e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x1592ec: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1592ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
label_1592f0:
    // 0x1592f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1592f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1592f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1592f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1592f8:
    // 0x1592f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1592F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1592FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1592F8u;
        // 0x1592fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1592F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159300u;
}
