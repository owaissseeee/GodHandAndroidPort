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

// Function: func_001B4528
// Address: 0x1b4528 - 0x1b48e0
void func_001B4528_0x1b4528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B4528_0x1b4528");
#endif

    switch (ctx->pc) {
        case 0x1b458cu: goto label_1b458c;
        case 0x1b45f4u: goto label_1b45f4;
        case 0x1b4604u: goto label_1b4604;
        case 0x1b466cu: goto label_1b466c;
        case 0x1b471cu: goto label_1b471c;
        case 0x1b4730u: goto label_1b4730;
        case 0x1b4778u: goto label_1b4778;
        case 0x1b4860u: goto label_1b4860;
        case 0x1b4874u: goto label_1b4874;
        case 0x1b48a4u: goto label_1b48a4;
        case 0x1b48c0u: goto label_1b48c0;
        default: break;
    }

    ctx->pc = 0x1b4528u;

    // 0x1b4528: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b4528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b452c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b452cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b4530: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b4530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b4534: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1b4534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b4538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b4538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b453c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b453cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4540: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4544: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1b4544u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b4548: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x1b4548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x1b454c: 0x1070002a  beq         $v1, $s0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B454Cu;
    {
        const bool branch_taken_0x1b454c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1B4550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B454Cu;
        // 0x1b4550: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b454c) {
            ctx->pc = 0x1B45F8u;
            goto label_1b45f8;
        }
    }
    ctx->pc = 0x1B4554u;
    // 0x1b4554: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4554u;
    {
        const bool branch_taken_0x1b4554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4554u;
        // 0x1b4558: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4554) {
            ctx->pc = 0x1B456Cu;
            goto label_1b456c;
        }
    }
    ctx->pc = 0x1B455Cu;
    // 0x1b455c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B455Cu;
    {
        const bool branch_taken_0x1b455c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b455c) {
            ctx->pc = 0x1B4584u;
            goto label_1b4584;
        }
    }
    ctx->pc = 0x1B4564u;
    // 0x1b4564: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x1B4564u;
    {
        const bool branch_taken_0x1b4564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4564) {
            ctx->pc = 0x1B48B8u;
            goto label_1b48b8;
        }
    }
    ctx->pc = 0x1B456Cu;
label_1b456c:
    // 0x1b456c: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1B456Cu;
    {
        const bool branch_taken_0x1b456c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B4570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B456Cu;
        // 0x1b4570: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b456c) {
            ctx->pc = 0x1B4744u;
            goto label_1b4744;
        }
    }
    ctx->pc = 0x1B4574u;
    // 0x1b4574: 0x50620087  beql        $v1, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1B4574u;
    {
        const bool branch_taken_0x1b4574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4574) {
            ctx->pc = 0x1B4578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4574u;
            // 0x1b4578: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4794u;
            goto label_1b4794;
        }
    }
    ctx->pc = 0x1B457Cu;
    // 0x1b457c: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x1B457Cu;
    {
        const bool branch_taken_0x1b457c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b457c) {
            ctx->pc = 0x1B48B8u;
            goto label_1b48b8;
        }
    }
    ctx->pc = 0x1B4584u;
label_1b4584:
    // 0x1b4584: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x1B4584u;
    SET_GPR_U32(ctx, 31, 0x1B458Cu);
    ctx->pc = 0x1B4588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4584u;
    // 0x1b4588: 0xae200610  sw          $zero, 0x610($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1552), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x1B4584u, 0x1B458Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B458Cu;
label_1b458c:
    // 0x1b458c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1b458cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b4590: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b4590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b4594: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1b4594u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1b4598: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1b4598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b459c: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x1b459cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1b45a0: 0xc6210634  lwc1        $f1, 0x634($s1)
    ctx->pc = 0x1b45a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b45a4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1b45a4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1b45a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b45a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b45ac: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1b45acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b45b0: 0xa22502f6  sb          $a1, 0x2F6($s1)
    ctx->pc = 0x1b45b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b45b4: 0xa23002f5  sb          $s0, 0x2F5($s1)
    ctx->pc = 0x1b45b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 16));
    // 0x1b45b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b45b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b45bc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1b45bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1b45c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b45c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b45c4: 0x240600ab  addiu       $a2, $zero, 0xAB
    ctx->pc = 0x1b45c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    // 0x1b45c8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b45c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b45ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b45d0: 0x0  nop
    ctx->pc = 0x1b45d0u;
    // NOP
    // 0x1b45d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b45d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b45d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b45d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b45dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b45e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45e4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b45e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b45e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b45e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b45ec: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1B45ECu;
    SET_GPR_U32(ctx, 31, 0x1B45F4u);
    ctx->pc = 0x1B45F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45ECu;
    // 0x1b45f0: 0xe6210638  swc1        $f1, 0x638($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1592), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1B45ECu, 0x1B45F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B45F4u;
