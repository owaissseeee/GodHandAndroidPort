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

// Function: func_00252070
// Address: 0x252070 - 0x253048
void func_00252070_0x252070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00252070_0x252070");
#endif

    switch (ctx->pc) {
        case 0x2520f4u: goto label_2520f4;
        case 0x25212cu: goto label_25212c;
        case 0x25214cu: goto label_25214c;
        case 0x25215cu: goto label_25215c;
        case 0x252168u: goto label_252168;
        case 0x25217cu: goto label_25217c;
        case 0x2521b8u: goto label_2521b8;
        case 0x2521c4u: goto label_2521c4;
        case 0x2521fcu: goto label_2521fc;
        case 0x25228cu: goto label_25228c;
        case 0x2522ecu: goto label_2522ec;
        case 0x25234cu: goto label_25234c;
        case 0x2523dcu: goto label_2523dc;
        case 0x25246cu: goto label_25246c;
        case 0x2524ccu: goto label_2524cc;
        case 0x252524u: goto label_252524;
        case 0x252550u: goto label_252550;
        case 0x25257cu: goto label_25257c;
        case 0x2525a0u: goto label_2525a0;
        case 0x2525d8u: goto label_2525d8;
        case 0x252608u: goto label_252608;
        case 0x252634u: goto label_252634;
        case 0x252644u: goto label_252644;
        case 0x2526a4u: goto label_2526a4;
        case 0x252704u: goto label_252704;
        case 0x252794u: goto label_252794;
        case 0x252824u: goto label_252824;
        case 0x2528b4u: goto label_2528b4;
        case 0x252934u: goto label_252934;
        case 0x252990u: goto label_252990;
        case 0x2529bcu: goto label_2529bc;
        case 0x252a28u: goto label_252a28;
        case 0x252a4cu: goto label_252a4c;
        case 0x252a78u: goto label_252a78;
        case 0x252a94u: goto label_252a94;
        case 0x252ae0u: goto label_252ae0;
        case 0x252b08u: goto label_252b08;
        case 0x252b10u: goto label_252b10;
        case 0x252b30u: goto label_252b30;
        case 0x252b38u: goto label_252b38;
        case 0x252b5cu: goto label_252b5c;
        case 0x252bc8u: goto label_252bc8;
        case 0x252bd4u: goto label_252bd4;
        case 0x252c34u: goto label_252c34;
        case 0x252c64u: goto label_252c64;
        case 0x252c88u: goto label_252c88;
        case 0x252cacu: goto label_252cac;
        case 0x252db4u: goto label_252db4;
        case 0x252dd4u: goto label_252dd4;
        case 0x252decu: goto label_252dec;
        case 0x252f70u: goto label_252f70;
        case 0x252f94u: goto label_252f94;
        default: break;
    }

    ctx->pc = 0x252070u;

    // 0x252070: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x252070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x252074: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x252074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x252078: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x252078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x25207c: 0x34421020  ori         $v0, $v0, 0x1020
    ctx->pc = 0x25207cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4128);
    // 0x252080: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x252080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x252084: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x252084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252088: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x252088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x25208c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x25208cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252090: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x252090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x252094: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x252094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x252098: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x252098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x25209c: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x25209cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2520a0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2520a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2520a4: 0x8e4316d0  lw          $v1, 0x16D0($s2)
    ctx->pc = 0x2520a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x2520a8: 0x924502f6  lbu         $a1, 0x2F6($s2)
    ctx->pc = 0x2520a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x2520ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2520acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2520b0: 0x10a402a4  beq         $a1, $a0, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x2520B0u;
    {
        const bool branch_taken_0x2520b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2520B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520B0u;
        // 0x2520b4: 0xae4316d0  sw          $v1, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520b0) {
            ctx->pc = 0x252B44u;
            goto label_252b44;
        }
    }
    ctx->pc = 0x2520B8u;
    // 0x2520b8: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x2520b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2520bc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2520BCu;
    {
        const bool branch_taken_0x2520bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2520bc) {
            ctx->pc = 0x2520C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2520BCu;
            // 0x2520c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2520D4u;
            goto label_2520d4;
        }
    }
    ctx->pc = 0x2520C4u;
    // 0x2520c4: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2520C4u;
    {
        const bool branch_taken_0x2520c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520C4u;
        // 0x2520c8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520c4) {
            ctx->pc = 0x2520ECu;
            goto label_2520ec;
        }
    }
    ctx->pc = 0x2520CCu;
    // 0x2520cc: 0x100003d5  b           . + 4 + (0x3D5 << 2)
    ctx->pc = 0x2520CCu;
    {
        const bool branch_taken_0x2520cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520CCu;
        // 0x2520d0: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520cc) {
            ctx->pc = 0x253024u;
            goto label_253024;
        }
    }
    ctx->pc = 0x2520D4u;
label_2520d4:
    // 0x2520d4: 0x10a20347  beq         $a1, $v0, . + 4 + (0x347 << 2)
    ctx->pc = 0x2520D4u;
    {
        const bool branch_taken_0x2520d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2520D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520D4u;
        // 0x2520d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520d4) {
            ctx->pc = 0x252DF4u;
            goto label_252df4;
        }
    }
    ctx->pc = 0x2520DCu;
    // 0x2520dc: 0x10a20368  beq         $a1, $v0, . + 4 + (0x368 << 2)
    ctx->pc = 0x2520DCu;
    {
        const bool branch_taken_0x2520dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2520E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520DCu;
        // 0x2520e0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520dc) {
            ctx->pc = 0x252E80u;
            goto label_252e80;
        }
    }
    ctx->pc = 0x2520E4u;
    // 0x2520e4: 0x100003cf  b           . + 4 + (0x3CF << 2)
    ctx->pc = 0x2520E4u;
    {
        const bool branch_taken_0x2520e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520E4u;
        // 0x2520e8: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520e4) {
            ctx->pc = 0x253024u;
            goto label_253024;
        }
    }
    ctx->pc = 0x2520ECu;
label_2520ec:
    // 0x2520ec: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x2520ECu;
    SET_GPR_U32(ctx, 31, 0x2520F4u);
    ctx->pc = 0x2520F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2520ECu;
    // 0x2520f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x2520ECu, 0x2520F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2520F4u;
label_2520f4:
    // 0x2520f4: 0x8e420698  lw          $v0, 0x698($s2)
    ctx->pc = 0x2520f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
    // 0x2520f8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2520F8u;
    {
        const bool branch_taken_0x2520f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2520FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2520F8u;
        // 0x2520fc: 0xae401710  sw          $zero, 0x1710($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2520f8) {
            ctx->pc = 0x2521BCu;
            goto label_2521bc;
        }
    }
    ctx->pc = 0x252100u;
    // 0x252100: 0x8c500034  lw          $s0, 0x34($v0)
    ctx->pc = 0x252100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x252104: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x252104u;
    {
        const bool branch_taken_0x252104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x252108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252104u;
        // 0x252108: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252104) {
            ctx->pc = 0x2521BCu;
            goto label_2521bc;
        }
    }
    ctx->pc = 0x25210Cu;
    // 0x25210c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x25210cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x252110: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x252110u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x252114: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x252114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x252118: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x252118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x25211c: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x25211cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x252120: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x252120u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x252124: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x252124u;
    SET_GPR_U32(ctx, 31, 0x25212Cu);
    ctx->pc = 0x252128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252124u;
    // 0x252128: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x252124u, 0x25212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25212Cu;
label_25212c:
    // 0x25212c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x25212cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252130: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x252130u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x252134: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x252134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252138: 0x0  nop
    ctx->pc = 0x252138u;
    // NOP
    // 0x25213c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25213Cu;
    {
        const bool branch_taken_0x25213c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25213c) {
            ctx->pc = 0x252140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25213Cu;
            // 0x252140: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252144u;
            goto label_252144;
        }
    }
    ctx->pc = 0x252144u;
label_252144:
    // 0x252144: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x252144u;
    SET_GPR_U32(ctx, 31, 0x25214Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x252144u, 0x25214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25214Cu;
label_25214c:
    // 0x25214c: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25214Cu;
    {
        const bool branch_taken_0x25214c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x25214c) {
            ctx->pc = 0x252150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25214Cu;
            // 0x252150: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252170u;
            goto label_252170;
        }
    }
    ctx->pc = 0x252154u;
    // 0x252154: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x252154u;
    SET_GPR_U32(ctx, 31, 0x25215Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x252154u, 0x25215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25215Cu;
label_25215c:
    // 0x25215c: 0xc44c0104  lwc1        $f12, 0x104($v0)
    ctx->pc = 0x25215cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x252160: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x252160u;
    SET_GPR_U32(ctx, 31, 0x252168u);
    ctx->pc = 0x252164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252160u;
    // 0x252164: 0x46156300  add.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x252160u, 0x252168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252168u;
label_252168:
    // 0x252168: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x252168u;
    {
        const bool branch_taken_0x252168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252168u;
        // 0x25216c: 0xe6400104  swc1        $f0, 0x104($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252168) {
            ctx->pc = 0x25217Cu;
            goto label_25217c;
        }
    }
    ctx->pc = 0x252170u;
label_252170:
    // 0x252170: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x252170u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x252174: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x252174u;
    SET_GPR_U32(ctx, 31, 0x25217Cu);
    ctx->pc = 0x252178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252174u;
    // 0x252178: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x252174u, 0x25217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25217Cu;
label_25217c:
    // 0x25217c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x25217cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x252180: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x252180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x252184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252188: 0x0  nop
    ctx->pc = 0x252188u;
    // NOP
    // 0x25218c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x25218cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252190: 0x0  nop
    ctx->pc = 0x252190u;
    // NOP
    // 0x252194: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x252194u;
    {
        const bool branch_taken_0x252194 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252194u;
        // 0x252198: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252194) {
            ctx->pc = 0x2521BCu;
            goto label_2521bc;
        }
    }
    ctx->pc = 0x25219Cu;
    // 0x25219c: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x25219cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2521a0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2521a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2521a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2521a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2521a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2521a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2521ac: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x2521acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x2521b0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2521B0u;
    SET_GPR_U32(ctx, 31, 0x2521B8u);
    ctx->pc = 0x2521B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2521B0u;
    // 0x2521b4: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2521B0u, 0x2521B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2521B8u;
label_2521b8:
    // 0x2521b8: 0xe6400104  swc1        $f0, 0x104($s2)
    ctx->pc = 0x2521b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 260), bits); }
label_2521bc:
    // 0x2521bc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x2521BCu;
    SET_GPR_U32(ctx, 31, 0x2521C4u);
    ctx->pc = 0x2521C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2521BCu;
    // 0x2521c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x2521BCu, 0x2521C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2521C4u;
