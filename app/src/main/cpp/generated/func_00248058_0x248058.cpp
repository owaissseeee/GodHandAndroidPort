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

// Function: func_00248058
// Address: 0x248058 - 0x248738
void func_00248058_0x248058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00248058_0x248058");
#endif

    switch (ctx->pc) {
        case 0x2480bcu: goto label_2480bc;
        case 0x2480f4u: goto label_2480f4;
        case 0x24811cu: goto label_24811c;
        case 0x248144u: goto label_248144;
        case 0x24814cu: goto label_24814c;
        case 0x248158u: goto label_248158;
        case 0x248164u: goto label_248164;
        case 0x2481e0u: goto label_2481e0;
        case 0x248250u: goto label_248250;
        case 0x24827cu: goto label_24827c;
        case 0x248288u: goto label_248288;
        case 0x2482acu: goto label_2482ac;
        case 0x2482ecu: goto label_2482ec;
        case 0x2482f8u: goto label_2482f8;
        case 0x248330u: goto label_248330;
        case 0x248344u: goto label_248344;
        case 0x248388u: goto label_248388;
        case 0x248394u: goto label_248394;
        case 0x2483a4u: goto label_2483a4;
        case 0x2483d0u: goto label_2483d0;
        case 0x24848cu: goto label_24848c;
        case 0x2484b4u: goto label_2484b4;
        case 0x2484bcu: goto label_2484bc;
        case 0x2484c8u: goto label_2484c8;
        case 0x2484d4u: goto label_2484d4;
        case 0x2484f0u: goto label_2484f0;
        case 0x2485bcu: goto label_2485bc;
        case 0x2486a4u: goto label_2486a4;
        case 0x2486c4u: goto label_2486c4;
        case 0x2486ccu: goto label_2486cc;
        case 0x2486d8u: goto label_2486d8;
        case 0x2486e4u: goto label_2486e4;
        case 0x24870cu: goto label_24870c;
        default: break;
    }

    ctx->pc = 0x248058u;

    // 0x248058: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x248058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x24805c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x24805cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x248060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248064: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x248064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x248068: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x248068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x24806c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x248070: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x248070u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x248074: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x248074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x248078: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x248078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x24807c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x24807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x248080: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x248080u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x248084: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x248084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x248088: 0x2ca40006  sltiu       $a0, $a1, 0x6
    ctx->pc = 0x248088u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x24808c: 0x108001a2  beqz        $a0, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x24808Cu;
    {
        const bool branch_taken_0x24808c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24808Cu;
        // 0x248090: 0xae030250  sw          $v1, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24808c) {
            ctx->pc = 0x248718u;
            goto label_248718;
        }
    }
    ctx->pc = 0x248094u;
    // 0x248094: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x248094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x248098: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x248098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24809c: 0x2442d770  addiu       $v0, $v0, -0x2890
    ctx->pc = 0x24809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956912));
    // 0x2480a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2480a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2480a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2480a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2480a8: 0x800008  jr          $a0
    ctx->pc = 0x2480A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2480B0u: goto label_2480b0;
            case 0x248114u: goto label_248114;
            case 0x248228u: goto label_248228;
            case 0x248410u: goto label_248410;
            case 0x2484DCu: goto label_2484dc;
            case 0x248620u: goto label_248620;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2480A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2480B0u;
label_2480b0:
    // 0x2480b0: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x2480b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x2480b4: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2480B4u;
    SET_GPR_U32(ctx, 31, 0x2480BCu);
    ctx->pc = 0x2480B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2480B4u;
    // 0x2480b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2480B4u, 0x2480BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480BCu;
label_2480bc:
    // 0x2480bc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2480bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2480c0: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x2480c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x2480c4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2480C4u;
    {
        const bool branch_taken_0x2480c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2480c4) {
            ctx->pc = 0x2480C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2480C4u;
            // 0x2480c8: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248100u;
            goto label_248100;
        }
    }
    ctx->pc = 0x2480CCu;
    // 0x2480cc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x2480ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2480d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2480d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2480d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2480d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2480d8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2480d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2480dc: 0x8c4538b8  lw          $a1, 0x38B8($v0)
    ctx->pc = 0x2480dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14520)));
    // 0x2480e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2480e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2480e4: 0x8c4638bc  lw          $a2, 0x38BC($v0)
    ctx->pc = 0x2480e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14524)));
    // 0x2480e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2480e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2480ec: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2480ECu;
    SET_GPR_U32(ctx, 31, 0x2480F4u);
    ctx->pc = 0x2480F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2480ECu;
    // 0x2480f0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2480ECu, 0x2480F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2480F4u;