label_1b45f4:
    // 0x1b45f4: 0xae220648  sw          $v0, 0x648($s1)
    ctx->pc = 0x1b45f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1608), GPR_U32(ctx, 2));
label_1b45f8:
    // 0x1b45f8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x1b45f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x1b45fc: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B45FCu;
    SET_GPR_U32(ctx, 31, 0x1B4604u);
    ctx->pc = 0x1B4600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B45FCu;
    // 0x1b4600: 0x260464f0  addiu       $a0, $s0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B45FCu, 0x1B4604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4604u;
label_1b4604:
    // 0x1b4604: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1b4604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1b4608: 0xc6210614  lwc1        $f1, 0x614($s1)
    ctx->pc = 0x1b4608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b460c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b460cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4610: 0xc6220610  lwc1        $f2, 0x610($s1)
    ctx->pc = 0x1b4610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4614: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b4614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b4618: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1b4618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1b461c: 0xc4400574  lwc1        $f0, 0x574($v0)
    ctx->pc = 0x1b461cu;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b4620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4624: 0xc623060c  lwc1        $f3, 0x60C($s1)
    ctx->pc = 0x1b4624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b4628: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b4628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b462c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1b462cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1b4630: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x1b4630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4634: 0x0  nop
    ctx->pc = 0x1b4634u;
    // NOP
    // 0x1b4638: 0x4500009f  bc1f        . + 4 + (0x9F << 2)
    ctx->pc = 0x1B4638u;
    {
        const bool branch_taken_0x1b4638 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4638u;
        // 0x1b463c: 0xe6220610  swc1        $f2, 0x610($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4638) {
            ctx->pc = 0x1B48B8u;
            goto label_1b48b8;
        }
    }
    ctx->pc = 0x1B4640u;
    // 0x1b4640: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1b4640u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b4644: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b4644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4648: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b4648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b464c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B464Cu;
    {
        const bool branch_taken_0x1b464c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B464Cu;
        // 0x1b4650: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b464c) {
            ctx->pc = 0x1B4660u;
            goto label_1b4660;
        }
    }
    ctx->pc = 0x1B4654u;
    // 0x1b4654: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b4654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b4658: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4658u;
    {
        const bool branch_taken_0x1b4658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4658u;
        // 0x1b465c: 0x8c500020  lw          $s0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4658) {
            ctx->pc = 0x1B4664u;
            goto label_1b4664;
        }
    }
    ctx->pc = 0x1B4660u;
label_1b4660:
    // 0x1b4660: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b4660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b4664:
    // 0x1b4664: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B4664u;
    SET_GPR_U32(ctx, 31, 0x1B466Cu);
    ctx->pc = 0x1B4668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4664u;
    // 0x1b4668: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B4664u, 0x1B466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B466Cu;
label_1b466c:
    // 0x1b466c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b466cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b4670: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b4670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b4674: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1b4674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b4678: 0x264274a0  addiu       $v0, $s2, 0x74A0
    ctx->pc = 0x1b4678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 29856));
    // 0x1b467c: 0xc4430574  lwc1        $f3, 0x574($v0)
    ctx->pc = 0x1b467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b4680: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b4680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4684: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b4684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b4688: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x1b4688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b468c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1b468cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b4690: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b4690u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1b4694: 0xe6010110  swc1        $f1, 0x110($s0)
    ctx->pc = 0x1b4694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x1b4698: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b4698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b469c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b469cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b46a0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B46A0u;
    {
        const bool branch_taken_0x1b46a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46A0u;
        // 0x1b46a4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46a0) {
            ctx->pc = 0x1B46B4u;
            goto label_1b46b4;
        }
    }
    ctx->pc = 0x1B46A8u;
    // 0x1b46a8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b46a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b46ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B46ACu;
    {
        const bool branch_taken_0x1b46ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46ACu;
        // 0x1b46b0: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46ac) {
            ctx->pc = 0x1B46B8u;
            goto label_1b46b8;
        }
    }
    ctx->pc = 0x1B46B4u;