label_2521c4:
    // 0x2521c4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2521c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2521c8: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x2521c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2521cc: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x2521ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x2521d0: 0x2c83007a  sltiu       $v1, $a0, 0x7A
    ctx->pc = 0x2521d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)122) ? 1 : 0);
    // 0x2521d4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2521D4u;
    {
        const bool branch_taken_0x2521d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2521D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2521D4u;
        // 0x2521d8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2521d4) {
            ctx->pc = 0x2521F4u;
            goto label_2521f4;
        }
    }
    ctx->pc = 0x2521DCu;
    // 0x2521dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2521dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2521e0: 0x2442fcd0  addiu       $v0, $v0, -0x330
    ctx->pc = 0x2521e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966480));
    // 0x2521e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2521e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2521e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2521e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2521ec: 0x800008  jr          $a0
    ctx->pc = 0x2521ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2521F4u: goto label_2521f4;
            case 0x252284u: goto label_252284;
            case 0x2522E4u: goto label_2522e4;
            case 0x252344u: goto label_252344;
            case 0x2523D4u: goto label_2523d4;
            case 0x252464u: goto label_252464;
            case 0x2524C4u: goto label_2524c4;
            case 0x252584u: goto label_252584;
            case 0x25263Cu: goto label_25263c;
            case 0x25269Cu: goto label_25269c;
            case 0x2526FCu: goto label_2526fc;
            case 0x25278Cu: goto label_25278c;
            case 0x25281Cu: goto label_25281c;
            case 0x2528ACu: goto label_2528ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2521ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2521F4u;
label_2521f4:
    // 0x2521f4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2521F4u;
    SET_GPR_U32(ctx, 31, 0x2521FCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2521F4u, 0x2521FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2521FCu;
label_2521fc:
    // 0x2521fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2521fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x252200: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x252200u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x252204: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252204u;
    {
        const bool branch_taken_0x252204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252204) {
            ctx->pc = 0x252208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252204u;
            // 0x252208: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25220Cu;
            goto label_25220c;
        }
    }
    ctx->pc = 0x25220Cu;
label_25220c:
    // 0x25220c: 0x2010  mfhi        $a0
    ctx->pc = 0x25220cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x252210: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x252210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x252214: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x252214u;
    {
        const bool branch_taken_0x252214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252214u;
        // 0x252218: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252214) {
            ctx->pc = 0x252234u;
            goto label_252234;
        }
    }
    ctx->pc = 0x25221Cu;
    // 0x25221c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25221cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252220: 0x2442fec0  addiu       $v0, $v0, -0x140
    ctx->pc = 0x252220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966976));
    // 0x252224: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x252224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252228: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x252228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25222c: 0x800008  jr          $a0
    ctx->pc = 0x25222Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x252234u: goto label_252234;
            case 0x252244u: goto label_252244;
            case 0x252254u: goto label_252254;
            case 0x252264u: goto label_252264;
            case 0x252274u: goto label_252274;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25222Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252234u;
label_252234:
    // 0x252234: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252238: 0x8c430310  lw          $v1, 0x310($v0)
    ctx->pc = 0x252238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 784)));
    // 0x25223c: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x25223Cu;
    {
        const bool branch_taken_0x25223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25223Cu;
        // 0x252240: 0x8c440314  lw          $a0, 0x314($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25223c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252244u;
label_252244:
    // 0x252244: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252248: 0x8c430318  lw          $v1, 0x318($v0)
    ctx->pc = 0x252248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 792)));
    // 0x25224c: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x25224Cu;
    {
        const bool branch_taken_0x25224c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25224Cu;
        // 0x252250: 0x8c44031c  lw          $a0, 0x31C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25224c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252254u;
label_252254:
    // 0x252254: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252258: 0x8c430320  lw          $v1, 0x320($v0)
    ctx->pc = 0x252258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x25225c: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x25225Cu;
    {
        const bool branch_taken_0x25225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25225Cu;
        // 0x252260: 0x8c440324  lw          $a0, 0x324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25225c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252264u;
label_252264:
    // 0x252264: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252268: 0x8c430328  lw          $v1, 0x328($v0)
    ctx->pc = 0x252268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 808)));
    // 0x25226c: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x25226Cu;
    {
        const bool branch_taken_0x25226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25226Cu;
        // 0x252270: 0x8c44032c  lw          $a0, 0x32C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25226c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252274u;
label_252274:
    // 0x252274: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252278: 0x8c430330  lw          $v1, 0x330($v0)
    ctx->pc = 0x252278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x25227c: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x25227Cu;
    {
        const bool branch_taken_0x25227c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25227Cu;
        // 0x252280: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25227c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252284u;
label_252284:
    // 0x252284: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x252284u;
    SET_GPR_U32(ctx, 31, 0x25228Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x252284u, 0x25228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25228Cu;
label_25228c:
    // 0x25228c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25228cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252290: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252294: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x252294u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x252298: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252298u;
    {
        const bool branch_taken_0x252298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252298) {
            ctx->pc = 0x25229Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252298u;
            // 0x25229c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2522A0u;
            goto label_2522a0;
        }
    }
    ctx->pc = 0x2522A0u;
label_2522a0:
    // 0x2522a0: 0x2810  mfhi        $a1
    ctx->pc = 0x2522a0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2522a4: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2522A4u;
    {
        const bool branch_taken_0x2522a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2522a4) {
            ctx->pc = 0x2522A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2522A4u;
            // 0x2522a8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2522CCu;
            goto label_2522cc;
        }
    }
    ctx->pc = 0x2522ACu;
    // 0x2522ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2522ACu;
    {
        const bool branch_taken_0x2522ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522ACu;
        // 0x2522b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522ac) {
            ctx->pc = 0x2522BCu;
            goto label_2522bc;
        }
    }
    ctx->pc = 0x2522B4u;
    // 0x2522b4: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2522B4u;
    {
        const bool branch_taken_0x2522b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2522b4) {
            ctx->pc = 0x2522B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2522B4u;
            // 0x2522b8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2522D8u;
            goto label_2522d8;
        }
    }
    ctx->pc = 0x2522BCu;
label_2522bc:
    // 0x2522bc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2522bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2522c0: 0x8c431b68  lw          $v1, 0x1B68($v0)
    ctx->pc = 0x2522c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7016)));
    // 0x2522c4: 0x10000190  b           . + 4 + (0x190 << 2)
    ctx->pc = 0x2522C4u;
    {
        const bool branch_taken_0x2522c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522C4u;
        // 0x2522c8: 0x8c441b6c  lw          $a0, 0x1B6C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522c4) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2522CCu;
label_2522cc:
    // 0x2522cc: 0x8c431b70  lw          $v1, 0x1B70($v0)
    ctx->pc = 0x2522ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7024)));
    // 0x2522d0: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x2522D0u;
    {
        const bool branch_taken_0x2522d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522D0u;
        // 0x2522d4: 0x8c441b74  lw          $a0, 0x1B74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522d0) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2522D8u;
label_2522d8:
    // 0x2522d8: 0x8c431b78  lw          $v1, 0x1B78($v0)
    ctx->pc = 0x2522d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7032)));
    // 0x2522dc: 0x1000018a  b           . + 4 + (0x18A << 2)
    ctx->pc = 0x2522DCu;
    {
        const bool branch_taken_0x2522dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2522DCu;
        // 0x2522e0: 0x8c441b7c  lw          $a0, 0x1B7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522dc) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2522E4u;
label_2522e4:
    // 0x2522e4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2522E4u;
    SET_GPR_U32(ctx, 31, 0x2522ECu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2522E4u, 0x2522ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2522ECu;
label_2522ec:
    // 0x2522ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2522ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2522f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2522f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2522f4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2522f4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2522f8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2522F8u;
    {
        const bool branch_taken_0x2522f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2522f8) {
            ctx->pc = 0x2522FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2522F8u;
            // 0x2522fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252300u;
            goto label_252300;
        }
    }
    ctx->pc = 0x252300u;
label_252300:
    // 0x252300: 0x2810  mfhi        $a1
    ctx->pc = 0x252300u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x252304: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x252304u;
    {
        const bool branch_taken_0x252304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x252304) {
            ctx->pc = 0x252308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252304u;
            // 0x252308: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25232Cu;
            goto label_25232c;
        }
    }
    ctx->pc = 0x25230Cu;
    // 0x25230c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25230Cu;
    {
        const bool branch_taken_0x25230c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x252310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25230Cu;
        // 0x252310: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25230c) {
            ctx->pc = 0x25231Cu;
            goto label_25231c;
        }
    }
    ctx->pc = 0x252314u;
    // 0x252314: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252314u;
    {
        const bool branch_taken_0x252314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x252314) {
            ctx->pc = 0x252318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252314u;
            // 0x252318: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252338u;
            goto label_252338;
        }
    }
    ctx->pc = 0x25231Cu;
label_25231c:
    // 0x25231c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25231cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252320: 0x8c432c04  lw          $v1, 0x2C04($v0)
    ctx->pc = 0x252320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x252324: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x252324u;
    {
        const bool branch_taken_0x252324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252324u;
        // 0x252328: 0x8c442c08  lw          $a0, 0x2C08($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252324) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25232Cu;
label_25232c:
    // 0x25232c: 0x8c432c0c  lw          $v1, 0x2C0C($v0)
    ctx->pc = 0x25232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11276)));
    // 0x252330: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x252330u;
    {
        const bool branch_taken_0x252330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252330u;
        // 0x252334: 0x8c442c10  lw          $a0, 0x2C10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252330) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252338u;
label_252338:
    // 0x252338: 0x8c432c14  lw          $v1, 0x2C14($v0)
    ctx->pc = 0x252338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11284)));
    // 0x25233c: 0x10000172  b           . + 4 + (0x172 << 2)
    ctx->pc = 0x25233Cu;
    {
        const bool branch_taken_0x25233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25233Cu;
        // 0x252340: 0x8c442c18  lw          $a0, 0x2C18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25233c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252344u;
label_252344:
    // 0x252344: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x252344u;
    SET_GPR_U32(ctx, 31, 0x25234Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x252344u, 0x25234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25234Cu;
label_25234c:
    // 0x25234c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x25234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x252350: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x252350u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x252354: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252354u;
    {
        const bool branch_taken_0x252354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252354) {
            ctx->pc = 0x252358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252354u;
            // 0x252358: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25235Cu;
            goto label_25235c;
        }
    }
    ctx->pc = 0x25235Cu;
label_25235c:
    // 0x25235c: 0x2010  mfhi        $a0
    ctx->pc = 0x25235cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x252360: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x252360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x252364: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x252364u;
    {
        const bool branch_taken_0x252364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252364u;
        // 0x252368: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252364) {
            ctx->pc = 0x252384u;
            goto label_252384;
        }
    }
    ctx->pc = 0x25236Cu;
    // 0x25236c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x25236cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252370: 0x2442fee0  addiu       $v0, $v0, -0x120
    ctx->pc = 0x252370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967008));
    // 0x252374: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x252374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252378: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x252378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25237c: 0x800008  jr          $a0
    ctx->pc = 0x25237Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x252384u: goto label_252384;
            case 0x252394u: goto label_252394;
            case 0x2523A4u: goto label_2523a4;
            case 0x2523B4u: goto label_2523b4;
            case 0x2523C4u: goto label_2523c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25237Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252384u;