label_2480f4:
    // 0x2480f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2480f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2480f8: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x2480f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x2480fc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2480fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_248100:
    // 0x248100: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x248100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x248104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x248108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24810c: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x24810cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x248110: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x248110u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_248114:
    // 0x248114: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x248114u;
    SET_GPR_U32(ctx, 31, 0x24811Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x248114u, 0x24811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24811Cu;
label_24811c:
    // 0x24811c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24811cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x248120: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x248120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x248124: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x248124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24812c: 0x3c013dc9  lui         $at, 0x3DC9
    ctx->pc = 0x24812cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15817 << 16));
    // 0x248130: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x248134: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x248134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248138: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x248138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x24813c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x24813Cu;
    SET_GPR_U32(ctx, 31, 0x248144u);
    ctx->pc = 0x248140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24813Cu;
    // 0x248140: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x24813Cu, 0x248144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248144u;
label_248144:
    // 0x248144: 0xc055f06  jal         func_157C18
    ctx->pc = 0x248144u;
    SET_GPR_U32(ctx, 31, 0x24814Cu);
    ctx->pc = 0x248148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248144u;
    // 0x248148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x248144u, 0x24814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24814Cu;
label_24814c:
    // 0x24814c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248150: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x248150u;
    SET_GPR_U32(ctx, 31, 0x248158u);
    ctx->pc = 0x248154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248150u;
    // 0x248154: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x248150u, 0x248158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248158u;
label_248158:
    // 0x248158: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x248158u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24815c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x24815Cu;
    SET_GPR_U32(ctx, 31, 0x248164u);
    ctx->pc = 0x248160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24815Cu;
    // 0x248160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x24815Cu, 0x248164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248164u;
label_248164:
    // 0x248164: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x248164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248168: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x248168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24816c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24816cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x248170: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x248170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x248174: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x248174u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248178: 0x0  nop
    ctx->pc = 0x248178u;
    // NOP
    // 0x24817c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x24817Cu;
    {
        const bool branch_taken_0x24817c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24817Cu;
        // 0x248180: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24817c) {
            ctx->pc = 0x2481D8u;
            goto label_2481d8;
        }
    }
    ctx->pc = 0x248184u;
    // 0x248184: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x248184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248188: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x248188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x24818c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24818cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248190: 0x0  nop
    ctx->pc = 0x248190u;
    // NOP
    // 0x248194: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x248194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248198: 0x0  nop
    ctx->pc = 0x248198u;
    // NOP
    // 0x24819c: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x24819Cu;
    {
        const bool branch_taken_0x24819c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24819c) {
            ctx->pc = 0x2481A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24819Cu;
            // 0x2481a0: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2481CCu;
            goto label_2481cc;
        }
    }
    ctx->pc = 0x2481A4u;
    // 0x2481a4: 0xc6001768  lwc1        $f0, 0x1768($s0)
    ctx->pc = 0x2481a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2481a8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2481a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2481ac: 0x0  nop
    ctx->pc = 0x2481acu;
    // NOP
    // 0x2481b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2481B0u;
    {
        const bool branch_taken_0x2481b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2481B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481B0u;
        // 0x2481b4: 0x2402009f  addiu       $v0, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481b0) {
            ctx->pc = 0x2481C8u;
            goto label_2481c8;
        }
    }
    ctx->pc = 0x2481B8u;
    // 0x2481b8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2481b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2481bc: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x2481bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x2481c0: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x2481C0u;
    {
        const bool branch_taken_0x2481c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481C0u;
        // 0x2481c4: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481c0) {
            ctx->pc = 0x248714u;
            goto label_248714;
        }
    }
    ctx->pc = 0x2481C8u;
label_2481c8:
    // 0x2481c8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2481c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_2481cc:
    // 0x2481cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2481ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2481d0: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x2481D0u;
    {
        const bool branch_taken_0x2481d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2481D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2481D0u;
        // 0x2481d4: 0xa20202f6  sb          $v0, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481d0) {
            ctx->pc = 0x248718u;
            goto label_248718;
        }
    }
    ctx->pc = 0x2481D8u;