label_1b46b4:
    // 0x1b46b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b46b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b46b8:
    // 0x1b46b8: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1b46b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b46bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b46bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b46c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b46c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b46c4: 0x0  nop
    ctx->pc = 0x1b46c4u;
    // NOP
    // 0x1b46c8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b46c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b46cc: 0x0  nop
    ctx->pc = 0x1b46ccu;
    // NOP
    // 0x1b46d0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1B46D0u;
    {
        const bool branch_taken_0x1b46d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46D0u;
        // 0x1b46d4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46d0) {
            ctx->pc = 0x1B4738u;
            goto label_1b4738;
        }
    }
    ctx->pc = 0x1B46D8u;
    // 0x1b46d8: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1b46d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b46dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b46dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b46e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B46E0u;
    {
        const bool branch_taken_0x1b46e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46E0u;
        // 0x1b46e4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46e0) {
            ctx->pc = 0x1B46F4u;
            goto label_1b46f4;
        }
    }
    ctx->pc = 0x1B46E8u;
    // 0x1b46e8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b46e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b46ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B46ECu;
    {
        const bool branch_taken_0x1b46ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B46ECu;
        // 0x1b46f0: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46ec) {
            ctx->pc = 0x1B4700u;
            goto label_1b4700;
        }
    }
    ctx->pc = 0x1B46F4u;
label_1b46f4:
    // 0x1b46f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b46f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b46f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b46fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b46fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4700:
    // 0x1b4700: 0x0  nop
    ctx->pc = 0x1b4700u;
    // NOP
    // 0x1b4704: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x1b4704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1b4708: 0x8e240654  lw          $a0, 0x654($s1)
    ctx->pc = 0x1b4708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    // 0x1b470c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B470Cu;
    {
        const bool branch_taken_0x1b470c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b470c) {
            ctx->pc = 0x1B4710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B470Cu;
            // 0x1b4710: 0x8e240658  lw          $a0, 0x658($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4720u;
            goto label_1b4720;
        }
    }
    ctx->pc = 0x1B4714u;
    // 0x1b4714: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B4714u;
    SET_GPR_U32(ctx, 31, 0x1B471Cu);
    ctx->pc = 0x1B4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4714u;
    // 0x1b4718: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B4714u, 0x1B471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B471Cu;
label_1b471c:
    // 0x1b471c: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x1b471cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
label_1b4720:
    // 0x1b4720: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4720u;
    {
        const bool branch_taken_0x1b4720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4720u;
        // 0x1b4724: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4720) {
            ctx->pc = 0x1B4734u;
            goto label_1b4734;
        }
    }
    ctx->pc = 0x1B4728u;
    // 0x1b4728: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B4728u;
    SET_GPR_U32(ctx, 31, 0x1B4730u);
    ctx->pc = 0x1B472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4728u;
    // 0x1b472c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B4728u, 0x1B4730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4730u;
label_1b4730:
    // 0x1b4730: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b4734:
    // 0x1b4734: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x1b4734u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
label_1b4738:
    // 0x1b4738: 0xc620060c  lwc1        $f0, 0x60C($s1)
    ctx->pc = 0x1b4738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b473c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1B473Cu;
    {
        const bool branch_taken_0x1b473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B473Cu;
        // 0x1b4740: 0xe6200610  swc1        $f0, 0x610($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b473c) {
            ctx->pc = 0x1B48B8u;
            goto label_1b48b8;
        }
    }
    ctx->pc = 0x1B4744u;
label_1b4744:
    // 0x1b4744: 0xc6210638  lwc1        $f1, 0x638($s1)
    ctx->pc = 0x1b4744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b4748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b474c: 0x0  nop
    ctx->pc = 0x1b474cu;
    // NOP
    // 0x1b4750: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b4750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4754: 0x0  nop
    ctx->pc = 0x1b4754u;
    // NOP
    // 0x1b4758: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4758u;
    {
        const bool branch_taken_0x1b4758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4758u;
        // 0x1b475c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4758) {
            ctx->pc = 0x1B476Cu;
            goto label_1b476c;
        }
    }
    ctx->pc = 0x1B4760u;
    // 0x1b4760: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x1b4760u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b4764: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1B4764u;
    {
        const bool branch_taken_0x1b4764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4764u;
        // 0x1b4768: 0xa22202f5  sb          $v0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4764) {
            ctx->pc = 0x1B48B8u;
            goto label_1b48b8;
        }
    }
    ctx->pc = 0x1B476Cu;