label_252384:
    // 0x252384: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252388: 0x8c430ed4  lw          $v1, 0xED4($v0)
    ctx->pc = 0x252388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3796)));
    // 0x25238c: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x25238Cu;
    {
        const bool branch_taken_0x25238c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25238Cu;
        // 0x252390: 0x8c440ed8  lw          $a0, 0xED8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25238c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252394u;
label_252394:
    // 0x252394: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252398: 0x8c430edc  lw          $v1, 0xEDC($v0)
    ctx->pc = 0x252398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3804)));
    // 0x25239c: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x25239Cu;
    {
        const bool branch_taken_0x25239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25239Cu;
        // 0x2523a0: 0x8c440ee0  lw          $a0, 0xEE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25239c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2523A4u;
label_2523a4:
    // 0x2523a4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2523a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2523a8: 0x8c430ee4  lw          $v1, 0xEE4($v0)
    ctx->pc = 0x2523a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3812)));
    // 0x2523ac: 0x10000156  b           . + 4 + (0x156 << 2)
    ctx->pc = 0x2523ACu;
    {
        const bool branch_taken_0x2523ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523ACu;
        // 0x2523b0: 0x8c440ee8  lw          $a0, 0xEE8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3816)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523ac) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2523B4u;
label_2523b4:
    // 0x2523b4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2523b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2523b8: 0x8c430eec  lw          $v1, 0xEEC($v0)
    ctx->pc = 0x2523b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3820)));
    // 0x2523bc: 0x10000152  b           . + 4 + (0x152 << 2)
    ctx->pc = 0x2523BCu;
    {
        const bool branch_taken_0x2523bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523BCu;
        // 0x2523c0: 0x8c440ef0  lw          $a0, 0xEF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523bc) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2523C4u;
label_2523c4:
    // 0x2523c4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2523c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2523c8: 0x8c430ef4  lw          $v1, 0xEF4($v0)
    ctx->pc = 0x2523c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3828)));
    // 0x2523cc: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x2523CCu;
    {
        const bool branch_taken_0x2523cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523CCu;
        // 0x2523d0: 0x8c440ef8  lw          $a0, 0xEF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523cc) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2523D4u;
label_2523d4:
    // 0x2523d4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2523D4u;
    SET_GPR_U32(ctx, 31, 0x2523DCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2523D4u, 0x2523DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2523DCu;
label_2523dc:
    // 0x2523dc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2523dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2523e0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2523e0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2523e4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2523E4u;
    {
        const bool branch_taken_0x2523e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2523e4) {
            ctx->pc = 0x2523E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2523E4u;
            // 0x2523e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2523ECu;
            goto label_2523ec;
        }
    }
    ctx->pc = 0x2523ECu;
label_2523ec:
    // 0x2523ec: 0x2010  mfhi        $a0
    ctx->pc = 0x2523ecu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2523f0: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2523f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2523f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2523F4u;
    {
        const bool branch_taken_0x2523f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2523F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2523F4u;
        // 0x2523f8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2523f4) {
            ctx->pc = 0x252414u;
            goto label_252414;
        }
    }
    ctx->pc = 0x2523FCu;
    // 0x2523fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2523fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252400: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x252400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x252404: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x252404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252408: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x252408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25240c: 0x800008  jr          $a0
    ctx->pc = 0x25240Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x252414u: goto label_252414;
            case 0x252424u: goto label_252424;
            case 0x252434u: goto label_252434;
            case 0x252444u: goto label_252444;
            case 0x252454u: goto label_252454;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25240Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x252414u;
label_252414:
    // 0x252414: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252418: 0x8c430a94  lw          $v1, 0xA94($v0)
    ctx->pc = 0x252418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2708)));
    // 0x25241c: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x25241Cu;
    {
        const bool branch_taken_0x25241c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25241Cu;
        // 0x252420: 0x8c440a98  lw          $a0, 0xA98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25241c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252424u;
label_252424:
    // 0x252424: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252428: 0x8c430a9c  lw          $v1, 0xA9C($v0)
    ctx->pc = 0x252428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2716)));
    // 0x25242c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x25242Cu;
    {
        const bool branch_taken_0x25242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25242Cu;
        // 0x252430: 0x8c440aa0  lw          $a0, 0xAA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2720)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25242c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252434u;
label_252434:
    // 0x252434: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252438: 0x8c430aa4  lw          $v1, 0xAA4($v0)
    ctx->pc = 0x252438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2724)));
    // 0x25243c: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x25243Cu;
    {
        const bool branch_taken_0x25243c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25243Cu;
        // 0x252440: 0x8c440aa8  lw          $a0, 0xAA8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25243c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252444u;
label_252444:
    // 0x252444: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252448: 0x8c430aac  lw          $v1, 0xAAC($v0)
    ctx->pc = 0x252448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2732)));
    // 0x25244c: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x25244Cu;
    {
        const bool branch_taken_0x25244c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25244Cu;
        // 0x252450: 0x8c440ab0  lw          $a0, 0xAB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25244c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252454u;
label_252454:
    // 0x252454: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252458: 0x8c430ab4  lw          $v1, 0xAB4($v0)
    ctx->pc = 0x252458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2740)));
    // 0x25245c: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x25245Cu;
    {
        const bool branch_taken_0x25245c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25245Cu;
        // 0x252460: 0x8c440ab8  lw          $a0, 0xAB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25245c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252464u;
label_252464:
    // 0x252464: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x252464u;
    SET_GPR_U32(ctx, 31, 0x25246Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x252464u, 0x25246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25246Cu;
label_25246c:
    // 0x25246c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x25246cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252470: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252474: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x252474u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x252478: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252478u;
    {
        const bool branch_taken_0x252478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252478) {
            ctx->pc = 0x25247Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252478u;
            // 0x25247c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252480u;
            goto label_252480;
        }
    }
    ctx->pc = 0x252480u;
label_252480:
    // 0x252480: 0x2810  mfhi        $a1
    ctx->pc = 0x252480u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x252484: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x252484u;
    {
        const bool branch_taken_0x252484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x252484) {
            ctx->pc = 0x252488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252484u;
            // 0x252488: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524ACu;
            goto label_2524ac;
        }
    }
    ctx->pc = 0x25248Cu;
    // 0x25248c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25248Cu;
    {
        const bool branch_taken_0x25248c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x252490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25248Cu;
        // 0x252490: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25248c) {
            ctx->pc = 0x25249Cu;
            goto label_25249c;
        }
    }
    ctx->pc = 0x252494u;
    // 0x252494: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252494u;
    {
        const bool branch_taken_0x252494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x252494) {
            ctx->pc = 0x252498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252494u;
            // 0x252498: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524B8u;
            goto label_2524b8;
        }
    }
    ctx->pc = 0x25249Cu;
label_25249c:
    // 0x25249c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2524a0: 0x8c43318c  lw          $v1, 0x318C($v0)
    ctx->pc = 0x2524a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12684)));
    // 0x2524a4: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x2524A4u;
    {
        const bool branch_taken_0x2524a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524A4u;
        // 0x2524a8: 0x8c443190  lw          $a0, 0x3190($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524a4) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2524ACu;
label_2524ac:
    // 0x2524ac: 0x8c433194  lw          $v1, 0x3194($v0)
    ctx->pc = 0x2524acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12692)));
    // 0x2524b0: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x2524B0u;
    {
        const bool branch_taken_0x2524b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524B0u;
        // 0x2524b4: 0x8c443198  lw          $a0, 0x3198($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524b0) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2524B8u;
label_2524b8:
    // 0x2524b8: 0x8c433194  lw          $v1, 0x3194($v0)
    ctx->pc = 0x2524b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12692)));
    // 0x2524bc: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x2524BCu;
    {
        const bool branch_taken_0x2524bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524BCu;
        // 0x2524c0: 0x8c4431a0  lw          $a0, 0x31A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524bc) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2524C4u;
label_2524c4:
    // 0x2524c4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2524C4u;
    SET_GPR_U32(ctx, 31, 0x2524CCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2524C4u, 0x2524CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2524CCu;
label_2524cc:
    // 0x2524cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2524ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2524d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2524d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2524d4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2524d4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2524d8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2524D8u;
    {
        const bool branch_taken_0x2524d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2524d8) {
            ctx->pc = 0x2524DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2524D8u;
            // 0x2524dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524E0u;
            goto label_2524e0;
        }
    }
    ctx->pc = 0x2524E0u;
label_2524e0:
    // 0x2524e0: 0x2810  mfhi        $a1
    ctx->pc = 0x2524e0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2524e4: 0x50a40011  beql        $a1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2524E4u;
    {
        const bool branch_taken_0x2524e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2524e4) {
            ctx->pc = 0x2524E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2524E4u;
            // 0x2524e8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25252Cu;
            goto label_25252c;
        }
    }
    ctx->pc = 0x2524ECu;
    // 0x2524ec: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2524ECu;
    {
        const bool branch_taken_0x2524ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2524F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524ECu;
        // 0x2524f0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2524ec) {
            ctx->pc = 0x2524FCu;
            goto label_2524fc;
        }
    }
    ctx->pc = 0x2524F4u;
    // 0x2524f4: 0x50a20018  beql        $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2524F4u;
    {
        const bool branch_taken_0x2524f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2524f4) {
            ctx->pc = 0x2524F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2524F4u;
            // 0x2524f8: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252558u;
            goto label_252558;
        }
    }
    ctx->pc = 0x2524FCu;
label_2524fc:
    // 0x2524fc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2524fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252500: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x252500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x252504: 0x8c433368  lw          $v1, 0x3368($v0)
    ctx->pc = 0x252504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13160)));
    // 0x252508: 0x8c44336c  lw          $a0, 0x336C($v0)
    ctx->pc = 0x252508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13164)));
    // 0x25250c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x25250cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252510: 0x10e000ff  beqz        $a3, . + 4 + (0xFF << 2)
    ctx->pc = 0x252510u;
    {
        const bool branch_taken_0x252510 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x252514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252510u;
        // 0x252514: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252510) {
            ctx->pc = 0x252910u;
            goto label_252910;
        }
    }
    ctx->pc = 0x252518u;
    // 0x252518: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x252518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25251c: 0xc09f72e  jal         func_27DCB8
    ctx->pc = 0x25251Cu;
    SET_GPR_U32(ctx, 31, 0x252524u);
    ctx->pc = 0x252520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25251Cu;
    // 0x252520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCB8u, 0x25251Cu, 0x252524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252524u;
label_252524:
    // 0x252524: 0x100000fa  b           . + 4 + (0xFA << 2)
    ctx->pc = 0x252524u;
    {
        const bool branch_taken_0x252524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252524) {
            ctx->pc = 0x252910u;
            goto label_252910;
        }
    }
    ctx->pc = 0x25252Cu;