label_2481d8:
    // 0x2481d8: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x2481D8u;
    SET_GPR_U32(ctx, 31, 0x2481E0u);
    ctx->pc = 0x2481DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2481D8u;
    // 0x2481dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x2481D8u, 0x2481E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2481E0u;
label_2481e0:
    // 0x2481e0: 0x5440014e  bnel        $v0, $zero, . + 4 + (0x14E << 2)
    ctx->pc = 0x2481E0u;
    {
        const bool branch_taken_0x2481e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2481e0) {
            ctx->pc = 0x2481E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2481E0u;
            // 0x2481e4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24871Cu;
            goto label_24871c;
        }
    }
    ctx->pc = 0x2481E8u;
    // 0x2481e8: 0xc6010760  lwc1        $f1, 0x760($s0)
    ctx->pc = 0x2481e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2481ec: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2481ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2481f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2481f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2481f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2481f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2481f8: 0x0  nop
    ctx->pc = 0x2481f8u;
    // NOP
    // 0x2481fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2481fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248200: 0x0  nop
    ctx->pc = 0x248200u;
    // NOP
    // 0x248204: 0x45000144  bc1f        . + 4 + (0x144 << 2)
    ctx->pc = 0x248204u;
    {
        const bool branch_taken_0x248204 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248204u;
        // 0x248208: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248204) {
            ctx->pc = 0x248718u;
            goto label_248718;
        }
    }
    ctx->pc = 0x24820Cu;
    // 0x24820c: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x24820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x248210: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x248210u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x248214: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x248214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x248218: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x248218u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x24821c: 0xae0316d4  sw          $v1, 0x16D4($s0)
    ctx->pc = 0x24821cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 3));
    // 0x248220: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x248220u;
    {
        const bool branch_taken_0x248220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248220u;
        // 0x248224: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248220) {
            ctx->pc = 0x248714u;
            goto label_248714;
        }
    }
    ctx->pc = 0x248228u;
label_248228:
    // 0x248228: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x248228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24822c: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x24822cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x248230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248234: 0x0  nop
    ctx->pc = 0x248234u;
    // NOP
    // 0x248238: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x248238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24823c: 0x0  nop
    ctx->pc = 0x24823cu;
    // NOP
    // 0x248240: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x248240u;
    {
        const bool branch_taken_0x248240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248240) {
            ctx->pc = 0x2482E4u;
            goto label_2482e4;
        }
    }
    ctx->pc = 0x248248u;
    // 0x248248: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x248248u;
    SET_GPR_U32(ctx, 31, 0x248250u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x248248u, 0x248250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248250u;
label_248250:
    // 0x248250: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x248250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x248254: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248254u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x248258: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24825c: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x24825cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x248260: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x248260u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x248264: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x248264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x248268: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x248268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24826c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24826cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x248270: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x248270u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x248274: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x248274u;
    SET_GPR_U32(ctx, 31, 0x24827Cu);
    ctx->pc = 0x248278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248274u;
    // 0x248278: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x248274u, 0x24827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24827Cu;
label_24827c:
    // 0x24827c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x24827cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x248280: 0xc051e62  jal         func_147988
    ctx->pc = 0x248280u;
    SET_GPR_U32(ctx, 31, 0x248288u);
    ctx->pc = 0x248284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248280u;
    // 0x248284: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x248280u, 0x248288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248288u;
label_248288:
    // 0x248288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24828c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24828cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248290: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x248290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x248294: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x248294u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x248298: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x248298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24829c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x24829cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2482a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2482a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2482a4: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2482A4u;
    SET_GPR_U32(ctx, 31, 0x2482ACu);
    ctx->pc = 0x2482A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482A4u;
    // 0x2482a8: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2482A4u, 0x2482ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482ACu;
label_2482ac:
    // 0x2482ac: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x2482acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x2482b0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2482b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2482b4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2482B4u;
    {
        const bool branch_taken_0x2482b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2482B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482B4u;
        // 0x2482b8: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482b4) {
            ctx->pc = 0x2482D0u;
            goto label_2482d0;
        }
    }
    ctx->pc = 0x2482BCu;
    // 0x2482bc: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2482bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2482c0: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x2482c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x2482c4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2482c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2482c8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2482c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2482cc: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2482ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2482d0:
    // 0x2482d0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2482d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2482d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2482d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2482d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2482d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2482dc: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2482DCu;
    {
        const bool branch_taken_0x2482dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2482E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482DCu;
        // 0x2482e0: 0xa20202f7  sb          $v0, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482dc) {
            ctx->pc = 0x248400u;
            goto label_248400;
        }
    }
    ctx->pc = 0x2482E4u;