label_1b476c:
    // 0x1b476c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b476cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1b4770: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1B4770u;
    SET_GPR_U32(ctx, 31, 0x1B4778u);
    ctx->pc = 0x1B4774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4770u;
    // 0x1b4774: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B4770u, 0x1B4778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4778u;
label_1b4778:
    // 0x1b4778: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1b4778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1b477c: 0xc6210638  lwc1        $f1, 0x638($s1)
    ctx->pc = 0x1b477cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4780: 0xc4427a14  lwc1        $f2, 0x7A14($v0)
    ctx->pc = 0x1b4780u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4784: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b4784u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b4788: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1b4788u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1b478c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1B478Cu;
    {
        const bool branch_taken_0x1b478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B478Cu;
        // 0x1b4790: 0xe6210638  swc1        $f1, 0x638($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1592), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b478c) {
            ctx->pc = 0x1B48B8u;
            goto label_1b48b8;
        }
    }
    ctx->pc = 0x1B4794u;
label_1b4794:
    // 0x1b4794: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1b4794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b4798: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b4798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b479c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B479Cu;
    {
        const bool branch_taken_0x1b479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B479Cu;
        // 0x1b47a0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b479c) {
            ctx->pc = 0x1B47B0u;
            goto label_1b47b0;
        }
    }
    ctx->pc = 0x1B47A4u;
    // 0x1b47a4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b47a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B47A8u;
    {
        const bool branch_taken_0x1b47a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B47ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47A8u;
        // 0x1b47ac: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47a8) {
            ctx->pc = 0x1B47B4u;
            goto label_1b47b4;
        }
    }
    ctx->pc = 0x1B47B0u;
label_1b47b0:
    // 0x1b47b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b47b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b47b4:
    // 0x1b47b4: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x1b47b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b47b8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1b47b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b47bc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1b47bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1b47c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b47c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b47c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b47c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b47c8: 0x0  nop
    ctx->pc = 0x1b47c8u;
    // NOP
    // 0x1b47cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b47ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b47d0: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x1b47d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1b47d4: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x1b47d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b47d8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x1b47d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b47dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B47DCu;
    {
        const bool branch_taken_0x1b47dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47DCu;
        // 0x1b47e0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47dc) {
            ctx->pc = 0x1B47F0u;
            goto label_1b47f0;
        }
    }
    ctx->pc = 0x1B47E4u;
    // 0x1b47e4: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b47e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B47E8u;
    {
        const bool branch_taken_0x1b47e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B47E8u;
        // 0x1b47ec: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b47e8) {
            ctx->pc = 0x1B47F4u;
            goto label_1b47f4;
        }
    }
    ctx->pc = 0x1B47F0u;
label_1b47f0:
    // 0x1b47f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b47f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b47f4:
    // 0x1b47f4: 0xc4410110  lwc1        $f1, 0x110($v0)
    ctx->pc = 0x1b47f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b47f8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b47f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b47fc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b47fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b4800: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b4804: 0x0  nop
    ctx->pc = 0x1b4804u;
    // NOP
    // 0x1b4808: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b4808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b480c: 0x0  nop
    ctx->pc = 0x1b480cu;
    // NOP
    // 0x1b4810: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x1B4810u;
    {
        const bool branch_taken_0x1b4810 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4810u;
        // 0x1b4814: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4810) {
            ctx->pc = 0x1B4874u;
            goto label_1b4874;
        }
    }
    ctx->pc = 0x1B4818u;
    // 0x1b4818: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1b4818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1b481c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b481cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b4820: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4820u;
    {
        const bool branch_taken_0x1b4820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4820u;
        // 0x1b4824: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4820) {
            ctx->pc = 0x1B4834u;
            goto label_1b4834;
        }
    }
    ctx->pc = 0x1B4828u;
    // 0x1b4828: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x1b4828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1b482c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B482Cu;
    {
        const bool branch_taken_0x1b482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B482Cu;
        // 0x1b4830: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b482c) {
            ctx->pc = 0x1B4844u;
            goto label_1b4844;
        }
    }
    ctx->pc = 0x1B4834u;
