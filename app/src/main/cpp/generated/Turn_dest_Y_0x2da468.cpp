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

// Function: Turn_dest_Y
// Address: 0x2da468 - 0x2da7a8
void Turn_dest_Y_0x2da468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Turn_dest_Y_0x2da468");
#endif

    switch (ctx->pc) {
        case 0x2da4e0u: goto label_2da4e0;
        case 0x2da504u: goto label_2da504;
        case 0x2da64cu: goto label_2da64c;
        default: break;
    }

    ctx->pc = 0x2da468u;

    // 0x2da468: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2da468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2da46c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2da46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2da470: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2da470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2da474: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2da474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2da478: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2da478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da47c: 0xe7bc0070  swc1        $f28, 0x70($sp)
    ctx->pc = 0x2da47cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2da480: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2da480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da484: 0xe7bb0068  swc1        $f27, 0x68($sp)
    ctx->pc = 0x2da484u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2da488: 0x46006f06  mov.s       $f28, $f13
    ctx->pc = 0x2da488u;
    ctx->f[28] = FPU_MOV_S(ctx->f[13]);
    // 0x2da48c: 0xe7ba0060  swc1        $f26, 0x60($sp)
    ctx->pc = 0x2da48cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2da490: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x2da490u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2da494: 0x46006686  mov.s       $f26, $f12
    ctx->pc = 0x2da494u;
    ctx->f[26] = FPU_MOV_S(ctx->f[12]);
    // 0x2da498: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x2da498u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2da49c: 0x46007e46  mov.s       $f25, $f15
    ctx->pc = 0x2da49cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[15]);
    // 0x2da4a0: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2da4a0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2da4a4: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2da4a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2da4a8: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x2da4a8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x2da4ac: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2da4acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2da4b0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2da4b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2da4b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da4b8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2da4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2da4bc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2da4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da4c0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2da4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da4c4: 0x46001d81  sub.s       $f22, $f3, $f0
    ctx->pc = 0x2da4c4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2da4c8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2da4c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2da4cc: 0x46011541  sub.s       $f21, $f2, $f1
    ctx->pc = 0x2da4ccu;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2da4d0: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2da4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2da4d4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2da4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2da4d8: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x2DA4D8u;
    SET_GPR_U32(ctx, 31, 0x2DA4E0u);
    ctx->pc = 0x2DA4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA4D8u;
    // 0x2da4dc: 0x460116c1  sub.s       $f27, $f2, $f1 (Delay Slot)
    ctx->f[27] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x2DA4D8u, 0x2DA4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA4E0u;
label_2da4e0:
    // 0x2da4e0: 0x4614a832  c.eq.s      $f21, $f20
    ctx->pc = 0x2da4e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da4e4: 0x0  nop
    ctx->pc = 0x2da4e4u;
    // NOP
    // 0x2da4e8: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2DA4E8u;
    {
        const bool branch_taken_0x2da4e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA4E8u;
        // 0x2da4ec: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da4e8) {
            ctx->pc = 0x2DA528u;
            goto label_2da528;
        }
    }
    ctx->pc = 0x2DA4F0u;
    // 0x2da4f0: 0x0  nop
    ctx->pc = 0x2da4f0u;
    // NOP
    // 0x2da4f4: 0x0  nop
    ctx->pc = 0x2da4f4u;
    // NOP
    // 0x2da4f8: 0x4615b303  div.s       $f12, $f22, $f21
    ctx->pc = 0x2da4f8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[21]);
    // 0x2da4fc: 0xc0e8592  jal         func_3A1648
    ctx->pc = 0x2DA4FCu;
    SET_GPR_U32(ctx, 31, 0x2DA504u);
    ctx->pc = 0x3A1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1648u, 0x2DA4FCu, 0x2DA504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA504u;
label_2da504:
    // 0x2da504: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x2da504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da508: 0x0  nop
    ctx->pc = 0x2da508u;
    // NOP
    // 0x2da50c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2DA50Cu;
    {
        const bool branch_taken_0x2da50c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA50Cu;
        // 0x2da510: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da50c) {
            ctx->pc = 0x2DA54Cu;
            goto label_2da54c;
        }
    }
    ctx->pc = 0x2DA514u;
    // 0x2da514: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da518: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da51c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da520: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DA520u;
    {
        const bool branch_taken_0x2da520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA520u;
        // 0x2da524: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da520) {
            ctx->pc = 0x2DA54Cu;
            goto label_2da54c;
        }
    }
    ctx->pc = 0x2DA528u;