label_2482e4:
    // 0x2482e4: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x2482E4u;
    SET_GPR_U32(ctx, 31, 0x2482ECu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2482E4u, 0x2482ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482ECu;
label_2482ec:
    // 0x2482ec: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x2482ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2482f0: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2482F0u;
    SET_GPR_U32(ctx, 31, 0x2482F8u);
    ctx->pc = 0x2482F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482F0u;
    // 0x2482f4: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2482F0u, 0x2482F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482F8u;
label_2482f8:
    // 0x2482f8: 0x0  nop
    ctx->pc = 0x2482f8u;
    // NOP
    // 0x2482fc: 0x0  nop
    ctx->pc = 0x2482fcu;
    // NOP
    // 0x248300: 0x46000504  c1          0x504
    ctx->pc = 0x248300u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x248304: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x248304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x248308: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24830c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x24830cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x248310: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248310u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248314: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x248314u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x248318: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x248318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24831c: 0x0  nop
    ctx->pc = 0x24831cu;
    // NOP
    // 0x248320: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x248320u;
    {
        const bool branch_taken_0x248320 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x248320) {
            ctx->pc = 0x248324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248320u;
            // 0x248324: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24839Cu;
            goto label_24839c;
        }
    }
    ctx->pc = 0x248328u;
    // 0x248328: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x248328u;
    SET_GPR_U32(ctx, 31, 0x248330u);
    ctx->pc = 0x24832Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248328u;
    // 0x24832c: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x248328u, 0x248330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248330u;
label_248330:
    // 0x248330: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x248330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x248334: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x248334u;
    {
        const bool branch_taken_0x248334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248334) {
            ctx->pc = 0x248338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248334u;
            // 0x248338: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24838Cu;
            goto label_24838c;
        }
    }
    ctx->pc = 0x24833Cu;
    // 0x24833c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x24833Cu;
    SET_GPR_U32(ctx, 31, 0x248344u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x24833Cu, 0x248344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248344u;
label_248344:
    // 0x248344: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x248344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x248348: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x248348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24834c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24834cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x248350: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x248350u;
    {
        const bool branch_taken_0x248350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248350u;
        // 0x248354: 0xc6010104  lwc1        $f1, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248350) {
            ctx->pc = 0x24836Cu;
            goto label_24836c;
        }
    }
    ctx->pc = 0x248358u;
    // 0x248358: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x248358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x24835c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x24835cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x248360: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248364: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x248364u;
    {
        const bool branch_taken_0x248364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248364u;
        // 0x248368: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x248364) {
            ctx->pc = 0x248380u;
            goto label_248380;
        }
    }
    ctx->pc = 0x24836Cu;
label_24836c:
    // 0x24836c: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x24836cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x248370: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x248370u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x248374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248378: 0x0  nop
    ctx->pc = 0x248378u;
    // NOP
    // 0x24837c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x24837cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_248380:
    // 0x248380: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x248380u;
    SET_GPR_U32(ctx, 31, 0x248388u);
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x248380u, 0x248388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248388u;
label_248388:
    // 0x248388: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x248388u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_24838c:
    // 0x24838c: 0xc051e62  jal         func_147988
    ctx->pc = 0x24838Cu;
    SET_GPR_U32(ctx, 31, 0x248394u);
    ctx->pc = 0x248390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24838Cu;
    // 0x248390: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x24838Cu, 0x248394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248394u;
label_248394:
    // 0x248394: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x248394u;
    {
        const bool branch_taken_0x248394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248394) {
            ctx->pc = 0x2483A4u;
            goto label_2483a4;
        }
    }
    ctx->pc = 0x24839Cu;
label_24839c:
    // 0x24839c: 0xc051e62  jal         func_147988
    ctx->pc = 0x24839Cu;
    SET_GPR_U32(ctx, 31, 0x2483A4u);
    ctx->pc = 0x2483A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24839Cu;
    // 0x2483a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x24839Cu, 0x2483A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483A4u;