label_1b4834:
    // 0x1b4834: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b4834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4838: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b4838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b483c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b483cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b4840: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b4840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b4844:
    // 0x1b4844: 0x0  nop
    ctx->pc = 0x1b4844u;
    // NOP
    // 0x1b4848: 0xe4400110  swc1        $f0, 0x110($v0)
    ctx->pc = 0x1b4848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 272), bits); }
    // 0x1b484c: 0x8e240654  lw          $a0, 0x654($s1)
    ctx->pc = 0x1b484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1620)));
    // 0x1b4850: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4850u;
    {
        const bool branch_taken_0x1b4850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4850) {
            ctx->pc = 0x1B4854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4850u;
            // 0x1b4854: 0x8e240658  lw          $a0, 0x658($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4864u;
            goto label_1b4864;
        }
    }
    ctx->pc = 0x1B4858u;
    // 0x1b4858: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B4858u;
    SET_GPR_U32(ctx, 31, 0x1B4860u);
    ctx->pc = 0x1B485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4858u;
    // 0x1b485c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B4858u, 0x1B4860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4860u;
label_1b4860:
    // 0x1b4860: 0x8e240658  lw          $a0, 0x658($s1)
    ctx->pc = 0x1b4860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1624)));
label_1b4864:
    // 0x1b4864: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4864u;
    {
        const bool branch_taken_0x1b4864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4864) {
            ctx->pc = 0x1B4868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B4864u;
            // 0x1b4868: 0xc6200610  lwc1        $f0, 0x610($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B4878u;
            goto label_1b4878;
        }
    }
    ctx->pc = 0x1B486Cu;
    // 0x1b486c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1B486Cu;
    SET_GPR_U32(ctx, 31, 0x1B4874u);
    ctx->pc = 0x1B4870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B486Cu;
    // 0x1b4870: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B486Cu, 0x1B4874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4874u;
label_1b4874:
    // 0x1b4874: 0xc6200610  lwc1        $f0, 0x610($s1)
    ctx->pc = 0x1b4874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4878:
    // 0x1b4878: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x1b4878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b487c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b487cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b4880: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b4880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b4884: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1b4884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4888: 0x0  nop
    ctx->pc = 0x1b4888u;
    // NOP
    // 0x1b488c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B488Cu;
    {
        const bool branch_taken_0x1b488c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B488Cu;
        // 0x1b4890: 0xe6200610  swc1        $f0, 0x610($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1552), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b488c) {
            ctx->pc = 0x1B48B8u;
            goto label_1b48b8;
        }
    }
    ctx->pc = 0x1B4894u;
    // 0x1b4894: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b4894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b4898: 0x8e250648  lw          $a1, 0x648($s1)
    ctx->pc = 0x1b4898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1608)));
    // 0x1b489c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1B489Cu;
    SET_GPR_U32(ctx, 31, 0x1B48A4u);
    ctx->pc = 0x1B48A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B489Cu;
    // 0x1b48a0: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1B489Cu, 0x1B48A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B48A4u;
label_1b48a4:
    // 0x1b48a4: 0xe6340610  swc1        $f20, 0x610($s1)
    ctx->pc = 0x1b48a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1552), bits); }
    // 0x1b48a8: 0xae200648  sw          $zero, 0x648($s1)
    ctx->pc = 0x1b48a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1608), GPR_U32(ctx, 0));
    // 0x1b48ac: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1b48acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b48b0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1b48b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b48b4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1b48b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1b48b8:
    // 0x1b48b8: 0xc06d46c  jal         func_1B51B0
    ctx->pc = 0x1B48B8u;
    SET_GPR_U32(ctx, 31, 0x1B48C0u);
    ctx->pc = 0x1B48BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B48B8u;
    // 0x1b48bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B51B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B51B0u, 0x1B48B8u, 0x1B48C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B48C0u;
label_1b48c0:
    // 0x1b48c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b48c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b48c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b48c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b48c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b48c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b48cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b48ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b48d0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1b48d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b48d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B48D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B48D4u;
        // 0x1b48d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B48D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B48DCu;
    // 0x1b48dc: 0x0  nop
    ctx->pc = 0x1b48dcu;
    // NOP
    ctx->pc = 0x1b48e0u;
}