label_2da528:
    // 0x2da528: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x2da528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da52c: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x2da52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x2da530: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da530u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da534: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2da534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da538: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA538u;
    {
        const bool branch_taken_0x2da538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da538) {
            ctx->pc = 0x2DA53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA538u;
            // 0x2da53c: 0x461a6301  sub.s       $f12, $f12, $f26 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[26]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA554u;
            goto label_2da554;
        }
    }
    ctx->pc = 0x2DA540u;
    // 0x2da540: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2da540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2da544: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da544u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da548: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2da548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2da54c:
    // 0x2da54c: 0x0  nop
    ctx->pc = 0x2da54cu;
    // NOP
    // 0x2da550: 0x461a6301  sub.s       $f12, $f12, $f26
    ctx->pc = 0x2da550u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[26]);
label_2da554:
    // 0x2da554: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da558: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da55c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da55cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da560: 0x0  nop
    ctx->pc = 0x2da560u;
    // NOP
    // 0x2da564: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da568: 0x0  nop
    ctx->pc = 0x2da568u;
    // NOP
    // 0x2da56c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA56Cu;
    {
        const bool branch_taken_0x2da56c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da56c) {
            ctx->pc = 0x2DA588u;
            goto label_2da588;
        }
    }
    ctx->pc = 0x2DA574u;
    // 0x2da574: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da578: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da57c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da580: 0x0  nop
    ctx->pc = 0x2da580u;
    // NOP
    // 0x2da584: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2da584u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2da588:
    // 0x2da588: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2da588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2da58c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da58cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da590: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da594: 0x0  nop
    ctx->pc = 0x2da594u;
    // NOP
    // 0x2da598: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2da598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da59c: 0x0  nop
    ctx->pc = 0x2da59cu;
    // NOP
    // 0x2da5a0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA5A0u;
    {
        const bool branch_taken_0x2da5a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da5a0) {
            ctx->pc = 0x2DA5BCu;
            goto label_2da5bc;
        }
    }
    ctx->pc = 0x2DA5A8u;
    // 0x2da5a8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da5ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da5acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da5b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da5b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da5b4: 0x0  nop
    ctx->pc = 0x2da5b4u;
    // NOP
    // 0x2da5b8: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2da5b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2da5bc:
    // 0x2da5bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da5bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da5c0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2da5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2da5c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da5c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da5c8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da5c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da5cc: 0x0  nop
    ctx->pc = 0x2da5ccu;
    // NOP
    // 0x2da5d0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA5D0u;
    {
        const bool branch_taken_0x2da5d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da5d0) {
            ctx->pc = 0x2DA5D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA5D0u;
            // 0x2da5d4: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA5F4u;
            goto label_2da5f4;
        }
    }
    ctx->pc = 0x2DA5D8u;
    // 0x2da5d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2da5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2da5dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da5dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da5e0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA5E0u;
    {
        const bool branch_taken_0x2da5e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da5e0) {
            ctx->pc = 0x2DA5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA5E0u;
            // 0x2da5e4: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA5F4u;
            goto label_2da5f4;
        }
    }
    ctx->pc = 0x2DA5E8u;
    // 0x2da5e8: 0x460cb834  c.lt.s      $f23, $f12
    ctx->pc = 0x2da5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da5ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA5ECu;
    {
        const bool branch_taken_0x2da5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da5ec) {
            ctx->pc = 0x2DA5F8u;
            goto label_2da5f8;
        }
    }
    ctx->pc = 0x2DA5F4u;
label_2da5f4:
    // 0x2da5f4: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2da5f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da5f8:
    // 0x2da5f8: 0x0  nop
    ctx->pc = 0x2da5f8u;
    // NOP
    // 0x2da5fc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA5FCu;
    {
        const bool branch_taken_0x2da5fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA5FCu;
        // 0x2da600: 0x4600bb86  mov.s       $f14, $f23 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da5fc) {
            ctx->pc = 0x2DA620u;
            goto label_2da620;
        }
    }
    ctx->pc = 0x2DA604u;
    // 0x2da604: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da608: 0x0  nop
    ctx->pc = 0x2da608u;
    // NOP
    // 0x2da60c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da60cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da610: 0x0  nop
    ctx->pc = 0x2da610u;
    // NOP
    // 0x2da614: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA614u;
    {
        const bool branch_taken_0x2da614 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA614u;
        // 0x2da618: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da614) {
            ctx->pc = 0x2DA620u;
            goto label_2da620;
        }
    }
    ctx->pc = 0x2DA61Cu;
    // 0x2da61c: 0x46006387  neg.s       $f14, $f12
    ctx->pc = 0x2da61cu;
    ctx->f[14] = FPU_NEG_S(ctx->f[12]);