label_25252c:
    // 0x25252c: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x25252cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x252530: 0x8c433370  lw          $v1, 0x3370($v0)
    ctx->pc = 0x252530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13168)));
    // 0x252534: 0x8c443374  lw          $a0, 0x3374($v0)
    ctx->pc = 0x252534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13172)));
    // 0x252538: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x252538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25253c: 0x10e000f4  beqz        $a3, . + 4 + (0xF4 << 2)
    ctx->pc = 0x25253Cu;
    {
        const bool branch_taken_0x25253c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x252540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25253Cu;
        // 0x252540: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25253c) {
            ctx->pc = 0x252910u;
            goto label_252910;
        }
    }
    ctx->pc = 0x252544u;
    // 0x252544: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x252544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252548: 0xc09f72e  jal         func_27DCB8
    ctx->pc = 0x252548u;
    SET_GPR_U32(ctx, 31, 0x252550u);
    ctx->pc = 0x25254Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252548u;
    // 0x25254c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCB8u, 0x252548u, 0x252550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252550u;
label_252550:
    // 0x252550: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x252550u;
    {
        const bool branch_taken_0x252550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252550) {
            ctx->pc = 0x252910u;
            goto label_252910;
        }
    }
    ctx->pc = 0x252558u;
label_252558:
    // 0x252558: 0x8e470740  lw          $a3, 0x740($s2)
    ctx->pc = 0x252558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1856)));
    // 0x25255c: 0x8c433378  lw          $v1, 0x3378($v0)
    ctx->pc = 0x25255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13176)));
    // 0x252560: 0x8c44337c  lw          $a0, 0x337C($v0)
    ctx->pc = 0x252560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13180)));
    // 0x252564: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x252564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252568: 0x10e000e9  beqz        $a3, . + 4 + (0xE9 << 2)
    ctx->pc = 0x252568u;
    {
        const bool branch_taken_0x252568 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x25256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252568u;
        // 0x25256c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252568) {
            ctx->pc = 0x252910u;
            goto label_252910;
        }
    }
    ctx->pc = 0x252570u;
    // 0x252570: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x252570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252574: 0xc09f72e  jal         func_27DCB8
    ctx->pc = 0x252574u;
    SET_GPR_U32(ctx, 31, 0x25257Cu);
    ctx->pc = 0x252578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252574u;
    // 0x252578: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCB8u, 0x252574u, 0x25257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25257Cu;
label_25257c:
    // 0x25257c: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x25257Cu;
    {
        const bool branch_taken_0x25257c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25257c) {
            ctx->pc = 0x252910u;
            goto label_252910;
        }
    }
    ctx->pc = 0x252584u;
label_252584:
    // 0x252584: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x252584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x252588: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x252588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x25258c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25258cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x252590: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x252590u;
    {
        const bool branch_taken_0x252590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252590) {
            ctx->pc = 0x2525D0u;
            goto label_2525d0;
        }
    }
    ctx->pc = 0x252598u;
    // 0x252598: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x252598u;
    SET_GPR_U32(ctx, 31, 0x2525A0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x252598u, 0x2525A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2525A0u;
label_2525a0:
    // 0x2525a0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2525a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2525a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2525A4u;
    {
        const bool branch_taken_0x2525a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525A4u;
        // 0x2525a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525a4) {
            ctx->pc = 0x2525B4u;
            goto label_2525b4;
        }
    }
    ctx->pc = 0x2525ACu;
    // 0x2525ac: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2525ACu;
    {
        const bool branch_taken_0x2525ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2525ac) {
            ctx->pc = 0x2525B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2525ACu;
            // 0x2525b0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2525C4u;
            goto label_2525c4;
        }
    }
    ctx->pc = 0x2525B4u;
label_2525b4:
    // 0x2525b4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2525b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2525b8: 0x8c433790  lw          $v1, 0x3790($v0)
    ctx->pc = 0x2525b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14224)));
    // 0x2525bc: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x2525BCu;
    {
        const bool branch_taken_0x2525bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525BCu;
        // 0x2525c0: 0x8c443794  lw          $a0, 0x3794($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525bc) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2525C4u;
label_2525c4:
    // 0x2525c4: 0x8c433798  lw          $v1, 0x3798($v0)
    ctx->pc = 0x2525c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14232)));
    // 0x2525c8: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x2525C8u;
    {
        const bool branch_taken_0x2525c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525C8u;
        // 0x2525cc: 0x8c44379c  lw          $a0, 0x379C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525c8) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2525D0u;
label_2525d0:
    // 0x2525d0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2525D0u;
    SET_GPR_U32(ctx, 31, 0x2525D8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2525D0u, 0x2525D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2525D8u;
label_2525d8:
    // 0x2525d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2525d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2525dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2525DCu;
    {
        const bool branch_taken_0x2525dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525DCu;
        // 0x2525e0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525dc) {
            ctx->pc = 0x252610u;
            goto label_252610;
        }
    }
    ctx->pc = 0x2525E4u;
    // 0x2525e4: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x2525e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x2525e8: 0x8c433780  lw          $v1, 0x3780($v0)
    ctx->pc = 0x2525e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14208)));
    // 0x2525ec: 0x8c443784  lw          $a0, 0x3784($v0)
    ctx->pc = 0x2525ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14212)));
    // 0x2525f0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2525f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2525f4: 0x10e000c6  beqz        $a3, . + 4 + (0xC6 << 2)
    ctx->pc = 0x2525F4u;
    {
        const bool branch_taken_0x2525f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2525F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2525F4u;
        // 0x2525f8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2525f4) {
            ctx->pc = 0x252910u;
            goto label_252910;
        }
    }
    ctx->pc = 0x2525FCu;
    // 0x2525fc: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2525fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252600: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x252600u;
    SET_GPR_U32(ctx, 31, 0x252608u);
    ctx->pc = 0x252604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252600u;
    // 0x252604: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x252600u, 0x252608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252608u;
label_252608:
    // 0x252608: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x252608u;
    {
        const bool branch_taken_0x252608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252608) {
            ctx->pc = 0x252910u;
            goto label_252910;
        }
    }
    ctx->pc = 0x252610u;
label_252610:
    // 0x252610: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x252610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x252614: 0x8c433788  lw          $v1, 0x3788($v0)
    ctx->pc = 0x252614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14216)));
    // 0x252618: 0x8c44378c  lw          $a0, 0x378C($v0)
    ctx->pc = 0x252618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14220)));
    // 0x25261c: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x25261cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252620: 0x10e000bb  beqz        $a3, . + 4 + (0xBB << 2)
    ctx->pc = 0x252620u;
    {
        const bool branch_taken_0x252620 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x252624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252620u;
        // 0x252624: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252620) {
            ctx->pc = 0x252910u;
            goto label_252910;
        }
    }
    ctx->pc = 0x252628u;
    // 0x252628: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x252628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25262c: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x25262Cu;
    SET_GPR_U32(ctx, 31, 0x252634u);
    ctx->pc = 0x252630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25262Cu;
    // 0x252630: 0x24050031  addiu       $a1, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x25262Cu, 0x252634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252634u;
label_252634:
    // 0x252634: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x252634u;
    {
        const bool branch_taken_0x252634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x252634) {
            ctx->pc = 0x252910u;
            goto label_252910;
        }
    }
    ctx->pc = 0x25263Cu;
label_25263c:
    // 0x25263c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25263Cu;
    SET_GPR_U32(ctx, 31, 0x252644u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25263Cu, 0x252644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252644u;
label_252644:
    // 0x252644: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x252644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x252648: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25264c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x25264cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x252650: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x252650u;
    {
        const bool branch_taken_0x252650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x252650) {
            ctx->pc = 0x252654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252650u;
            // 0x252654: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252658u;
            goto label_252658;
        }
    }
    ctx->pc = 0x252658u;
label_252658:
    // 0x252658: 0x2810  mfhi        $a1
    ctx->pc = 0x252658u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x25265c: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25265Cu;
    {
        const bool branch_taken_0x25265c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x25265c) {
            ctx->pc = 0x252660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25265Cu;
            // 0x252660: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252684u;
            goto label_252684;
        }
    }
    ctx->pc = 0x252664u;
    // 0x252664: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x252664u;
    {
        const bool branch_taken_0x252664 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x252668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252664u;
        // 0x252668: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252664) {
            ctx->pc = 0x252674u;
            goto label_252674;
        }
    }
    ctx->pc = 0x25266Cu;
    // 0x25266c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x25266Cu;
    {
        const bool branch_taken_0x25266c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x25266c) {
            ctx->pc = 0x252670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25266Cu;
            // 0x252670: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252690u;
            goto label_252690;
        }
    }
    ctx->pc = 0x252674u;
label_252674:
    // 0x252674: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x252674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252678: 0x8c431738  lw          $v1, 0x1738($v0)
    ctx->pc = 0x252678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5944)));
    // 0x25267c: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x25267Cu;
    {
        const bool branch_taken_0x25267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25267Cu;
        // 0x252680: 0x8c44173c  lw          $a0, 0x173C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25267c) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252684u;
label_252684:
    // 0x252684: 0x8c431740  lw          $v1, 0x1740($v0)
    ctx->pc = 0x252684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5952)));
    // 0x252688: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x252688u;
    {
        const bool branch_taken_0x252688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252688u;
        // 0x25268c: 0x8c441744  lw          $a0, 0x1744($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252688) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252690u;
label_252690:
    // 0x252690: 0x8c431748  lw          $v1, 0x1748($v0)
    ctx->pc = 0x252690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5960)));
    // 0x252694: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x252694u;
    {
        const bool branch_taken_0x252694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252694u;
        // 0x252698: 0x8c44174c  lw          $a0, 0x174C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252694) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25269Cu;
label_25269c:
    // 0x25269c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25269Cu;
    SET_GPR_U32(ctx, 31, 0x2526A4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25269Cu, 0x2526A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2526A4u;
label_2526a4:
    // 0x2526a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2526a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2526a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2526a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2526ac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2526acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2526b0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2526B0u;
    {
        const bool branch_taken_0x2526b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2526b0) {
            ctx->pc = 0x2526B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2526B0u;
            // 0x2526b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2526B8u;
            goto label_2526b8;
        }
    }
    ctx->pc = 0x2526B8u;
label_2526b8:
    // 0x2526b8: 0x2810  mfhi        $a1
    ctx->pc = 0x2526b8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2526bc: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2526BCu;
    {
        const bool branch_taken_0x2526bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2526bc) {
            ctx->pc = 0x2526C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2526BCu;
            // 0x2526c0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2526E4u;
            goto label_2526e4;
        }
    }
    ctx->pc = 0x2526C4u;
    // 0x2526c4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2526C4u;
    {
        const bool branch_taken_0x2526c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2526C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526C4u;
        // 0x2526c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526c4) {
            ctx->pc = 0x2526D4u;
            goto label_2526d4;
        }
    }
    ctx->pc = 0x2526CCu;
    // 0x2526cc: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2526CCu;
    {
        const bool branch_taken_0x2526cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2526cc) {
            ctx->pc = 0x2526D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2526CCu;
            // 0x2526d0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2526F0u;
            goto label_2526f0;
        }
    }
    ctx->pc = 0x2526D4u;
