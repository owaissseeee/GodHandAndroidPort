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

// Function: cEm00_stepSetGrabPrompt
// Address: 0x2478d8 - 0x247b18
void cEm00_stepSetGrabPrompt_0x2478d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepSetGrabPrompt_0x2478d8");
#endif

    switch (ctx->pc) {
        case 0x2479a4u: goto label_2479a4;
        case 0x2479d8u: goto label_2479d8;
        case 0x2479e0u: goto label_2479e0;
        case 0x2479ecu: goto label_2479ec;
        case 0x2479f8u: goto label_2479f8;
        case 0x247a74u: goto label_247a74;
        case 0x247a8cu: goto label_247a8c;
        case 0x247ab8u: goto label_247ab8;
        case 0x247accu: goto label_247acc;
        case 0x247adcu: goto label_247adc;
        case 0x247af0u: goto label_247af0;
        case 0x247afcu: goto label_247afc;
        default: break;
    }

    ctx->pc = 0x2478d8u;

    // 0x2478d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2478d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2478dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2478dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2478e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2478e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2478e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2478e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2478e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2478e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2478ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2478ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2478f0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2478f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2478f4: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x2478f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2478f8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2478F8u;
    {
        const bool branch_taken_0x2478f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2478FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2478F8u;
        // 0x2478fc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2478f8) {
            ctx->pc = 0x247960u;
            goto label_247960;
        }
    }
    ctx->pc = 0x247900u;
    // 0x247900: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x247900u;
    {
        const bool branch_taken_0x247900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247900) {
            ctx->pc = 0x247904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247900u;
            // 0x247904: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247918u;
            goto label_247918;
        }
    }
    ctx->pc = 0x247908u;
    // 0x247908: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x247908u;
    {
        const bool branch_taken_0x247908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247908) {
            ctx->pc = 0x24790Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247908u;
            // 0x24790c: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247930u;
            goto label_247930;
        }
    }
    ctx->pc = 0x247910u;
    // 0x247910: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x247910u;
    {
        const bool branch_taken_0x247910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247910u;
        // 0x247914: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247910) {
            ctx->pc = 0x247B00u;
            goto label_247b00;
        }
    }
    ctx->pc = 0x247918u;
label_247918:
    // 0x247918: 0x1062005a  beq         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x247918u;
    {
        const bool branch_taken_0x247918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247918u;
        // 0x24791c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247918) {
            ctx->pc = 0x247A84u;
            goto label_247a84;
        }
    }
    ctx->pc = 0x247920u;
    // 0x247920: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x247920u;
    {
        const bool branch_taken_0x247920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x247920) {
            ctx->pc = 0x247AC4u;
            goto label_247ac4;
        }
    }
    ctx->pc = 0x247928u;
    // 0x247928: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x247928u;
    {
        const bool branch_taken_0x247928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247928u;
        // 0x24792c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247928) {
            ctx->pc = 0x247B00u;
            goto label_247b00;
        }
    }
    ctx->pc = 0x247930u;
label_247930:
    // 0x247930: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x247930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x247934: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x247934u;
    {
        const bool branch_taken_0x247934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x247938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247934u;
        // 0x247938: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247934) {
            ctx->pc = 0x247954u;
            goto label_247954;
        }
    }
    ctx->pc = 0x24793Cu;
    // 0x24793c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x24793cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247940: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x247940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x247944: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x247944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247948: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x247948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x24794c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x24794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247950: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x247950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_247954:
    // 0x247954: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x247954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x247958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x24795c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x24795cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_247960:
    // 0x247960: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x247960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x247964: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x247964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x247968: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x247968u;
    {
        const bool branch_taken_0x247968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x247968) {
            ctx->pc = 0x247988u;
            goto label_247988;
        }
    }
    ctx->pc = 0x247970u;
    // 0x247970: 0xc6000580  lwc1        $f0, 0x580($s0)
    ctx->pc = 0x247970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247974: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x247974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x247978: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x247978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24797c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24797cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x247980: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x247980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247984: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x247984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_247988:
    // 0x247988: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x247988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x24798c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24798cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247990: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x247990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x247994: 0xa2110617  sb          $s1, 0x617($s0)
    ctx->pc = 0x247994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1559), (uint8_t)GPR_U32(ctx, 17));
    // 0x247998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24799c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x24799Cu;
    SET_GPR_U32(ctx, 31, 0x2479A4u);
    ctx->pc = 0x2479A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24799Cu;
    // 0x2479a0: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x24799Cu, 0x2479A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479A4u;