label_2483a4:
    // 0x2483a4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2483a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2483a8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2483a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2483ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2483acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2483b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2483b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2483b4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2483b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2483b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2483b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483bc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2483bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2483c0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2483c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2483c4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2483c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2483c8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2483C8u;
    SET_GPR_U32(ctx, 31, 0x2483D0u);
    ctx->pc = 0x2483CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2483C8u;
    // 0x2483cc: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2483C8u, 0x2483D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2483D0u;
label_2483d0:
    // 0x2483d0: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x2483d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x2483d4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2483d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2483d8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2483D8u;
    {
        const bool branch_taken_0x2483d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2483DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2483D8u;
        // 0x2483dc: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2483d8) {
            ctx->pc = 0x2483F4u;
            goto label_2483f4;
        }
    }
    ctx->pc = 0x2483E0u;
    // 0x2483e0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2483e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2483e4: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x2483e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x2483e8: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2483e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2483ec: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2483ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2483f0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2483f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2483f4:
    // 0x2483f4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2483f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2483f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2483f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2483fc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x2483fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_248400:
    // 0x248400: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x248400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x248404: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x248404u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x248408: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x248408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24840c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24840cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_248410:
    // 0x248410: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x248410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248414: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x248414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x248418: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x248418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x24841c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24841cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248420: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x248420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248424: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x248424u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x248428: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x248428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x24842c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x24842cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x248430: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x248430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x248434: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x248434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248438: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x248438u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24843c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x24843cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248440: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x248440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x248444: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x248444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x248448: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x248448u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24844c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x24844cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248450: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x248450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x248454: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x248454u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248458: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x248458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24845c: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x24845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248460: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x248460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x248464: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x248464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x248468: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x248468u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24846c: 0x0  nop
    ctx->pc = 0x24846cu;
    // NOP
    // 0x248470: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x248470u;
    {
        const bool branch_taken_0x248470 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248470u;
        // 0x248474: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248470) {
            ctx->pc = 0x248484u;
            goto label_248484;
        }
    }
    ctx->pc = 0x248478u;
    // 0x248478: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x248478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x24847c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24847cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x248480: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x248480u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_248484:
    // 0x248484: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x248484u;
    SET_GPR_U32(ctx, 31, 0x24848Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x248484u, 0x24848Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24848Cu;
label_24848c:
    // 0x24848c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24848cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x248490: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x248490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x248494: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x248494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24849c: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x24849cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x2484a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2484a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2484a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2484a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2484a8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2484a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2484ac: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2484ACu;
    SET_GPR_U32(ctx, 31, 0x2484B4u);
    ctx->pc = 0x2484B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484ACu;
    // 0x2484b0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2484ACu, 0x2484B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484B4u;
label_2484b4:
    // 0x2484b4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2484B4u;
    SET_GPR_U32(ctx, 31, 0x2484BCu);
    ctx->pc = 0x2484B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484B4u;
    // 0x2484b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2484B4u, 0x2484BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484BCu;
label_2484bc:
    // 0x2484bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2484bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2484c0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2484C0u;
    SET_GPR_U32(ctx, 31, 0x2484C8u);
    ctx->pc = 0x2484C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484C0u;
    // 0x2484c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2484C0u, 0x2484C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484C8u;
label_2484c8:
    // 0x2484c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2484c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2484cc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2484CCu;
    SET_GPR_U32(ctx, 31, 0x2484D4u);
    ctx->pc = 0x2484D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484CCu;
    // 0x2484d0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2484CCu, 0x2484D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484D4u;
label_2484d4:
    // 0x2484d4: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x2484D4u;
    {
        const bool branch_taken_0x2484d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2484D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2484D4u;
        // 0x2484d8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2484d4) {
            ctx->pc = 0x24871Cu;
            goto label_24871c;
        }
    }
    ctx->pc = 0x2484DCu;
label_2484dc:
    // 0x2484dc: 0x26110580  addiu       $s1, $s0, 0x580
    ctx->pc = 0x2484dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x2484e0: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x2484e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2484e4: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2484e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2484e8: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2484E8u;
    SET_GPR_U32(ctx, 31, 0x2484F0u);
    ctx->pc = 0x2484ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2484E8u;
    // 0x2484ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2484E8u, 0x2484F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2484F0u;