label_2526d4:
    // 0x2526d4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2526d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2526d8: 0x8c431738  lw          $v1, 0x1738($v0)
    ctx->pc = 0x2526d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5944)));
    // 0x2526dc: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2526DCu;
    {
        const bool branch_taken_0x2526dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2526E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526DCu;
        // 0x2526e0: 0x8c44173c  lw          $a0, 0x173C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526dc) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2526E4u;
label_2526e4:
    // 0x2526e4: 0x8c431740  lw          $v1, 0x1740($v0)
    ctx->pc = 0x2526e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5952)));
    // 0x2526e8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x2526E8u;
    {
        const bool branch_taken_0x2526e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2526ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526E8u;
        // 0x2526ec: 0x8c441744  lw          $a0, 0x1744($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526e8) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2526F0u;
label_2526f0:
    // 0x2526f0: 0x8c431748  lw          $v1, 0x1748($v0)
    ctx->pc = 0x2526f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5960)));
    // 0x2526f4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2526F4u;
    {
        const bool branch_taken_0x2526f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2526F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2526F4u;
        // 0x2526f8: 0x8c44174c  lw          $a0, 0x174C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5964)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2526f4) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2526FCu;
label_2526fc:
    // 0x2526fc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2526FCu;
    SET_GPR_U32(ctx, 31, 0x252704u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2526FCu, 0x252704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252704u;
label_252704:
    // 0x252704: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x252704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x252708: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x252708u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x25270c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25270Cu;
    {
        const bool branch_taken_0x25270c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25270c) {
            ctx->pc = 0x252710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25270Cu;
            // 0x252710: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252714u;
            goto label_252714;
        }
    }
    ctx->pc = 0x252714u;
label_252714:
    // 0x252714: 0x2010  mfhi        $a0
    ctx->pc = 0x252714u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x252718: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x252718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x25271c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25271Cu;
    {
        const bool branch_taken_0x25271c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25271Cu;
        // 0x252720: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25271c) {
            ctx->pc = 0x25273Cu;
            goto label_25273c;
        }
    }
    ctx->pc = 0x252724u;
    // 0x252724: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x252724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252728: 0x2442ff20  addiu       $v0, $v0, -0xE0
    ctx->pc = 0x252728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967072));
    // 0x25272c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25272cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252730: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x252730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252734: 0x800008  jr          $a0
    ctx->pc = 0x252734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25273Cu: goto label_25273c;
            case 0x25274Cu: goto label_25274c;
            case 0x25275Cu: goto label_25275c;
            case 0x25276Cu: goto label_25276c;
            case 0x25277Cu: goto label_25277c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252734u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25273Cu;
label_25273c:
    // 0x25273c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25273cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252740: 0x8c431d18  lw          $v1, 0x1D18($v0)
    ctx->pc = 0x252740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7448)));
    // 0x252744: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x252744u;
    {
        const bool branch_taken_0x252744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252744u;
        // 0x252748: 0x8c441d1c  lw          $a0, 0x1D1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7452)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252744) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25274Cu;
label_25274c:
    // 0x25274c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252750: 0x8c431d20  lw          $v1, 0x1D20($v0)
    ctx->pc = 0x252750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7456)));
    // 0x252754: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x252754u;
    {
        const bool branch_taken_0x252754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252754u;
        // 0x252758: 0x8c441d24  lw          $a0, 0x1D24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252754) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25275Cu;
label_25275c:
    // 0x25275c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252760: 0x8c431d28  lw          $v1, 0x1D28($v0)
    ctx->pc = 0x252760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7464)));
    // 0x252764: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x252764u;
    {
        const bool branch_taken_0x252764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252764u;
        // 0x252768: 0x8c441d2c  lw          $a0, 0x1D2C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252764) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25276Cu;
label_25276c:
    // 0x25276c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25276cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252770: 0x8c431d30  lw          $v1, 0x1D30($v0)
    ctx->pc = 0x252770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7472)));
    // 0x252774: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x252774u;
    {
        const bool branch_taken_0x252774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252774u;
        // 0x252778: 0x8c441d34  lw          $a0, 0x1D34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252774) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25277Cu;
label_25277c:
    // 0x25277c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25277cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252780: 0x8c431d38  lw          $v1, 0x1D38($v0)
    ctx->pc = 0x252780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7480)));
    // 0x252784: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x252784u;
    {
        const bool branch_taken_0x252784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252784u;
        // 0x252788: 0x8c441d3c  lw          $a0, 0x1D3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252784) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25278Cu;
label_25278c:
    // 0x25278c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25278Cu;
    SET_GPR_U32(ctx, 31, 0x252794u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25278Cu, 0x252794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252794u;
label_252794:
    // 0x252794: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x252794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x252798: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x252798u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x25279c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25279Cu;
    {
        const bool branch_taken_0x25279c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25279c) {
            ctx->pc = 0x2527A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25279Cu;
            // 0x2527a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2527A4u;
            goto label_2527a4;
        }
    }
    ctx->pc = 0x2527A4u;
label_2527a4:
    // 0x2527a4: 0x2010  mfhi        $a0
    ctx->pc = 0x2527a4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2527a8: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x2527a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2527ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2527ACu;
    {
        const bool branch_taken_0x2527ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2527B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527ACu;
        // 0x2527b0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527ac) {
            ctx->pc = 0x2527CCu;
            goto label_2527cc;
        }
    }
    ctx->pc = 0x2527B4u;
    // 0x2527b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2527b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2527b8: 0x2442ff40  addiu       $v0, $v0, -0xC0
    ctx->pc = 0x2527b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967104));
    // 0x2527bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2527bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2527c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2527c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2527c4: 0x800008  jr          $a0
    ctx->pc = 0x2527C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2527CCu: goto label_2527cc;
            case 0x2527DCu: goto label_2527dc;
            case 0x2527ECu: goto label_2527ec;
            case 0x2527FCu: goto label_2527fc;
            case 0x25280Cu: goto label_25280c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2527C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2527CCu;
label_2527cc:
    // 0x2527cc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2527ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2527d0: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x2527d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x2527d4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2527D4u;
    {
        const bool branch_taken_0x2527d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2527D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527D4u;
        // 0x2527d8: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527d4) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2527DCu;
label_2527dc:
    // 0x2527dc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2527dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2527e0: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x2527e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x2527e4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2527E4u;
    {
        const bool branch_taken_0x2527e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2527E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527E4u;
        // 0x2527e8: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527e4) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2527ECu;
label_2527ec:
    // 0x2527ec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2527ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2527f0: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x2527f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x2527f4: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2527F4u;
    {
        const bool branch_taken_0x2527f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2527F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2527F4u;
        // 0x2527f8: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2527f4) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2527FCu;
label_2527fc:
    // 0x2527fc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2527fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252800: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x252800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x252804: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x252804u;
    {
        const bool branch_taken_0x252804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252804u;
        // 0x252808: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252804) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25280Cu;
label_25280c:
    // 0x25280c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252810: 0x8c432ebc  lw          $v1, 0x2EBC($v0)
    ctx->pc = 0x252810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11964)));
    // 0x252814: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x252814u;
    {
        const bool branch_taken_0x252814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252814u;
        // 0x252818: 0x8c442ec0  lw          $a0, 0x2EC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11968)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252814) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25281Cu;
label_25281c:
    // 0x25281c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x25281Cu;
    SET_GPR_U32(ctx, 31, 0x252824u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x25281Cu, 0x252824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252824u;
label_252824:
    // 0x252824: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x252824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x252828: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x252828u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x25282c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25282Cu;
    {
        const bool branch_taken_0x25282c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25282c) {
            ctx->pc = 0x252830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25282Cu;
            // 0x252830: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252834u;
            goto label_252834;
        }
    }
    ctx->pc = 0x252834u;
label_252834:
    // 0x252834: 0x2010  mfhi        $a0
    ctx->pc = 0x252834u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x252838: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x252838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x25283c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25283Cu;
    {
        const bool branch_taken_0x25283c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25283Cu;
        // 0x252840: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25283c) {
            ctx->pc = 0x25285Cu;
            goto label_25285c;
        }
    }
    ctx->pc = 0x252844u;
    // 0x252844: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x252844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x252848: 0x2442ff60  addiu       $v0, $v0, -0xA0
    ctx->pc = 0x252848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967136));
    // 0x25284c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25284cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x252850: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x252850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252854: 0x800008  jr          $a0
    ctx->pc = 0x252854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25285Cu: goto label_25285c;
            case 0x25286Cu: goto label_25286c;
            case 0x25287Cu: goto label_25287c;
            case 0x25288Cu: goto label_25288c;
            case 0x25289Cu: goto label_25289c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252854u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25285Cu;
label_25285c:
    // 0x25285c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252860: 0x8c431300  lw          $v1, 0x1300($v0)
    ctx->pc = 0x252860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4864)));
    // 0x252864: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x252864u;
    {
        const bool branch_taken_0x252864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252864u;
        // 0x252868: 0x8c441304  lw          $a0, 0x1304($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4868)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252864) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25286Cu;
label_25286c:
    // 0x25286c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252870: 0x8c431308  lw          $v1, 0x1308($v0)
    ctx->pc = 0x252870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x252874: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x252874u;
    {
        const bool branch_taken_0x252874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252874u;
        // 0x252878: 0x8c44130c  lw          $a0, 0x130C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252874) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25287Cu;
label_25287c:
    // 0x25287c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252880: 0x8c431310  lw          $v1, 0x1310($v0)
    ctx->pc = 0x252880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4880)));
    // 0x252884: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x252884u;
    {
        const bool branch_taken_0x252884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252884u;
        // 0x252888: 0x8c441314  lw          $a0, 0x1314($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252884) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25288Cu;
label_25288c:
    // 0x25288c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x252890: 0x8c431318  lw          $v1, 0x1318($v0)
    ctx->pc = 0x252890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4888)));
    // 0x252894: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x252894u;
    {
        const bool branch_taken_0x252894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252894u;
        // 0x252898: 0x8c44131c  lw          $a0, 0x131C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252894) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x25289Cu;
label_25289c:
    // 0x25289c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x25289cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2528a0: 0x8c431320  lw          $v1, 0x1320($v0)
    ctx->pc = 0x2528a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4896)));
    // 0x2528a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2528A4u;
    {
        const bool branch_taken_0x2528a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2528A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528A4u;
        // 0x2528a8: 0x8c441324  lw          $a0, 0x1324($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2528a4) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2528ACu;
label_2528ac:
    // 0x2528ac: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2528ACu;
    SET_GPR_U32(ctx, 31, 0x2528B4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2528ACu, 0x2528B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2528B4u;
label_2528b4:
    // 0x2528b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2528b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2528b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2528b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2528bc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2528bcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2528c0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2528C0u;
    {
        const bool branch_taken_0x2528c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2528c0) {
            ctx->pc = 0x2528C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2528C0u;
            // 0x2528c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2528C8u;
            goto label_2528c8;
        }
    }
    ctx->pc = 0x2528C8u;
label_2528c8:
    // 0x2528c8: 0x2810  mfhi        $a1
    ctx->pc = 0x2528c8u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x2528cc: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2528CCu;
    {
        const bool branch_taken_0x2528cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2528cc) {
            ctx->pc = 0x2528D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2528CCu;
            // 0x2528d0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2528F4u;
            goto label_2528f4;
        }
    }
    ctx->pc = 0x2528D4u;
    // 0x2528d4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2528D4u;
    {
        const bool branch_taken_0x2528d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2528D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528D4u;
        // 0x2528d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2528d4) {
            ctx->pc = 0x2528E4u;
            goto label_2528e4;
        }
    }
    ctx->pc = 0x2528DCu;
    // 0x2528dc: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2528DCu;
    {
        const bool branch_taken_0x2528dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2528dc) {
            ctx->pc = 0x2528E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2528DCu;
            // 0x2528e0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252900u;
            goto label_252900;
        }
    }
    ctx->pc = 0x2528E4u;