label_2479a4:
    // 0x2479a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2479a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2479a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2479a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2479ac: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x2479acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x2479b0: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x2479b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2479b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2479b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2479b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2479b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2479bc: 0x8c6502bc  lw          $a1, 0x2BC($v1)
    ctx->pc = 0x2479bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 700)));
    // 0x2479c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2479c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2479c4: 0x8c6602c0  lw          $a2, 0x2C0($v1)
    ctx->pc = 0x2479c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 704)));
    // 0x2479c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2479c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2479cc: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2479ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2479d0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2479D0u;
    SET_GPR_U32(ctx, 31, 0x2479D8u);
    ctx->pc = 0x2479D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479D0u;
    // 0x2479d4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2479D0u, 0x2479D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479D8u;
label_2479d8:
    // 0x2479d8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2479D8u;
    SET_GPR_U32(ctx, 31, 0x2479E0u);
    ctx->pc = 0x2479DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479D8u;
    // 0x2479dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2479D8u, 0x2479E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479E0u;
label_2479e0:
    // 0x2479e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2479e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2479e4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2479E4u;
    SET_GPR_U32(ctx, 31, 0x2479ECu);
    ctx->pc = 0x2479E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479E4u;
    // 0x2479e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2479E4u, 0x2479ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479ECu;
label_2479ec:
    // 0x2479ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2479ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2479f0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2479F0u;
    SET_GPR_U32(ctx, 31, 0x2479F8u);
    ctx->pc = 0x2479F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2479F0u;
    // 0x2479f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2479F0u, 0x2479F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2479F8u;
label_2479f8:
    // 0x2479f8: 0xc6010768  lwc1        $f1, 0x768($s0)
    ctx->pc = 0x2479f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2479fc: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x2479fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x247a00: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x247a00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x247a04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x247a04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x247a08: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x247a08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x247a0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x247a0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247a10: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x247a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x247a14: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x247A14u;
    {
        const bool branch_taken_0x247a14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A14u;
        // 0x247a18: 0xa60203ac  sh          $v0, 0x3AC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 940), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a14) {
            ctx->pc = 0x247A7Cu;
            goto label_247a7c;
        }
    }
    ctx->pc = 0x247A1Cu;
    // 0x247a1c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x247a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x247a20: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x247a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x247a24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x247a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x247a28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247A28u;
    {
        const bool branch_taken_0x247a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A28u;
        // 0x247a2c: 0xc6000618  lwc1        $f0, 0x618($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a28) {
            ctx->pc = 0x247A38u;
            goto label_247a38;
        }
    }
    ctx->pc = 0x247A30u;
    // 0x247a30: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x247a30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x247a34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x247a34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_247a38:
    // 0x247a38: 0x0  nop
    ctx->pc = 0x247a38u;
    // NOP
    // 0x247a3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x247a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247a40: 0x0  nop
    ctx->pc = 0x247a40u;
    // NOP
    // 0x247a44: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x247A44u;
    {
        const bool branch_taken_0x247a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A44u;
        // 0x247a48: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a44) {
            ctx->pc = 0x247A7Cu;
            goto label_247a7c;
        }
    }
    ctx->pc = 0x247A4Cu;
    // 0x247a4c: 0x3c080024  lui         $t0, 0x24
    ctx->pc = 0x247a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)36 << 16));
    // 0x247a50: 0xa21102f7  sb          $s1, 0x2F7($s0)
    ctx->pc = 0x247a50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 17));
    // 0x247a54: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x247a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x247a58: 0x250878b8  addiu       $t0, $t0, 0x78B8
    ctx->pc = 0x247a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30904));
    // 0x247a5c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x247a5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a60: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x247a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x247a64: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x247a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x247a68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247a68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a6c: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x247A6Cu;
    SET_GPR_U32(ctx, 31, 0x247A74u);
    ctx->pc = 0x247A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A6Cu;
    // 0x247a70: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x247A6Cu, 0x247A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A74u;
