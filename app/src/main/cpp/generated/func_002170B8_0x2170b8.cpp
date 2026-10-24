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

// Function: func_002170B8
// Address: 0x2170b8 - 0x217310
void func_002170B8_0x2170b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002170B8_0x2170b8");
#endif

    switch (ctx->pc) {
        case 0x2170f4u: goto label_2170f4;
        case 0x217120u: goto label_217120;
        case 0x217134u: goto label_217134;
        case 0x2171e0u: goto label_2171e0;
        case 0x217204u: goto label_217204;
        case 0x21721cu: goto label_21721c;
        case 0x217234u: goto label_217234;
        case 0x217240u: goto label_217240;
        case 0x217250u: goto label_217250;
        case 0x217264u: goto label_217264;
        case 0x217270u: goto label_217270;
        case 0x2172a0u: goto label_2172a0;
        case 0x2172bcu: goto label_2172bc;
        case 0x2172e0u: goto label_2172e0;
        default: break;
    }

    ctx->pc = 0x2170b8u;

    // 0x2170b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2170b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2170bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2170bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2170c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2170c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2170c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2170c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2170c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2170c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2170cc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2170ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2170d0: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x2170d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2170d4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2170D4u;
    {
        const bool branch_taken_0x2170d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170D4u;
        // 0x2170d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170d4) {
            ctx->pc = 0x2170ECu;
            goto label_2170ec;
        }
    }
    ctx->pc = 0x2170DCu;
    // 0x2170dc: 0x5062003b  beql        $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2170DCu;
    {
        const bool branch_taken_0x2170dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2170dc) {
            ctx->pc = 0x2170E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2170DCu;
            // 0x2170e0: 0x8e2205f0  lw          $v0, 0x5F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2171CCu;
            goto label_2171cc;
        }
    }
    ctx->pc = 0x2170E4u;
    // 0x2170e4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2170E4u;
    {
        const bool branch_taken_0x2170e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170E4u;
        // 0x2170e8: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170e4) {
            ctx->pc = 0x217274u;
            goto label_217274;
        }
    }
    ctx->pc = 0x2170ECu;
label_2170ec:
    // 0x2170ec: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2170ECu;
    SET_GPR_U32(ctx, 31, 0x2170F4u);
    ctx->pc = 0x2170F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170ECu;
    // 0x2170f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2170ECu, 0x2170F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170F4u;
label_2170f4:
    // 0x2170f4: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2170f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2170f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2170f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2170fc: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x2170fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x217100: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217104: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x217104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x217108: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x217108u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21710c: 0x8c4501c8  lw          $a1, 0x1C8($v0)
    ctx->pc = 0x21710cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
    // 0x217110: 0x8c4601cc  lw          $a2, 0x1CC($v0)
    ctx->pc = 0x217110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 460)));
    // 0x217114: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x217114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x217118: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x217118u;
    SET_GPR_U32(ctx, 31, 0x217120u);
    ctx->pc = 0x21711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217118u;
    // 0x21711c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x217118u, 0x217120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217120u;
label_217120:
    // 0x217120: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x217120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x217124: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x217124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x217128: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x217128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x21712c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x21712Cu;
    SET_GPR_U32(ctx, 31, 0x217134u);
    ctx->pc = 0x217130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21712Cu;
    // 0x217130: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x21712Cu, 0x217134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217134u;
label_217134:
    // 0x217134: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x217134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x217138: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x217138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x21713c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21713Cu;
    {
        const bool branch_taken_0x21713c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21713Cu;
        // 0x217140: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21713c) {
            ctx->pc = 0x21715Cu;
            goto label_21715c;
        }
    }
    ctx->pc = 0x217144u;
    // 0x217144: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x217144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x217148: 0x244265c0  addiu       $v0, $v0, 0x65C0
    ctx->pc = 0x217148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26048));
    // 0x21714c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217150: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x217150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217154: 0x800008  jr          $a0
    ctx->pc = 0x217154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21715Cu: goto label_21715c;
            case 0x217174u: goto label_217174;
            case 0x217190u: goto label_217190;
            case 0x2171B4u: goto label_2171b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217154u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21715Cu;