label_2484f0:
    // 0x2484f0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2484f0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2484f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2484f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2484f8: 0x0  nop
    ctx->pc = 0x2484f8u;
    // NOP
    // 0x2484fc: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2484fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248500: 0x0  nop
    ctx->pc = 0x248500u;
    // NOP
    // 0x248504: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x248504u;
    {
        const bool branch_taken_0x248504 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248504u;
        // 0x248508: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248504) {
            ctx->pc = 0x24854Cu;
            goto label_24854c;
        }
    }
    ctx->pc = 0x24850Cu;
    // 0x24850c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24850cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x248510: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x248510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x248514: 0xc6010580  lwc1        $f1, 0x580($s0)
    ctx->pc = 0x248514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248518: 0x0  nop
    ctx->pc = 0x248518u;
    // NOP
    // 0x24851c: 0x0  nop
    ctx->pc = 0x24851cu;
    // NOP
    // 0x248520: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x248520u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x248524: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x248524u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x248528: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x248528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x24852c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x24852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248530: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x248530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x248534: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x248534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x248538: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x248538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24853c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24853cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x248540: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x248540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x248544: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x248544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248548: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x248548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_24854c:
    // 0x24854c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24854cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248550: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x248550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248554: 0x12320006  beq         $s1, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x248554u;
    {
        const bool branch_taken_0x248554 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x248558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248554u;
        // 0x248558: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248554) {
            ctx->pc = 0x248570u;
            goto label_248570;
        }
    }
    ctx->pc = 0x24855Cu;
    // 0x24855c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x24855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248560: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x248560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x248564: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x248564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x248568: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x248568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24856c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x24856cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_248570:
    // 0x248570: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x248570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x248574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248578: 0xda040580  lqc2        $vf4, 0x580($s0)
    ctx->pc = 0x248578u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x24857c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x24857cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x248580: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x248580u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x248584: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x248584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x248588: 0xfa040580  sqc2        $vf4, 0x580($s0)
    ctx->pc = 0x248588u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1408), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24858c: 0xc6020618  lwc1        $f2, 0x618($s0)
    ctx->pc = 0x24858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x248590: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x248590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
    // 0x248594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248598: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x248598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x24859c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24859cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2485a0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2485a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2485a4: 0x0  nop
    ctx->pc = 0x2485a4u;
    // NOP
    // 0x2485a8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x2485A8u;
    {
        const bool branch_taken_0x2485a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2485ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485A8u;
        // 0x2485ac: 0xe6010600  swc1        $f1, 0x600($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485a8) {
            ctx->pc = 0x248614u;
            goto label_248614;
        }
    }
    ctx->pc = 0x2485B0u;
    // 0x2485b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2485b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2485b4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2485B4u;
    SET_GPR_U32(ctx, 31, 0x2485BCu);
    ctx->pc = 0x2485B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2485B4u;
    // 0x2485b8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2485B4u, 0x2485BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485BCu;
label_2485bc:
    // 0x2485bc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2485bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2485c0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2485c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2485c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2485C4u;
    {
        const bool branch_taken_0x2485c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485C4u;
        // 0x2485c8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485c4) {
            ctx->pc = 0x2485E4u;
            goto label_2485e4;
        }
    }
    ctx->pc = 0x2485CCu;
    // 0x2485cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2485ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2485d0: 0x2442d790  addiu       $v0, $v0, -0x2870
    ctx->pc = 0x2485d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956944));
    // 0x2485d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2485d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2485d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2485d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2485dc: 0x800008  jr          $a0
    ctx->pc = 0x2485DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2485E4u: goto label_2485e4;
            case 0x2485F4u: goto label_2485f4;
            case 0x248604u: goto label_248604;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2485E4u;
label_2485e4:
    // 0x2485e4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2485e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2485e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2485e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2485ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2485ECu;
    {
        const bool branch_taken_0x2485ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2485F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485ECu;
        // 0x2485f0: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485ec) {
            ctx->pc = 0x248614u;
            goto label_248614;
        }
    }
    ctx->pc = 0x2485F4u;