label_2528e4:
    // 0x2528e4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2528e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2528e8: 0x8c4323c0  lw          $v1, 0x23C0($v0)
    ctx->pc = 0x2528e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9152)));
    // 0x2528ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2528ECu;
    {
        const bool branch_taken_0x2528ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2528F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528ECu;
        // 0x2528f0: 0x8c4423c4  lw          $a0, 0x23C4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2528ec) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x2528F4u;
label_2528f4:
    // 0x2528f4: 0x8c4323c8  lw          $v1, 0x23C8($v0)
    ctx->pc = 0x2528f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9160)));
    // 0x2528f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2528F8u;
    {
        const bool branch_taken_0x2528f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2528FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2528F8u;
        // 0x2528fc: 0x8c4423cc  lw          $a0, 0x23CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2528f8) {
            ctx->pc = 0x252908u;
            goto label_252908;
        }
    }
    ctx->pc = 0x252900u;
label_252900:
    // 0x252900: 0x8c4323d0  lw          $v1, 0x23D0($v0)
    ctx->pc = 0x252900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9168)));
    // 0x252904: 0x8c4423d4  lw          $a0, 0x23D4($v0)
    ctx->pc = 0x252904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9172)));
label_252908:
    // 0x252908: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x252908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25290c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x25290cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_252910:
    // 0x252910: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x252910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x252914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x252914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252918: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x252918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25291c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x25291cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252924: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x252924u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x252928: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x252928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x25292c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x25292Cu;
    SET_GPR_U32(ctx, 31, 0x252934u);
    ctx->pc = 0x252930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25292Cu;
    // 0x252930: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x25292Cu, 0x252934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252934u;
label_252934:
    // 0x252934: 0x924202f7  lbu         $v0, 0x2F7($s2)
    ctx->pc = 0x252934u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 759)));
    // 0x252938: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x252938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x25293c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25293cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252940: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252940u;
    {
        const bool branch_taken_0x252940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252940) {
            ctx->pc = 0x252950u;
            goto label_252950;
        }
    }
    ctx->pc = 0x252948u;
    // 0x252948: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x252948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x25294c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25294cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_252950:
    // 0x252950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252954: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252958: 0xe65405c4  swc1        $f20, 0x5C4($s2)
    ctx->pc = 0x252958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
    // 0x25295c: 0xe64005c8  swc1        $f0, 0x5C8($s2)
    ctx->pc = 0x25295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1480), bits); }
    // 0x252960: 0xe64105cc  swc1        $f1, 0x5CC($s2)
    ctx->pc = 0x252960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1484), bits); }
    // 0x252964: 0xe65405c0  swc1        $f20, 0x5C0($s2)
    ctx->pc = 0x252964u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1472), bits); }
    // 0x252968: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x252968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x25296c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25296cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252970: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x252970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x252974: 0xae4005f4  sw          $zero, 0x5F4($s2)
    ctx->pc = 0x252974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1524), GPR_U32(ctx, 0));
    // 0x252978: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25297c: 0xe64005c4  swc1        $f0, 0x5C4($s2)
    ctx->pc = 0x25297cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1476), bits); }
    // 0x252980: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x252980u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x252984: 0xae4205f0  sw          $v0, 0x5F0($s2)
    ctx->pc = 0x252984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
    // 0x252988: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x252988u;
    SET_GPR_U32(ctx, 31, 0x252990u);
    ctx->pc = 0x25298Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252988u;
    // 0x25298c: 0x2630ee00  addiu       $s0, $s1, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x252988u, 0x252990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252990u;
label_252990:
    // 0x252990: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x252990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x252994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252998: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x252998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x25299c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25299cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2529a0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2529a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2529a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2529a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2529a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2529a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2529ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2529acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2529b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2529b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2529b4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x2529B4u;
    SET_GPR_U32(ctx, 31, 0x2529BCu);
    ctx->pc = 0x2529B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2529B4u;
    // 0x2529b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x2529B4u, 0x2529BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2529BCu;
label_2529bc:
    // 0x2529bc: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2529bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2529c0: 0x24020226  addiu       $v0, $zero, 0x226
    ctx->pc = 0x2529c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x2529c4: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2529C4u;
    {
        const bool branch_taken_0x2529c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2529C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529C4u;
        // 0x2529c8: 0x28620227  slti        $v0, $v1, 0x227 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)551) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529c4) {
            ctx->pc = 0x252A54u;
            goto label_252a54;
        }
    }
    ctx->pc = 0x2529CCu;
    // 0x2529cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2529CCu;
    {
        const bool branch_taken_0x2529cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529CCu;
        // 0x2529d0: 0x28620212  slti        $v0, $v1, 0x212 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)530) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529cc) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x2529D4u;
    // 0x2529d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2529D4u;
    {
        const bool branch_taken_0x2529d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529D4u;
        // 0x2529d8: 0x2862020f  slti        $v0, $v1, 0x20F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)527) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529d4) {
            ctx->pc = 0x252A00u;
            goto label_252a00;
        }
    }
    ctx->pc = 0x2529DCu;
    // 0x2529dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2529DCu;
    {
        const bool branch_taken_0x2529dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2529E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529DCu;
        // 0x2529e0: 0x2630ee00  addiu       $s0, $s1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529dc) {
            ctx->pc = 0x252A04u;
            goto label_252a04;
        }
    }
    ctx->pc = 0x2529E4u;
    // 0x2529e4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2529E4u;
    {
        const bool branch_taken_0x2529e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529E4u;
        // 0x2529e8: 0x2624ee00  addiu       $a0, $s1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529e4) {
            ctx->pc = 0x252A58u;
            goto label_252a58;
        }
    }
    ctx->pc = 0x2529ECu;
label_2529ec:
    // 0x2529ec: 0x28620275  slti        $v0, $v1, 0x275
    ctx->pc = 0x2529ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)629) ? 1 : 0);
    // 0x2529f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2529F0u;
    {
        const bool branch_taken_0x2529f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529F0u;
        // 0x2529f4: 0x28620270  slti        $v0, $v1, 0x270 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)624) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529f0) {
            ctx->pc = 0x252A00u;
            goto label_252a00;
        }
    }
    ctx->pc = 0x2529F8u;
    // 0x2529f8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2529F8u;
    {
        const bool branch_taken_0x2529f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2529F8u;
        // 0x2529fc: 0x2624ee00  addiu       $a0, $s1, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529f8) {
            ctx->pc = 0x252A58u;
            goto label_252a58;
        }
    }
    ctx->pc = 0x252A00u;
label_252a00:
    // 0x252a00: 0x2630ee00  addiu       $s0, $s1, -0x1200
    ctx->pc = 0x252a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
label_252a04:
    // 0x252a04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a0c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x252a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x252a10: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x252a10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x252a14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x252a18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x252a1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a20: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x252A20u;
    SET_GPR_U32(ctx, 31, 0x252A28u);
    ctx->pc = 0x252A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A20u;
    // 0x252a24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x252A20u, 0x252A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A28u;
label_252a28:
    // 0x252a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a30: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x252a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x252a34: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x252a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x252a38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x252a3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a40: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x252a40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a44: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x252A44u;
    SET_GPR_U32(ctx, 31, 0x252A4Cu);
    ctx->pc = 0x252A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A44u;
    // 0x252a48: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x252A44u, 0x252A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A4Cu;
label_252a4c:
    // 0x252a4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x252A4Cu;
    {
        const bool branch_taken_0x252a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252A4Cu;
        // 0x252a50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a4c) {
            ctx->pc = 0x252A7Cu;
            goto label_252a7c;
        }
    }
    ctx->pc = 0x252A54u;
label_252a54:
    // 0x252a54: 0x2624ee00  addiu       $a0, $s1, -0x1200
    ctx->pc = 0x252a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
label_252a58:
    // 0x252a58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x252a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252a5c: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x252a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x252a60: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x252a60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x252a64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x252a68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a6c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x252a6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a70: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x252A70u;
    SET_GPR_U32(ctx, 31, 0x252A78u);
    ctx->pc = 0x252A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A70u;
    // 0x252a74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x252A70u, 0x252A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A78u;
label_252a78:
    // 0x252a78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_252a7c:
    // 0x252a7c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x252a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x252a80: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x252a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x252a84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x252a84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252a88: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x252a88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252a8c: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x252A8Cu;
    SET_GPR_U32(ctx, 31, 0x252A94u);
    ctx->pc = 0x252A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252A8Cu;
    // 0x252a90: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x252A8Cu, 0x252A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252A94u;
label_252a94:
    // 0x252a94: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x252a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x252a98: 0x264305d0  addiu       $v1, $s2, 0x5D0
    ctx->pc = 0x252a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x252a9c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252A9Cu;
    {
        const bool branch_taken_0x252a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x252a9c) {
            ctx->pc = 0x252AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252A9Cu;
            // 0x252aa0: 0x8642054a  lh          $v0, 0x54A($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252AC0u;
            goto label_252ac0;
        }
    }
    ctx->pc = 0x252AA4u;
    // 0x252aa4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x252aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252aa8: 0xe64005d0  swc1        $f0, 0x5D0($s2)
    ctx->pc = 0x252aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1488), bits); }
    // 0x252aac: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x252aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252ab0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x252ab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x252ab4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x252ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ab8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x252ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x252abc: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x252abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
label_252ac0:
    // 0x252ac0: 0x5c40001e  bgtzl       $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x252AC0u;
    {
        const bool branch_taken_0x252ac0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x252ac0) {
            ctx->pc = 0x252AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252AC0u;
            // 0x252ac4: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252B3Cu;
            goto label_252b3c;
        }
    }
    ctx->pc = 0x252AC8u;
    // 0x252ac8: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x252ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x252acc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x252accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x252ad0: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x252AD0u;
    {
        const bool branch_taken_0x252ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252ad0) {
            ctx->pc = 0x252AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252AD0u;
            // 0x252ad4: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252B3Cu;
            goto label_252b3c;
        }
    }
    ctx->pc = 0x252AD8u;
    // 0x252ad8: 0xc09cf4c  jal         func_273D30
    ctx->pc = 0x252AD8u;
    SET_GPR_U32(ctx, 31, 0x252AE0u);
    ctx->pc = 0x252ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252AD8u;
    // 0x252adc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273D30u, 0x252AD8u, 0x252AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252AE0u;