label_2da620:
    // 0x2da620: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2da620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2da624: 0x46017302  mul.s       $f12, $f14, $f1
    ctx->pc = 0x2da624u;
    ctx->f[12] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x2da628: 0x4614c032  c.eq.s      $f24, $f20
    ctx->pc = 0x2da628u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[24], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da62c: 0x0  nop
    ctx->pc = 0x2da62cu;
    // NOP
    // 0x2da630: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2DA630u;
    {
        const bool branch_taken_0x2da630 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA630u;
        // 0x2da634: 0xe60c0000  swc1        $f12, 0x0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da630) {
            ctx->pc = 0x2DA670u;
            goto label_2da670;
        }
    }
    ctx->pc = 0x2DA638u;
    // 0x2da638: 0x4600c307  neg.s       $f12, $f24
    ctx->pc = 0x2da638u;
    ctx->f[12] = FPU_NEG_S(ctx->f[24]);
    // 0x2da63c: 0x0  nop
    ctx->pc = 0x2da63cu;
    // NOP
    // 0x2da640: 0x460cdb03  div.s       $f12, $f27, $f12
    ctx->pc = 0x2da640u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[27], ctx->f[12]);
    // 0x2da644: 0xc0e8592  jal         func_3A1648
    ctx->pc = 0x2DA644u;
    SET_GPR_U32(ctx, 31, 0x2DA64Cu);
    ctx->pc = 0x3A1648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1648u, 0x2DA644u, 0x2DA64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA64Cu;
label_2da64c:
    // 0x2da64c: 0x4614c034  c.lt.s      $f24, $f20
    ctx->pc = 0x2da64cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da650: 0x0  nop
    ctx->pc = 0x2da650u;
    // NOP
    // 0x2da654: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2DA654u;
    {
        const bool branch_taken_0x2da654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA654u;
        // 0x2da658: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da654) {
            ctx->pc = 0x2DA694u;
            goto label_2da694;
        }
    }
    ctx->pc = 0x2DA65Cu;
    // 0x2da65c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da660: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da660u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da668: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2DA668u;
    {
        const bool branch_taken_0x2da668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA668u;
        // 0x2da66c: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da668) {
            ctx->pc = 0x2DA694u;
            goto label_2da694;
        }
    }
    ctx->pc = 0x2DA670u;
label_2da670:
    // 0x2da670: 0x461ba034  c.lt.s      $f20, $f27
    ctx->pc = 0x2da670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da674: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x2da674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
    // 0x2da678: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da67c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2da67cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2da680: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA680u;
    {
        const bool branch_taken_0x2da680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da680) {
            ctx->pc = 0x2DA684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA680u;
            // 0x2da684: 0x461c6301  sub.s       $f12, $f12, $f28 (Delay Slot)
            ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA69Cu;
            goto label_2da69c;
        }
    }
    ctx->pc = 0x2DA688u;
    // 0x2da688: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2da688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x2da68c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da68cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da690: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2da690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2da694:
    // 0x2da694: 0x0  nop
    ctx->pc = 0x2da694u;
    // NOP
    // 0x2da698: 0x461c6301  sub.s       $f12, $f12, $f28
    ctx->pc = 0x2da698u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[28]);
