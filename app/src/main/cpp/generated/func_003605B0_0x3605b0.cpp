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

// Function: func_003605B0
// Address: 0x3605b0 - 0x360710
void func_003605B0_0x3605b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003605B0_0x3605b0");
#endif

    switch (ctx->pc) {
        case 0x3605d4u: goto label_3605d4;
        case 0x3605e8u: goto label_3605e8;
        case 0x360638u: goto label_360638;
        default: break;
    }

    ctx->pc = 0x3605b0u;

    // 0x3605b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3605b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3605b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3605b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3605b8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3605b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3605bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3605bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3605c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3605c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3605c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3605c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3605c8: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x3605c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3605cc: 0xc0d81c8  jal         func_360720
    ctx->pc = 0x3605CCu;
    SET_GPR_U32(ctx, 31, 0x3605D4u);
    ctx->pc = 0x3605D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3605CCu;
    // 0x3605d0: 0xc4940040  lwc1        $f20, 0x40($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x360720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360720u, 0x3605CCu, 0x3605D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3605D4u;
label_3605d4:
    // 0x3605d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3605d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3605d8: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x3605D8u;
    {
        const bool branch_taken_0x3605d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3605DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3605D8u;
        // 0x3605dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3605d8) {
            ctx->pc = 0x360618u;
            goto label_360618;
        }
    }
    ctx->pc = 0x3605E0u;
    // 0x3605e0: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x3605e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x3605e4: 0x34e7ff80  ori         $a3, $a3, 0xFF80
    ctx->pc = 0x3605e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65408);
label_3605e8:
    // 0x3605e8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x3605e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3605ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3605ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3605f0: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x3605f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3605f4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x3605f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x3605f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3605f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3605fc: 0x28c50100  slti        $a1, $a2, 0x100
    ctx->pc = 0x3605fcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x360600: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x360600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x360604: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x360604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x360608: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x360608u;
    {
        const bool branch_taken_0x360608 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x36060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360608u;
        // 0x36060c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360608) {
            ctx->pc = 0x3605E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3605e8;
        }
    }
    ctx->pc = 0x360610u;
    // 0x360610: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x360610u;
    {
        const bool branch_taken_0x360610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360610u;
        // 0x360614: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360610) {
            ctx->pc = 0x3606E0u;
            goto label_3606e0;
        }
    }
    ctx->pc = 0x360618u;
label_360618:
    // 0x360618: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x360618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
    // 0x36061c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x36061cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x360620: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x360620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x360624: 0x3c014b7f  lui         $at, 0x4B7F
    ctx->pc = 0x360624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19327 << 16));
    // 0x360628: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x360628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x36062c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x36062cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x360630: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x360630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360634: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x360634u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_360638:
    // 0x360638: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x360638u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x36063c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36063cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x360640: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x360640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x360644: 0x28c70100  slti        $a3, $a2, 0x100
    ctx->pc = 0x360644u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x360648: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x360648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36064c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36064Cu;
    {
        const bool branch_taken_0x36064c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x360650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36064Cu;
        // 0x360650: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36064c) {
            ctx->pc = 0x36065Cu;
            goto label_36065c;
        }
    }
    ctx->pc = 0x360654u;
    // 0x360654: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x360654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x360658: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x360658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_36065c:
    // 0x36065c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36065Cu;
    {
        const bool branch_taken_0x36065c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x360660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36065Cu;
        // 0x360660: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36065c) {
            ctx->pc = 0x360678u;
            goto label_360678;
        }
    }
    ctx->pc = 0x360664u;
    // 0x360664: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x360664u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360668: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x36066c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x36066Cu;
    {
        const bool branch_taken_0x36066c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36066Cu;
        // 0x360670: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36066c) {
            ctx->pc = 0x360690u;
            goto label_360690;
        }
    }
    ctx->pc = 0x360674u;
    // 0x360674: 0x0  nop
    ctx->pc = 0x360674u;
    // NOP
label_360678:
    // 0x360678: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x360678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x36067c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x36067cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x360680: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x360680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360684: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360684u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360688: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x360688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x36068c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x36068cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_360690:
    // 0x360690: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x360690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x360694: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x360694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x360698: 0x0  nop
    ctx->pc = 0x360698u;
    // NOP
    // 0x36069c: 0x0  nop
    ctx->pc = 0x36069cu;
    // NOP
    // 0x3606a0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x3606a0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x3606a4: 0x0  nop
    ctx->pc = 0x3606a4u;
    // NOP
    // 0x3606a8: 0x0  nop
    ctx->pc = 0x3606a8u;
    // NOP
    // 0x3606ac: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x3606acu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[0]);
    // 0x3606b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3606b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3606b4: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3606b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x3606b8: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x3606b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3606bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3606BCu;
    {
        const bool branch_taken_0x3606bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3606bc) {
            ctx->pc = 0x3606D4u;
            goto label_3606d4;
        }
    }
    ctx->pc = 0x3606C4u;
    // 0x3606c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3606c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3606c8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3606c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3606cc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3606ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3606d0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x3606d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_3606d4:
    // 0x3606d4: 0x14e0ffd8  bnez        $a3, . + 4 + (-0x28 << 2)
    ctx->pc = 0x3606D4u;
    {
        const bool branch_taken_0x3606d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3606D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3606D4u;
        // 0x3606d8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3606d4) {
            ctx->pc = 0x360638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360638;
        }
    }
    ctx->pc = 0x3606DCu;
    // 0x3606dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3606dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3606e0:
    // 0x3606e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3606e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3606e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3606e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3606e8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x3606e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3606ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3606ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3606F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3606ECu;
        // 0x3606f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3606ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3606F4u;
    // 0x3606f4: 0x0  nop
    ctx->pc = 0x3606f4u;
    // NOP
    // 0x3606f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3606f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3606fc: 0x0  nop
    ctx->pc = 0x3606fcu;
    // NOP
    // 0x360700: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x360700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x360704: 0x0  nop
    ctx->pc = 0x360704u;
    // NOP
    // 0x360708: 0x0  nop
    ctx->pc = 0x360708u;
    // NOP
    // 0x36070c: 0x0  nop
    ctx->pc = 0x36070cu;
    // NOP
    ctx->pc = 0x360710u;
}