label_247a74:
    // 0x247a74: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x247A74u;
    {
        const bool branch_taken_0x247a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A74u;
        // 0x247a78: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a74) {
            ctx->pc = 0x247B00u;
            goto label_247b00;
        }
    }
    ctx->pc = 0x247A7Cu;
label_247a7c:
    // 0x247a7c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x247A7Cu;
    {
        const bool branch_taken_0x247a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247A7Cu;
        // 0x247a80: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a7c) {
            ctx->pc = 0x247AFCu;
            goto label_247afc;
        }
    }
    ctx->pc = 0x247A84u;
label_247a84:
    // 0x247a84: 0xc09d91a  jal         func_276468
    ctx->pc = 0x247A84u;
    SET_GPR_U32(ctx, 31, 0x247A8Cu);
    ctx->pc = 0x247A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247A84u;
    // 0x247a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x247A84u, 0x247A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A8Cu;
label_247a8c:
    // 0x247a8c: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x247a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x247a90: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x247a90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x247a94: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x247a94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x247a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a9c: 0x8c6502bc  lw          $a1, 0x2BC($v1)
    ctx->pc = 0x247a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 700)));
    // 0x247aa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247aa4: 0x8c6602c0  lw          $a2, 0x2C0($v1)
    ctx->pc = 0x247aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 704)));
    // 0x247aa8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x247aa8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247aac: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x247aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x247ab0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x247AB0u;
    SET_GPR_U32(ctx, 31, 0x247AB8u);
    ctx->pc = 0x247AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247AB0u;
    // 0x247ab4: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x247AB0u, 0x247AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247AB8u;
label_247ab8:
    // 0x247ab8: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x247ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x247abc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x247abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x247ac0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x247ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_247ac4:
    // 0x247ac4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x247AC4u;
    SET_GPR_U32(ctx, 31, 0x247ACCu);
    ctx->pc = 0x247AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247AC4u;
    // 0x247ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x247AC4u, 0x247ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247ACCu;
label_247acc:
    // 0x247acc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x247ACCu;
    {
        const bool branch_taken_0x247acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247acc) {
            ctx->pc = 0x247ADCu;
            goto label_247adc;
        }
    }
    ctx->pc = 0x247AD4u;
    // 0x247ad4: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x247AD4u;
    SET_GPR_U32(ctx, 31, 0x247ADCu);
    ctx->pc = 0x247AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247AD4u;
    // 0x247ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x247AD4u, 0x247ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247ADCu;
label_247adc:
    // 0x247adc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x247adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x247ae0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x247ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x247ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247ae8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x247AE8u;
    SET_GPR_U32(ctx, 31, 0x247AF0u);
    ctx->pc = 0x247AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247AE8u;
    // 0x247aec: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x247AE8u, 0x247AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247AF0u;
label_247af0:
    // 0x247af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247af4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x247AF4u;
    SET_GPR_U32(ctx, 31, 0x247AFCu);
    ctx->pc = 0x247AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247AF4u;
    // 0x247af8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x247AF4u, 0x247AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247AFCu;
label_247afc:
    // 0x247afc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x247afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_247b00:
    // 0x247b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x247b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247b08: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x247b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x247b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x247B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247B0Cu;
        // 0x247b10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247B14u;
    // 0x247b14: 0x0  nop
    ctx->pc = 0x247b14u;
    // NOP
    ctx->pc = 0x247b18u;
}
