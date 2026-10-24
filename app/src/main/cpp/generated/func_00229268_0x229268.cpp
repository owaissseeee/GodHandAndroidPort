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

// Function: func_00229268
// Address: 0x229268 - 0x2294e0
void func_00229268_0x229268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00229268_0x229268");
#endif

    switch (ctx->pc) {
        case 0x2292bcu: goto label_2292bc;
        case 0x2292dcu: goto label_2292dc;
        case 0x229310u: goto label_229310;
        case 0x22931cu: goto label_22931c;
        case 0x2293b0u: goto label_2293b0;
        case 0x2293d0u: goto label_2293d0;
        case 0x2293f0u: goto label_2293f0;
        case 0x2293f8u: goto label_2293f8;
        case 0x229410u: goto label_229410;
        case 0x22941cu: goto label_22941c;
        case 0x229438u: goto label_229438;
        case 0x229448u: goto label_229448;
        case 0x229460u: goto label_229460;
        case 0x22946cu: goto label_22946c;
        case 0x229474u: goto label_229474;
        case 0x22948cu: goto label_22948c;
        default: break;
    }

    ctx->pc = 0x229268u;

    // 0x229268: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x229268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22926c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x229270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x229270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x229274: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x229274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x229278: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x229278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22927c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x229280: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x229280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x229284: 0xa223186a  sb          $v1, 0x186A($s1)
    ctx->pc = 0x229284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 3));
    // 0x229288: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x229288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22928c: 0x922402f6  lbu         $a0, 0x2F6($s1)
    ctx->pc = 0x22928cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x229290: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x229290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x229294: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x229294u;
    {
        const bool branch_taken_0x229294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x229298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229294u;
        // 0x229298: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229294) {
            ctx->pc = 0x2292B0u;
            goto label_2292b0;
        }
    }
    ctx->pc = 0x22929Cu;
    // 0x22929c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2292a0: 0x50820047  beql        $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x2292A0u;
    {
        const bool branch_taken_0x2292a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2292a0) {
            ctx->pc = 0x2292A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2292A0u;
            // 0x2292a4: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2293C0u;
            goto label_2293c0;
        }
    }
    ctx->pc = 0x2292A8u;
    // 0x2292a8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2292A8u;
    {
        const bool branch_taken_0x2292a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2292a8) {
            ctx->pc = 0x22946Cu;
            goto label_22946c;
        }
    }
    ctx->pc = 0x2292B0u;
label_2292b0:
    // 0x2292b0: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x2292b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2292b4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2292B4u;
    SET_GPR_U32(ctx, 31, 0x2292BCu);
    ctx->pc = 0x2292B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2292B4u;
    // 0x2292b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2292B4u, 0x2292BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2292BCu;
label_2292bc:
    // 0x2292bc: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2292bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2292c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2292c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292c4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2292c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2292c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2292c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292cc: 0x2407004c  addiu       $a3, $zero, 0x4C
    ctx->pc = 0x2292ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2292d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2292d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2292d4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2292D4u;
    SET_GPR_U32(ctx, 31, 0x2292DCu);
    ctx->pc = 0x2292D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2292D4u;
    // 0x2292d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2292D4u, 0x2292DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2292DCu;
label_2292dc:
    // 0x2292dc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2292dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2292e0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2292e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2292e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2292e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2292e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2292e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292ec: 0x8c451e7c  lw          $a1, 0x1E7C($v0)
    ctx->pc = 0x2292ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7804)));
    // 0x2292f0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2292f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2292f4: 0x8c461e80  lw          $a2, 0x1E80($v0)
    ctx->pc = 0x2292f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7808)));
    // 0x2292f8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2292f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2292fc: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x2292fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x229300: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x229300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x229304: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x229304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x229308: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x229308u;
    SET_GPR_U32(ctx, 31, 0x229310u);
    ctx->pc = 0x22930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229308u;
    // 0x22930c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x229308u, 0x229310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229310u;
label_229310:
    // 0x229310: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x229310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x229314: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x229314u;
    SET_GPR_U32(ctx, 31, 0x22931Cu);
    ctx->pc = 0x229318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229314u;
    // 0x229318: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x229314u, 0x22931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22931Cu;