label_21715c:
    // 0x21715c: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x21715cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x217160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x217164: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x217164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x217168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21716c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21716Cu;
    {
        const bool branch_taken_0x21716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21716Cu;
        // 0x217170: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21716c) {
            ctx->pc = 0x2171ACu;
            goto label_2171ac;
        }
    }
    ctx->pc = 0x217174u;
label_217174:
    // 0x217174: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x217174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217178: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x217178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21717c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x21717cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x217180: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x217180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x217184: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x217184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217188: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x217188u;
    {
        const bool branch_taken_0x217188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217188u;
        // 0x21718c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217188) {
            ctx->pc = 0x2171ACu;
            goto label_2171ac;
        }
    }
    ctx->pc = 0x217190u;
label_217190:
    // 0x217190: 0xc62005f0  lwc1        $f0, 0x5F0($s1)
    ctx->pc = 0x217190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217194: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x217194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x217198: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x217198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x21719c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x21719cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2171a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2171a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2171a4: 0x0  nop
    ctx->pc = 0x2171a4u;
    // NOP
    // 0x2171a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2171a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2171ac:
    // 0x2171ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2171acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2171b0: 0xe62105f0  swc1        $f1, 0x5F0($s1)
    ctx->pc = 0x2171b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1520), bits); }
label_2171b4:
    // 0x2171b4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x2171b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x2171b8: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x2171b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2171bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2171c0: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x2171c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x2171c4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x2171c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2171c8: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x2171c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
label_2171cc:
    // 0x2171cc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2171CCu;
    {
        const bool branch_taken_0x2171cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171CCu;
        // 0x2171d0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171cc) {
            ctx->pc = 0x217238u;
            goto label_217238;
        }
    }
    ctx->pc = 0x2171D4u;
    // 0x2171d4: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x2171d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2171d8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2171D8u;
    SET_GPR_U32(ctx, 31, 0x2171E0u);
    ctx->pc = 0x2171DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171D8u;
    // 0x2171dc: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2171D8u, 0x2171E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171E0u;
label_2171e0:
    // 0x2171e0: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x2171e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2171e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2171e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171e8: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x2171e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x2171ec: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2171ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2171f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2171f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2171f4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2171f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2171f8: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x2171f8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2171fc: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2171FCu;
    SET_GPR_U32(ctx, 31, 0x217204u);
    ctx->pc = 0x217200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171FCu;
    // 0x217200: 0xc62c0600  lwc1        $f12, 0x600($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2171FCu, 0x217204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217204u;
label_217204:
    // 0x217204: 0xc6210600  lwc1        $f1, 0x600($s1)
    ctx->pc = 0x217204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217208: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x217208u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x21720c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x21720cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x217210: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x217210u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x217214: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x217214u;
    SET_GPR_U32(ctx, 31, 0x21721Cu);
    ctx->pc = 0x217218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217214u;
    // 0x217218: 0xe6210600  swc1        $f1, 0x600($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x217214u, 0x21721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21721Cu;
label_21721c:
    // 0x21721c: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x21721cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217220: 0xe6200600  swc1        $f0, 0x600($s1)
    ctx->pc = 0x217220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1536), bits); }
    // 0x217224: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x217224u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x217228: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x217228u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x21722c: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x21722Cu;
    SET_GPR_U32(ctx, 31, 0x217234u);
    ctx->pc = 0x217230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21722Cu;
    // 0x217230: 0xe6210104  swc1        $f1, 0x104($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x21722Cu, 0x217234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217234u;
label_217234:
    // 0x217234: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x217234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_217238:
    // 0x217238: 0xc055f06  jal         func_157C18
    ctx->pc = 0x217238u;
    SET_GPR_U32(ctx, 31, 0x217240u);
    ctx->pc = 0x21723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217238u;
    // 0x21723c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x217238u, 0x217240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217240u;