label_2485f4:
    // 0x2485f4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2485f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2485f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2485f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2485fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2485FCu;
    {
        const bool branch_taken_0x2485fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2485FCu;
        // 0x248600: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2485fc) {
            ctx->pc = 0x248614u;
            goto label_248614;
        }
    }
    ctx->pc = 0x248604u;
label_248604:
    // 0x248604: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x248604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x248608: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24860c: 0x0  nop
    ctx->pc = 0x24860cu;
    // NOP
    // 0x248610: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x248610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_248614:
    // 0x248614: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x248614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x248618: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x248618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24861c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24861cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_248620:
    // 0x248620: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x248620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248624: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x248624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x248628: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x248628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x24862c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x24862cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248630: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x248630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248634: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x248634u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x248638: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x248638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x24863c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x24863cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x248640: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x248640u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x248644: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x248644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248648: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x248648u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24864c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x24864cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248650: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x248650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x248654: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x248654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x248658: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x248658u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24865c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x24865cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248660: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x248660u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x248664: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x248664u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248668: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x248668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24866c: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x24866cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x248670: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x248670u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x248674: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248674u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248678: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24867c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x24867cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x248680: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x248680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x248684: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x248684u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x248688: 0xda040580  lqc2        $vf4, 0x580($s0)
    ctx->pc = 0x248688u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x24868c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x24868cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x248690: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x248690u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x248694: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x248694u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x248698: 0xfa040580  sqc2        $vf4, 0x580($s0)
    ctx->pc = 0x248698u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1408), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x24869c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x24869Cu;
    SET_GPR_U32(ctx, 31, 0x2486A4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x24869Cu, 0x2486A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486A4u;
label_2486a4:
    // 0x2486a4: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2486a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2486a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2486a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486ac: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x2486acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x2486b0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2486b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2486b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2486b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2486b8: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x2486b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2486bc: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x2486BCu;
    SET_GPR_U32(ctx, 31, 0x2486C4u);
    ctx->pc = 0x2486C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2486BCu;
    // 0x2486c0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x2486BCu, 0x2486C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486C4u;
label_2486c4:
    // 0x2486c4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2486C4u;
    SET_GPR_U32(ctx, 31, 0x2486CCu);
    ctx->pc = 0x2486C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2486C4u;
    // 0x2486c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2486C4u, 0x2486CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486CCu;
label_2486cc:
    // 0x2486cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2486ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2486d0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2486D0u;
    SET_GPR_U32(ctx, 31, 0x2486D8u);
    ctx->pc = 0x2486D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2486D0u;
    // 0x2486d4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2486D0u, 0x2486D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486D8u;
label_2486d8:
    // 0x2486d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2486d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2486dc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2486DCu;
    SET_GPR_U32(ctx, 31, 0x2486E4u);
    ctx->pc = 0x2486E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2486DCu;
    // 0x2486e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2486DCu, 0x2486E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486E4u;
label_2486e4:
    // 0x2486e4: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x2486e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2486e8: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x2486e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2486ec: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2486ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2486f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2486f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2486f4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x2486f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2486f8: 0x0  nop
    ctx->pc = 0x2486f8u;
    // NOP
    // 0x2486fc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2486FCu;
    {
        const bool branch_taken_0x2486fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2486FCu;
        // 0x248700: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2486fc) {
            ctx->pc = 0x248718u;
            goto label_248718;
        }
    }
    ctx->pc = 0x248704u;
    // 0x248704: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x248704u;
    SET_GPR_U32(ctx, 31, 0x24870Cu);
    ctx->pc = 0x248708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248704u;
    // 0x248708: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x248704u, 0x24870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24870Cu;
label_24870c:
    // 0x24870c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x24870Cu;
    {
        const bool branch_taken_0x24870c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24870c) {
            ctx->pc = 0x248710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24870Cu;
            // 0x248710: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24871Cu;
            goto label_24871c;
        }
    }
    ctx->pc = 0x248714u;
label_248714:
    // 0x248714: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x248714u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_248718:
    // 0x248718: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x248718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_24871c:
    // 0x24871c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x24871cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x248720: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x248720u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x248724: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x248724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x248728: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x248728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24872c: 0x3e00008  jr          $ra
    ctx->pc = 0x24872Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24872Cu;
        // 0x248730: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24872Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248734u;
    // 0x248734: 0x0  nop
    ctx->pc = 0x248734u;
    // NOP
    ctx->pc = 0x248738u;
}
