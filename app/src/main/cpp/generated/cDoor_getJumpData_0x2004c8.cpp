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

// Function: cDoor_getJumpData
// Address: 0x2004c8 - 0x200638
void cDoor_getJumpData_0x2004c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDoor_getJumpData_0x2004c8");
#endif

    switch (ctx->pc) {
        case 0x200520u: goto label_200520;
        default: break;
    }

    ctx->pc = 0x2004c8u;

    // 0x2004c8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2004c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2004cc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2004ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2004d0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2004d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2004d4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2004d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2004d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2004d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004dc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2004dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2004e0: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x2004e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2004e4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2004e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2004e8: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x2004e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x2004ec: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2004ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2004f0: 0x245374a0  addiu       $s3, $v0, 0x74A0
    ctx->pc = 0x2004f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2004f4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2004f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2004f8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2004f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2004fc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x2004fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x200500: 0x30f500ff  andi        $s5, $a3, 0xFF
    ctx->pc = 0x200500u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x200504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200508: 0x30d600ff  andi        $s6, $a2, 0xFF
    ctx->pc = 0x200508u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x20050c: 0x313400ff  andi        $s4, $t1, 0xFF
    ctx->pc = 0x20050cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x200510: 0x24a5c768  addiu       $a1, $a1, -0x3898
    ctx->pc = 0x200510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952808));
    // 0x200514: 0x8e6405ac  lw          $a0, 0x5AC($s3)
    ctx->pc = 0x200514u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A4Cu));
    // 0x200518: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x200518u;
    SET_GPR_U32(ctx, 31, 0x200520u);
    ctx->pc = 0x20051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200518u;
    // 0x20051c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x200518u, 0x200520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200520u;
label_200520:
    // 0x200520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x200520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200524: 0x10800038  beqz        $a0, . + 4 + (0x38 << 2)
    ctx->pc = 0x200524u;
    {
        const bool branch_taken_0x200524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x200528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200524u;
        // 0x200528: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200524) {
            ctx->pc = 0x200608u;
            goto label_200608;
        }
    }
    ctx->pc = 0x20052Cu;
    // 0x20052c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x200530: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x200530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x200534: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x200534u;
    {
        const bool branch_taken_0x200534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200534u;
        // 0x200538: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200534) {
            ctx->pc = 0x200608u;
            goto label_200608;
        }
    }
    ctx->pc = 0x20053Cu;
    // 0x20053c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20053cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200540: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x200540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x200544: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x200544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x200548: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x200548u;
    {
        const bool branch_taken_0x200548 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x20054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200548u;
        // 0x20054c: 0x822821  addu        $a1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200548) {
            ctx->pc = 0x20055Cu;
            goto label_20055c;
        }
    }
    ctx->pc = 0x200550u;
    // 0x200550: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x200550u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x200554: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x200554u;
    {
        const bool branch_taken_0x200554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200554u;
        // 0x200558: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200554) {
            ctx->pc = 0x200578u;
            goto label_200578;
        }
    }
    ctx->pc = 0x20055Cu;
label_20055c:
    // 0x20055c: 0x966305b0  lhu         $v1, 0x5B0($s3)
    ctx->pc = 0x20055cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1456)));
    // 0x200560: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x200560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x200564: 0x84a20008  lh          $v0, 0x8($a1)
    ctx->pc = 0x200564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x200568: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x200568u;
    {
        const bool branch_taken_0x200568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x20056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200568u;
        // 0x20056c: 0x94a40008  lhu         $a0, 0x8($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200568) {
            ctx->pc = 0x200574u;
            goto label_200574;
        }
    }
    ctx->pc = 0x200570u;
    // 0x200570: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x200570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_200574:
    // 0x200574: 0xa6060014  sh          $a2, 0x14($s0)
    ctx->pc = 0x200574u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 6));
label_200578:
    // 0x200578: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x200578u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20057c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20057cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200580: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x200580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x200584: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x200584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x200588: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x200588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20058c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20058cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200590: 0x0  nop
    ctx->pc = 0x200590u;
    // NOP
    // 0x200594: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x200594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x200598: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x200598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x20059c: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x20059cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x2005a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2005a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2005a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2005a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2005a8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2005a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2005ac: 0x84a20002  lh          $v0, 0x2($a1)
    ctx->pc = 0x2005acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2005b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2005b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2005b4: 0x0  nop
    ctx->pc = 0x2005b4u;
    // NOP
    // 0x2005b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2005b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2005bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2005bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2005c0: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2005c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2005c4: 0x84a20004  lh          $v0, 0x4($a1)
    ctx->pc = 0x2005c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2005c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2005c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2005cc: 0x0  nop
    ctx->pc = 0x2005ccu;
    // NOP
    // 0x2005d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2005d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2005d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2005d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2005d8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x2005d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2005dc: 0x84a20006  lh          $v0, 0x6($a1)
    ctx->pc = 0x2005dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2005e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2005e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2005e4: 0x0  nop
    ctx->pc = 0x2005e4u;
    // NOP
    // 0x2005e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2005e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2005ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2005ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2005f0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2005f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2005f4: 0x90a2000a  lbu         $v0, 0xA($a1)
    ctx->pc = 0x2005f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x2005f8: 0xa214003a  sb          $s4, 0x3A($s0)
    ctx->pc = 0x2005f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 20));
    // 0x2005fc: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x2005fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x200600: 0xa2160017  sb          $s6, 0x17($s0)
    ctx->pc = 0x200600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 23), (uint8_t)GPR_U32(ctx, 22));
    // 0x200604: 0xae150018  sw          $s5, 0x18($s0)
    ctx->pc = 0x200604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 21));
label_200608:
    // 0x200608: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x200608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20060c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20060cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200610: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x200610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x200614: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x200614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x200618: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x200618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20061c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x20061cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200620: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x200620u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200624: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x200624u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20062c: 0x3e00008  jr          $ra
    ctx->pc = 0x20062Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20062Cu;
        // 0x200630: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20062Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200634u;
    // 0x200634: 0x0  nop
    ctx->pc = 0x200634u;
    // NOP
    ctx->pc = 0x200638u;
}