label_252ae0:
    // 0x252ae0: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x252ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x252ae4: 0x2402021f  addiu       $v0, $zero, 0x21F
    ctx->pc = 0x252ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 543));
    // 0x252ae8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252AE8u;
    {
        const bool branch_taken_0x252ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x252AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252AE8u;
        // 0x252aec: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ae8) {
            ctx->pc = 0x252B00u;
            goto label_252b00;
        }
    }
    ctx->pc = 0x252AF0u;
    // 0x252af0: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x252af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x252af4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x252af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x252af8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x252AF8u;
    {
        const bool branch_taken_0x252af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252af8) {
            ctx->pc = 0x252AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252AF8u;
            // 0x252afc: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252B3Cu;
            goto label_252b3c;
        }
    }
    ctx->pc = 0x252B00u;
label_252b00:
    // 0x252b00: 0xc09cd8c  jal         func_273630
    ctx->pc = 0x252B00u;
    SET_GPR_U32(ctx, 31, 0x252B08u);
    ctx->pc = 0x252B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B00u;
    // 0x252b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273630u, 0x252B00u, 0x252B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B08u;
label_252b08:
    // 0x252b08: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x252B08u;
    SET_GPR_U32(ctx, 31, 0x252B10u);
    ctx->pc = 0x252B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B08u;
    // 0x252b0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x252B08u, 0x252B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B10u;
label_252b10:
    // 0x252b10: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x252B10u;
    {
        const bool branch_taken_0x252b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252b10) {
            ctx->pc = 0x252B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252B10u;
            // 0x252b14: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252B3Cu;
            goto label_252b3c;
        }
    }
    ctx->pc = 0x252B18u;
    // 0x252b18: 0x96430640  lhu         $v1, 0x640($s2)
    ctx->pc = 0x252b18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x252b1c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x252b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x252b20: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252B20u;
    {
        const bool branch_taken_0x252b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x252B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B20u;
        // 0x252b24: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b20) {
            ctx->pc = 0x252B38u;
            goto label_252b38;
        }
    }
    ctx->pc = 0x252B28u;
    // 0x252b28: 0xc07ef90  jal         func_1FBE40
    ctx->pc = 0x252B28u;
    SET_GPR_U32(ctx, 31, 0x252B30u);
    ctx->pc = 0x252B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B28u;
    // 0x252b2c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE40u, 0x252B28u, 0x252B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B30u;
label_252b30:
    // 0x252b30: 0xc0a3ec2  jal         func_28FB08
    ctx->pc = 0x252B30u;
    SET_GPR_U32(ctx, 31, 0x252B38u);
    ctx->pc = 0x252B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B30u;
    // 0x252b34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB08u, 0x252B30u, 0x252B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B38u;
label_252b38:
    // 0x252b38: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x252b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_252b3c:
    // 0x252b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x252b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x252b40: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x252b40u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_252b44:
    // 0x252b44: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x252b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x252b48: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x252b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x252b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x252b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x252b54: 0xc055f06  jal         func_157C18
    ctx->pc = 0x252B54u;
    SET_GPR_U32(ctx, 31, 0x252B5Cu);
    ctx->pc = 0x252B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252B54u;
    // 0x252b58: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x252B54u, 0x252B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252B5Cu;
label_252b5c:
    // 0x252b5c: 0xc64005a8  lwc1        $f0, 0x5A8($s2)
    ctx->pc = 0x252b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252b60: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x252b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252b64: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x252b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x252b68: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x252b68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252b6c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x252b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x252b70: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x252b70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252b74: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x252b74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x252b78: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x252b78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x252b7c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x252b7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x252b80: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x252b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x252b84: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x252b84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252b88: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x252b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x252b8c: 0x26420330  addiu       $v0, $s2, 0x330
    ctx->pc = 0x252b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
    // 0x252b90: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x252b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x252b94: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x252B94u;
    {
        const bool branch_taken_0x252b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x252B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252B94u;
        // 0x252b98: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252b94) {
            ctx->pc = 0x252BB4u;
            goto label_252bb4;
        }
    }
    ctx->pc = 0x252B9Cu;
    // 0x252b9c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x252b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252ba0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x252ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252ba4: 0xe6400330  swc1        $f0, 0x330($s2)
    ctx->pc = 0x252ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 816), bits); }
    // 0x252ba8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x252ba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x252bac: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x252bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252bb0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x252bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_252bb4:
    // 0x252bb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252bb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x252bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x252bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252bc0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x252BC0u;
    SET_GPR_U32(ctx, 31, 0x252BC8u);
    ctx->pc = 0x252BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252BC0u;
    // 0x252bc4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x252BC0u, 0x252BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BC8u;
label_252bc8:
    // 0x252bc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252bcc: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x252BCCu;
    SET_GPR_U32(ctx, 31, 0x252BD4u);
    ctx->pc = 0x252BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252BCCu;
    // 0x252bd0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x252BCCu, 0x252BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252BD4u;
label_252bd4:
    // 0x252bd4: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x252bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x252bd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x252bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x252bdc: 0x1c400048  bgtz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x252BDCu;
    {
        const bool branch_taken_0x252bdc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x252BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BDCu;
        // 0x252be0: 0xae4205f0  sw          $v0, 0x5F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bdc) {
            ctx->pc = 0x252D00u;
            goto label_252d00;
        }
    }
    ctx->pc = 0x252BE4u;
    // 0x252be4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x252be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x252be8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x252be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x252bec: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252BECu;
    {
        const bool branch_taken_0x252bec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x252BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252BECu;
        // 0x252bf0: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bec) {
            ctx->pc = 0x252C10u;
            goto label_252c10;
        }
    }
    ctx->pc = 0x252BF4u;
    // 0x252bf4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x252bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252bf8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x252bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x252bfc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x252bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252c00: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x252c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x252c04: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x252c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252c08: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x252c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x252c0c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x252c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252c10:
    // 0x252c10: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x252c10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x252c14: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x252c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x252c18: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x252c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x252c1c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x252c1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x252c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x252c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c24: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x252c24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c28: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x252c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x252c2c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x252C2Cu;
    SET_GPR_U32(ctx, 31, 0x252C34u);
    ctx->pc = 0x252C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C2Cu;
    // 0x252c30: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x252C2Cu, 0x252C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252C34u;
label_252c34:
    // 0x252c34: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x252c34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x252c38: 0xae40024c  sw          $zero, 0x24C($s2)
    ctx->pc = 0x252c38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 0));
    // 0x252c3c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x252c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x252c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c48: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x252c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x252c4c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x252c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x252c50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x252c54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x252c58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c5c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x252C5Cu;
    SET_GPR_U32(ctx, 31, 0x252C64u);
    ctx->pc = 0x252C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C5Cu;
    // 0x252c60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x252C5Cu, 0x252C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252C64u;
label_252c64:
    // 0x252c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c6c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x252c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x252c70: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x252c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x252c74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x252c78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x252c7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c80: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x252C80u;
    SET_GPR_U32(ctx, 31, 0x252C88u);
    ctx->pc = 0x252C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252C80u;
    // 0x252c84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x252C80u, 0x252C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252C88u;
label_252c88:
    // 0x252c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x252c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c90: 0x240600da  addiu       $a2, $zero, 0xDA
    ctx->pc = 0x252c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 218));
    // 0x252c94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x252c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x252c98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252c9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x252c9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ca0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x252ca0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ca4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x252CA4u;
    SET_GPR_U32(ctx, 31, 0x252CACu);
    ctx->pc = 0x252CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252CA4u;
    // 0x252ca8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x252CA4u, 0x252CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252CACu;
label_252cac:
    // 0x252cac: 0x8e431644  lw          $v1, 0x1644($s2)
    ctx->pc = 0x252cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
    // 0x252cb0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x252cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x252cb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x252cb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x252cb8: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x252CB8u;
    {
        const bool branch_taken_0x252cb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x252cb8) {
            ctx->pc = 0x252CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252CB8u;
            // 0x252cbc: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252CE0u;
            goto label_252ce0;
        }
    }
    ctx->pc = 0x252CC0u;
    // 0x252cc0: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x252cc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x252cc4: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252CC4u;
    {
        const bool branch_taken_0x252cc4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x252cc4) {
            ctx->pc = 0x252CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252CC4u;
            // 0x252cc8: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252CE0u;
            goto label_252ce0;
        }
    }
    ctx->pc = 0x252CCCu;
    // 0x252ccc: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x252cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x252cd0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x252cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x252cd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252CD4u;
    {
        const bool branch_taken_0x252cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CD4u;
        // 0x252cd8: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cd4) {
            ctx->pc = 0x252CECu;
            goto label_252cec;
        }
    }
    ctx->pc = 0x252CDCu;
    // 0x252cdc: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x252cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_252ce0:
    // 0x252ce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x252ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x252ce4: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x252CE4u;
    {
        const bool branch_taken_0x252ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252CE4u;
        // 0x252ce8: 0xa24202f6  sb          $v0, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ce4) {
            ctx->pc = 0x25301Cu;
            goto label_25301c;
        }
    }
    ctx->pc = 0x252CECu;
label_252cec:
    // 0x252cec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252cf0: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x252cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x252cf4: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x252cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x252cf8: 0xa24302f4  sb          $v1, 0x2F4($s2)
    ctx->pc = 0x252cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x252cfc: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x252cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_252d00:
    // 0x252d00: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x252d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x252d04: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x252d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x252d08: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x252d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x252d0c: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x252d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x252d10: 0x52220008  beql        $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252D10u;
    {
        const bool branch_taken_0x252d10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x252d10) {
            ctx->pc = 0x252D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252D10u;
            // 0x252d14: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252D34u;
            goto label_252d34;
        }
    }
    ctx->pc = 0x252D18u;
    // 0x252d18: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x252d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252d1c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x252d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x252d20: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x252d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252d24: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x252d24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x252d28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x252d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252d2c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x252d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x252d30: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x252d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_252d34:
    // 0x252d34: 0x12820008  beq         $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252D34u;
    {
        const bool branch_taken_0x252d34 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x252D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252D34u;
        // 0x252d38: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d34) {
            ctx->pc = 0x252D58u;
            goto label_252d58;
        }
    }
    ctx->pc = 0x252D3Cu;
    // 0x252d3c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x252d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252d40: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x252d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x252d44: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x252d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252d48: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x252d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x252d4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x252d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252d50: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x252d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x252d54: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x252d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252d58:
    // 0x252d58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x252d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252d60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x252d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x252d64: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x252d64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x252d68: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d70: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x252d70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x252d74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x252d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d78: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x252d78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x252d7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x252d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x252d80: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x252d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x252d84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x252d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d88: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x252d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x252d8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x252d8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d90: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x252d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x252d94: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x252d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x252d98: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x252d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x252d9c: 0x240901a4  addiu       $t1, $zero, 0x1A4
    ctx->pc = 0x252d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x252da0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x252da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x252da4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x252da4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252da8: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x252da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x252dac: 0xc04c784  jal         func_131E10
    ctx->pc = 0x252DACu;
    SET_GPR_U32(ctx, 31, 0x252DB4u);
    ctx->pc = 0x252DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252DACu;
    // 0x252db0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x252DACu, 0x252DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DB4u;