label_22931c:
    // 0x22931c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x22931cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x229320: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x229320u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x229324: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229324u;
    {
        const bool branch_taken_0x229324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229324u;
        // 0x229328: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229324) {
            ctx->pc = 0x229344u;
            goto label_229344;
        }
    }
    ctx->pc = 0x22932Cu;
    // 0x22932c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22932cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x229330: 0x244287b0  addiu       $v0, $v0, -0x7850
    ctx->pc = 0x229330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936496));
    // 0x229334: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x229334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x229338: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x229338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22933c: 0x800008  jr          $a0
    ctx->pc = 0x22933Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229344u: goto label_229344;
            case 0x22935Cu: goto label_22935c;
            case 0x229378u: goto label_229378;
            case 0x22939Cu: goto label_22939c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22933Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x229344u;
label_229344:
    // 0x229344: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x229344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229348: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229348u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22934c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x22934cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x229350: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x229350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229354: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x229354u;
    {
        const bool branch_taken_0x229354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229354u;
        // 0x229358: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229354) {
            ctx->pc = 0x229394u;
            goto label_229394;
        }
    }
    ctx->pc = 0x22935Cu;
label_22935c:
    // 0x22935c: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x22935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229364: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x229364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x229368: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x229368u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x22936c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22936cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x229370: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x229370u;
    {
        const bool branch_taken_0x229370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229370u;
        // 0x229374: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x229370) {
            ctx->pc = 0x229394u;
            goto label_229394;
        }
    }
    ctx->pc = 0x229378u;
label_229378:
    // 0x229378: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x229378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22937c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22937cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x229380: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x229380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x229384: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x229384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x229388: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x229388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22938c: 0x0  nop
    ctx->pc = 0x22938cu;
    // NOP
    // 0x229390: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x229390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_229394:
    // 0x229394: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x229394u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x229398: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x229398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_22939c:
    // 0x22939c: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x22939cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x2293a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2293a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2293a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293a8: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x2293A8u;
    SET_GPR_U32(ctx, 31, 0x2293B0u);
    ctx->pc = 0x2293ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2293A8u;
    // 0x2293ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x2293A8u, 0x2293B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2293B0u;
label_2293b0:
    // 0x2293b0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2293b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2293b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2293b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2293b8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2293b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2293bc: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x2293bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_2293c0:
    // 0x2293c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2293C0u;
    {
        const bool branch_taken_0x2293c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293C0u;
        // 0x2293c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293c0) {
            ctx->pc = 0x2293F0u;
            goto label_2293f0;
        }
    }
    ctx->pc = 0x2293C8u;
    // 0x2293c8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2293C8u;
    SET_GPR_U32(ctx, 31, 0x2293D0u);
    ctx->pc = 0x2293CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2293C8u;
    // 0x2293cc: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2293C8u, 0x2293D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2293D0u;
label_2293d0:
    // 0x2293d0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2293d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2293d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2293d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2293d8: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x2293d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x2293dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2293dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2293e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2293e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2293e4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2293e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2293e8: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2293E8u;
    SET_GPR_U32(ctx, 31, 0x2293F0u);
    ctx->pc = 0x2293ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2293E8u;
    // 0x2293ec: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2293E8u, 0x2293F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2293F0u;
label_2293f0:
    // 0x2293f0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2293F0u;
    SET_GPR_U32(ctx, 31, 0x2293F8u);
    ctx->pc = 0x2293F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2293F0u;
    // 0x2293f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2293F0u, 0x2293F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2293F8u;
label_2293f8:
    // 0x2293f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2293F8u;
    {
        const bool branch_taken_0x2293f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2293FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2293F8u;
        // 0x2293fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2293f8) {
            ctx->pc = 0x229450u;
            goto label_229450;
        }
    }
    ctx->pc = 0x229400u;
    // 0x229400: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229404: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x229404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x229408: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x229408u;
    SET_GPR_U32(ctx, 31, 0x229410u);
    ctx->pc = 0x22940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229408u;
    // 0x22940c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x229408u, 0x229410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229410u;
label_229410:
    // 0x229410: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x229410u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x229414: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x229414u;
    SET_GPR_U32(ctx, 31, 0x22941Cu);
    ctx->pc = 0x229418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229414u;
    // 0x229418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x229414u, 0x22941Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22941Cu;