label_217240:
    // 0x217240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217240u;
    {
        const bool branch_taken_0x217240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217240) {
            ctx->pc = 0x217250u;
            goto label_217250;
        }
    }
    ctx->pc = 0x217248u;
    // 0x217248: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x217248u;
    SET_GPR_U32(ctx, 31, 0x217250u);
    ctx->pc = 0x21724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217248u;
    // 0x21724c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x217248u, 0x217250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217250u;
label_217250:
    // 0x217250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x217250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x217254: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x217254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x217258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21725c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x21725Cu;
    SET_GPR_U32(ctx, 31, 0x217264u);
    ctx->pc = 0x217260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21725Cu;
    // 0x217260: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x21725Cu, 0x217264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217264u;
label_217264:
    // 0x217264: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x217264u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x217268: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x217268u;
    SET_GPR_U32(ctx, 31, 0x217270u);
    ctx->pc = 0x21726Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217268u;
    // 0x21726c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x217268u, 0x217270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217270u;
label_217270:
    // 0x217270: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x217270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_217274:
    // 0x217274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x217274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x217278: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x217278u;
    {
        const bool branch_taken_0x217278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217278u;
        // 0x21727c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217278) {
            ctx->pc = 0x2172F8u;
            goto label_2172f8;
        }
    }
    ctx->pc = 0x217280u;
    // 0x217280: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x217280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x217284: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x217284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x217288: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x217288u;
    {
        const bool branch_taken_0x217288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217288) {
            ctx->pc = 0x21728Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217288u;
            // 0x21728c: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2172FCu;
            goto label_2172fc;
        }
    }
    ctx->pc = 0x217290u;
    // 0x217290: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x217290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x217294: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x217294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217298: 0xc09afbc  jal         func_26BEF0
    ctx->pc = 0x217298u;
    SET_GPR_U32(ctx, 31, 0x2172A0u);
    ctx->pc = 0x21729Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217298u;
    // 0x21729c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BEF0u, 0x217298u, 0x2172A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172A0u;
label_2172a0:
    // 0x2172a0: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x2172a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x2172a4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x2172a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x2172a8: 0x24a565a8  addiu       $a1, $a1, 0x65A8
    ctx->pc = 0x2172a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26024));
    // 0x2172ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2172acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172b0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2172b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2172b4: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2172B4u;
    SET_GPR_U32(ctx, 31, 0x2172BCu);
    ctx->pc = 0x2172B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172B4u;
    // 0x2172b8: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2172B4u, 0x2172BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172BCu;
label_2172bc:
    // 0x2172bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2172bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172c0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2172C0u;
    {
        const bool branch_taken_0x2172c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172C0u;
        // 0x2172c4: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172c0) {
            ctx->pc = 0x2172D4u;
            goto label_2172d4;
        }
    }
    ctx->pc = 0x2172C8u;
    // 0x2172c8: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x2172c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x2172cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2172ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2172d0: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x2172d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_2172d4:
    // 0x2172d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2172d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172d8: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2172D8u;
    SET_GPR_U32(ctx, 31, 0x2172E0u);
    ctx->pc = 0x2172DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2172D8u;
    // 0x2172dc: 0x24a565b0  addiu       $a1, $a1, 0x65B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2172D8u, 0x2172E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2172E0u;
label_2172e0:
    // 0x2172e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2172e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2172e4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2172E4u;
    {
        const bool branch_taken_0x2172e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172E4u;
        // 0x2172e8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172e4) {
            ctx->pc = 0x2172F8u;
            goto label_2172f8;
        }
    }
    ctx->pc = 0x2172ECu;
    // 0x2172ec: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x2172ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x2172f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2172f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2172f4: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x2172f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
label_2172f8:
    // 0x2172f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2172f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2172fc:
    // 0x2172fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2172fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217300: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x217300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x217304: 0x3e00008  jr          $ra
    ctx->pc = 0x217304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217304u;
        // 0x217308: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21730Cu;
    // 0x21730c: 0x0  nop
    ctx->pc = 0x21730cu;
    // NOP
    ctx->pc = 0x217310u;
}