label_252db4:
    // 0x252db4: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x252DB4u;
    {
        const bool branch_taken_0x252db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x252DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DB4u;
        // 0x252db8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252db4) {
            ctx->pc = 0x252DD4u;
            goto label_252dd4;
        }
    }
    ctx->pc = 0x252DBCu;
    // 0x252dbc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x252dbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x252dc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252dc4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x252dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x252dc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x252dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252dcc: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x252DCCu;
    SET_GPR_U32(ctx, 31, 0x252DD4u);
    ctx->pc = 0x252DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252DCCu;
    // 0x252dd0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x252DCCu, 0x252DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DD4u;
label_252dd4:
    // 0x252dd4: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x252dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x252dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252ddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x252ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x252de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252de4: 0xc0989d4  jal         func_262750
    ctx->pc = 0x252DE4u;
    SET_GPR_U32(ctx, 31, 0x252DECu);
    ctx->pc = 0x252DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252DE4u;
    // 0x252de8: 0xe640054c  swc1        $f0, 0x54C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x252DE4u, 0x252DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252DECu;
label_252dec:
    // 0x252dec: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x252DECu;
    {
        const bool branch_taken_0x252dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252DECu;
        // 0x252df0: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252dec) {
            ctx->pc = 0x253020u;
            goto label_253020;
        }
    }
    ctx->pc = 0x252DF4u;
label_252df4:
    // 0x252df4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x252df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x252df8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252dfc: 0x264405d0  addiu       $a0, $s2, 0x5D0
    ctx->pc = 0x252dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1488));
    // 0x252e00: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x252e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x252e04: 0xe6400600  swc1        $f0, 0x600($s2)
    ctx->pc = 0x252e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
    // 0x252e08: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x252e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x252e0c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x252e0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252e10: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x252e10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x252e14: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x252e14u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x252e18: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x252e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x252e1c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x252e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252e20: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x252e20u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252e24: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x252e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x252e28: 0x264305e0  addiu       $v1, $s2, 0x5E0
    ctx->pc = 0x252e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1504));
    // 0x252e2c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x252e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x252e30: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x252E30u;
    {
        const bool branch_taken_0x252e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x252E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252E30u;
        // 0x252e34: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e30) {
            ctx->pc = 0x252E4Cu;
            goto label_252e4c;
        }
    }
    ctx->pc = 0x252E38u;
    // 0x252e38: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x252e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252e3c: 0xe64005e0  swc1        $f0, 0x5E0($s2)
    ctx->pc = 0x252e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1504), bits); }
    // 0x252e40: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x252e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x252e44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x252e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e48: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x252e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_252e4c:
    // 0x252e4c: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x252e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252e54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x252e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252e58: 0x0  nop
    ctx->pc = 0x252e58u;
    // NOP
    // 0x252e5c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x252e5cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x252e60: 0xda4405e0  lqc2        $vf4, 0x5E0($s2)
    ctx->pc = 0x252e60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 1504)));
    // 0x252e64: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x252e64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x252e68: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x252e68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x252e6c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x252e6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x252e70: 0xfa4405e0  sqc2        $vf4, 0x5E0($s2)
    ctx->pc = 0x252e70u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1504), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x252e74: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x252e74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x252e78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x252e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x252e7c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x252e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_252e80:
    // 0x252e80: 0x8e4316d0  lw          $v1, 0x16D0($s2)
    ctx->pc = 0x252e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x252e84: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x252e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x252e88: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x252e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x252e8c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x252e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x252e90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x252e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x252e94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x252e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x252e98: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x252e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x252e9c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x252e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x252ea0: 0xe640054c  swc1        $f0, 0x54C($s2)
    ctx->pc = 0x252ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1356), bits); }
    // 0x252ea4: 0xae4316d0  sw          $v1, 0x16D0($s2)
    ctx->pc = 0x252ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 3));
    // 0x252ea8: 0x264205e0  addiu       $v0, $s2, 0x5E0
    ctx->pc = 0x252ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1504));
    // 0x252eac: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x252eacu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x252eb0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x252eb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252eb4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x252eb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x252eb8: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x252eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x252ebc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x252ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x252ec0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x252ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x252ec4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x252ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x252ec8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x252ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x252ecc: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x252eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x252ed0: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252ED0u;
    {
        const bool branch_taken_0x252ed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x252ed0) {
            ctx->pc = 0x252ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252ED0u;
            // 0x252ed4: 0x8e4200f0  lw          $v0, 0xF0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x252EF4u;
            goto label_252ef4;
        }
    }
    ctx->pc = 0x252ED8u;
    // 0x252ed8: 0xc6400490  lwc1        $f0, 0x490($s2)
    ctx->pc = 0x252ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252edc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x252edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x252ee0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x252ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252ee4: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x252ee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x252ee8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x252ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252eec: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x252eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x252ef0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x252ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
label_252ef4:
    // 0x252ef4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x252ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x252ef8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252EF8u;
    {
        const bool branch_taken_0x252ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x252EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252EF8u;
        // 0x252efc: 0xc7a00034  lwc1        $f0, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ef8) {
            ctx->pc = 0x252F1Cu;
            goto label_252f1c;
        }
    }
    ctx->pc = 0x252F00u;
    // 0x252f00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x252f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f04: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x252f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x252f08: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x252f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f0c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x252f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x252f10: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x252f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252f14: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x252f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x252f18: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x252f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252f1c:
    // 0x252f1c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x252f1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252f20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x252f24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x252f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x252f28: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x252f28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x252f2c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x252f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252f30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x252f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f34: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x252f34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x252f38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x252f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x252f3c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x252f3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x252f40: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x252f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x252f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x252f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f48: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x252f48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x252f4c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x252f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x252f50: 0x240901a4  addiu       $t1, $zero, 0x1A4
    ctx->pc = 0x252f50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x252f54: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x252f54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x252f58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x252f58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f5c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x252f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x252f60: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x252f60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f64: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x252f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x252f68: 0xc04c784  jal         func_131E10
    ctx->pc = 0x252F68u;
    SET_GPR_U32(ctx, 31, 0x252F70u);
    ctx->pc = 0x252F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F68u;
    // 0x252f6c: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x252F68u, 0x252F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F70u;
label_252f70:
    // 0x252f70: 0x54500009  bnel        $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x252F70u;
    {
        const bool branch_taken_0x252f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x252f70) {
            ctx->pc = 0x252F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252F70u;
            // 0x252f74: 0xc6400600  lwc1        $f0, 0x600($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x252F98u;
            goto label_252f98;
        }
    }
    ctx->pc = 0x252F78u;
    // 0x252f78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x252f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f80: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x252f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x252f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x252f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x252f88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x252f8c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x252F8Cu;
    SET_GPR_U32(ctx, 31, 0x252F94u);
    ctx->pc = 0x252F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F8Cu;
    // 0x252f90: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x252F8Cu, 0x252F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F94u;
label_252f94:
    // 0x252f94: 0xc6400600  lwc1        $f0, 0x600($s2)
    ctx->pc = 0x252f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_252f98:
    // 0x252f98: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x252f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x252f9c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x252f9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x252fa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x252fa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252fa4: 0x0  nop
    ctx->pc = 0x252fa4u;
    // NOP
    // 0x252fa8: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
    ctx->pc = 0x252FA8u;
    {
        const bool branch_taken_0x252fa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x252FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FA8u;
        // 0x252fac: 0xe6400600  swc1        $f0, 0x600($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fa8) {
            ctx->pc = 0x25301Cu;
            goto label_25301c;
        }
    }
    ctx->pc = 0x252FB0u;
    // 0x252fb0: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x252fb0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x252fb4: 0x1c400013  bgtz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x252FB4u;
    {
        const bool branch_taken_0x252fb4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x252FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FB4u;
        // 0x252fb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fb4) {
            ctx->pc = 0x253004u;
            goto label_253004;
        }
    }
    ctx->pc = 0x252FBCu;
    // 0x252fbc: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x252fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x252fc0: 0x24020260  addiu       $v0, $zero, 0x260
    ctx->pc = 0x252fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    // 0x252fc4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252FC4u;
    {
        const bool branch_taken_0x252fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x252FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FC4u;
        // 0x252fc8: 0x28620260  slti        $v0, $v1, 0x260 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)608) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fc4) {
            ctx->pc = 0x252FE8u;
            goto label_252fe8;
        }
    }
    ctx->pc = 0x252FCCu;
    // 0x252fcc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x252FCCu;
    {
        const bool branch_taken_0x252fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FCCu;
        // 0x252fd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fcc) {
            ctx->pc = 0x253004u;
            goto label_253004;
        }
    }
    ctx->pc = 0x252FD4u;
    // 0x252fd4: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x252fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x252fd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x252FD8u;
    {
        const bool branch_taken_0x252fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FD8u;
        // 0x252fdc: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fd8) {
            ctx->pc = 0x253000u;
            goto label_253000;
        }
    }
    ctx->pc = 0x252FE0u;
    // 0x252fe0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252FE0u;
    {
        const bool branch_taken_0x252fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FE0u;
        // 0x252fe4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252fe0) {
            ctx->pc = 0x253004u;
            goto label_253004;
        }
    }
    ctx->pc = 0x252FE8u;
label_252fe8:
    // 0x252fe8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x252fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252fec: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x252fecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x252ff0: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x252ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x252ff4: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x252ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x252ff8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x252FF8u;
    {
        const bool branch_taken_0x252ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FF8u;
        // 0x252ffc: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ff8) {
            ctx->pc = 0x25301Cu;
            goto label_25301c;
        }
    }
    ctx->pc = 0x253000u;
label_253000:
    // 0x253000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253004:
    // 0x253004: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x253004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x253008: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x253008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25300c: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x25300cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x253010: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x253010u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x253014: 0xa24402f6  sb          $a0, 0x2F6($s2)
    ctx->pc = 0x253014u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 4));
    // 0x253018: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x253018u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_25301c:
    // 0x25301c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x25301cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_253020:
    // 0x253020: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x253020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_253024:
    // 0x253024: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x253024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x253028: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x253028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25302c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x25302cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x253030: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x253030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x253034: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x253034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x253038: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x253038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25303c: 0x3e00008  jr          $ra
    ctx->pc = 0x25303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25303Cu;
        // 0x253040: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25303Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253044u;
    // 0x253044: 0x0  nop
    ctx->pc = 0x253044u;
    // NOP
    ctx->pc = 0x253048u;
}