label_22941c:
    // 0x22941c: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x22941cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
    // 0x229420: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x229420u;
    {
        const bool branch_taken_0x229420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229420) {
            ctx->pc = 0x229440u;
            goto label_229440;
        }
    }
    ctx->pc = 0x229428u;
    // 0x229428: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x229428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x22942c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22942cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229430: 0xc09ce58  jal         func_273960
    ctx->pc = 0x229430u;
    SET_GPR_U32(ctx, 31, 0x229438u);
    ctx->pc = 0x229434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229430u;
    // 0x229434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273960u, 0x229430u, 0x229438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229438u;
label_229438:
    // 0x229438: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x229438u;
    {
        const bool branch_taken_0x229438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229438u;
        // 0x22943c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229438) {
            ctx->pc = 0x2294C8u;
            goto label_2294c8;
        }
    }
    ctx->pc = 0x229440u;
label_229440:
    // 0x229440: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x229440u;
    SET_GPR_U32(ctx, 31, 0x229448u);
    ctx->pc = 0x229444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229440u;
    // 0x229444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x229440u, 0x229448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229448u;
label_229448:
    // 0x229448: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x229448u;
    {
        const bool branch_taken_0x229448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229448u;
        // 0x22944c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229448) {
            ctx->pc = 0x2294C8u;
            goto label_2294c8;
        }
    }
    ctx->pc = 0x229450u;
label_229450:
    // 0x229450: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x229450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229454: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x229454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x229458: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x229458u;
    SET_GPR_U32(ctx, 31, 0x229460u);
    ctx->pc = 0x22945Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229458u;
    // 0x22945c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x229458u, 0x229460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229460u;
label_229460:
    // 0x229460: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x229460u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x229464: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x229464u;
    SET_GPR_U32(ctx, 31, 0x22946Cu);
    ctx->pc = 0x229468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229464u;
    // 0x229468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x229464u, 0x22946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22946Cu;
label_22946c:
    // 0x22946c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22946Cu;
    SET_GPR_U32(ctx, 31, 0x229474u);
    ctx->pc = 0x229470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22946Cu;
    // 0x229470: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22946Cu, 0x229474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x229474u;
label_229474:
    // 0x229474: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x229474u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x229478: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x229478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x22947c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22947Cu;
    {
        const bool branch_taken_0x22947c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22947c) {
            ctx->pc = 0x229480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22947Cu;
            // 0x229480: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229498u;
            goto label_229498;
        }
    }
    ctx->pc = 0x229484u;
    // 0x229484: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x229484u;
    SET_GPR_U32(ctx, 31, 0x22948Cu);
    ctx->pc = 0x229488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229484u;
    // 0x229488: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x229484u, 0x22948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22948Cu;
label_22948c:
    // 0x22948c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x22948Cu;
    {
        const bool branch_taken_0x22948c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22948Cu;
        // 0x229490: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22948c) {
            ctx->pc = 0x2294C8u;
            goto label_2294c8;
        }
    }
    ctx->pc = 0x229494u;
    // 0x229494: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x229494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_229498:
    // 0x229498: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x229498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22949c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22949Cu;
    {
        const bool branch_taken_0x22949c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22949Cu;
        // 0x2294a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22949c) {
            ctx->pc = 0x2294A8u;
            goto label_2294a8;
        }
    }
    ctx->pc = 0x2294A4u;
    // 0x2294a4: 0xae2205fc  sw          $v0, 0x5FC($s1)
    ctx->pc = 0x2294a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 2));
label_2294a8:
    // 0x2294a8: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x2294a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x2294ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2294ACu;
    {
        const bool branch_taken_0x2294ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2294B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294ACu;
        // 0x2294b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294ac) {
            ctx->pc = 0x2294C8u;
            goto label_2294c8;
        }
    }
    ctx->pc = 0x2294B4u;
    // 0x2294b4: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x2294b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2294b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2294b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2294bc: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x2294bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x2294c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2294c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2294c4: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x2294c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_2294c8:
    // 0x2294c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2294c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2294cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2294ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2294d0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2294d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2294d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2294D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2294D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294D4u;
        // 0x2294d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2294D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2294DCu;
    // 0x2294dc: 0x0  nop
    ctx->pc = 0x2294dcu;
    // NOP
    ctx->pc = 0x2294e0u;
}