label_2da69c:
    // 0x2da69c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2da69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2da6a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da6a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da6a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da6a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da6a8: 0x0  nop
    ctx->pc = 0x2da6a8u;
    // NOP
    // 0x2da6ac: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da6b0: 0x0  nop
    ctx->pc = 0x2da6b0u;
    // NOP
    // 0x2da6b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA6B4u;
    {
        const bool branch_taken_0x2da6b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da6b4) {
            ctx->pc = 0x2DA6D0u;
            goto label_2da6d0;
        }
    }
    ctx->pc = 0x2DA6BCu;
    // 0x2da6bc: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da6c0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da6c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da6c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da6c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da6c8: 0x0  nop
    ctx->pc = 0x2da6c8u;
    // NOP
    // 0x2da6cc: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x2da6ccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_2da6d0:
    // 0x2da6d0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x2da6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x2da6d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da6d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da6d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da6d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da6dc: 0x0  nop
    ctx->pc = 0x2da6dcu;
    // NOP
    // 0x2da6e0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2da6e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da6e4: 0x0  nop
    ctx->pc = 0x2da6e4u;
    // NOP
    // 0x2da6e8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DA6E8u;
    {
        const bool branch_taken_0x2da6e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da6e8) {
            ctx->pc = 0x2DA704u;
            goto label_2da704;
        }
    }
    ctx->pc = 0x2DA6F0u;
    // 0x2da6f0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2da6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2da6f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2da6f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2da6f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2da6f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da6fc: 0x0  nop
    ctx->pc = 0x2da6fcu;
    // NOP
    // 0x2da700: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2da700u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2da704:
    // 0x2da704: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da708: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2da708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2da70c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da710: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da714: 0x0  nop
    ctx->pc = 0x2da714u;
    // NOP
    // 0x2da718: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA718u;
    {
        const bool branch_taken_0x2da718 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da718) {
            ctx->pc = 0x2DA71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA718u;
            // 0x2da71c: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA73Cu;
            goto label_2da73c;
        }
    }
    ctx->pc = 0x2DA720u;
    // 0x2da720: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2da720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2da724: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2da724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2da728: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2DA728u;
    {
        const bool branch_taken_0x2da728 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2da728) {
            ctx->pc = 0x2DA72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA728u;
            // 0x2da72c: 0x46006007  neg.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA73Cu;
            goto label_2da73c;
        }
    }
    ctx->pc = 0x2DA730u;
    // 0x2da730: 0x460cc834  c.lt.s      $f25, $f12
    ctx->pc = 0x2da730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da734: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA734u;
    {
        const bool branch_taken_0x2da734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da734) {
            ctx->pc = 0x2DA740u;
            goto label_2da740;
        }
    }
    ctx->pc = 0x2DA73Cu;
label_2da73c:
    // 0x2da73c: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x2da73cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2da740:
    // 0x2da740: 0x0  nop
    ctx->pc = 0x2da740u;
    // NOP
    // 0x2da744: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x2DA744u;
    {
        const bool branch_taken_0x2da744 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA744u;
        // 0x2da748: 0x4600cbc6  mov.s       $f15, $f25 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da744) {
            ctx->pc = 0x2DA768u;
            goto label_2da768;
        }
    }
    ctx->pc = 0x2DA74Cu;
    // 0x2da74c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2da74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2da750: 0x0  nop
    ctx->pc = 0x2da750u;
    // NOP
    // 0x2da754: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2da754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2da758: 0x0  nop
    ctx->pc = 0x2da758u;
    // NOP
    // 0x2da75c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA75Cu;
    {
        const bool branch_taken_0x2da75c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DA760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA75Cu;
        // 0x2da760: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da75c) {
            ctx->pc = 0x2DA768u;
            goto label_2da768;
        }
    }
    ctx->pc = 0x2DA764u;
    // 0x2da764: 0x460063c7  neg.s       $f15, $f12
    ctx->pc = 0x2da764u;
    ctx->f[15] = FPU_NEG_S(ctx->f[12]);
label_2da768:
    // 0x2da768: 0x46017b02  mul.s       $f12, $f15, $f1
    ctx->pc = 0x2da768u;
    ctx->f[12] = FPU_MUL_S(ctx->f[15], ctx->f[1]);
    // 0x2da76c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2da76cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da774: 0xc7bc0070  lwc1        $f28, 0x70($sp)
    ctx->pc = 0x2da774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2da778: 0xe62c0000  swc1        $f12, 0x0($s1)
    ctx->pc = 0x2da778u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2da77c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da780: 0xc7bb0068  lwc1        $f27, 0x68($sp)
    ctx->pc = 0x2da780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2da784: 0xc7ba0060  lwc1        $f26, 0x60($sp)
    ctx->pc = 0x2da784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2da788: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x2da788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2da78c: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x2da78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2da790: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x2da790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2da794: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2da794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2da798: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2da798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2da79c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2da79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2da7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7A0u;
        // 0x2da7a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA7A8u;
}
