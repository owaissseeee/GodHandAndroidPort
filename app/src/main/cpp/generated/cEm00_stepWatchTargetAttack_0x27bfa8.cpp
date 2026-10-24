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

// Function: cEm00_stepWatchTargetAttack
// Address: 0x27bfa8 - 0x27c2b8
void cEm00_stepWatchTargetAttack_0x27bfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepWatchTargetAttack_0x27bfa8");
#endif

    switch (ctx->pc) {
        case 0x27bfd0u: goto label_27bfd0;
        case 0x27c02cu: goto label_27c02c;
        case 0x27c040u: goto label_27c040;
        case 0x27c0e0u: goto label_27c0e0;
        case 0x27c118u: goto label_27c118;
        case 0x27c178u: goto label_27c178;
        case 0x27c198u: goto label_27c198;
        case 0x27c1a4u: goto label_27c1a4;
        case 0x27c1c0u: goto label_27c1c0;
        case 0x27c228u: goto label_27c228;
        case 0x27c23cu: goto label_27c23c;
        case 0x27c250u: goto label_27c250;
        default: break;
    }

    ctx->pc = 0x27bfa8u;

    // 0x27bfa8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27bfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27bfac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x27bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x27bfb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27bfb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bfb4: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x27bfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x27bfb8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x27bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x27bfbc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x27bfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x27bfc0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x27bfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x27bfc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27bfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27bfc8: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x27BFC8u;
    SET_GPR_U32(ctx, 31, 0x27BFD0u);
    ctx->pc = 0x27BFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BFC8u;
    // 0x27bfcc: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x27BFC8u, 0x27BFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BFD0u;
label_27bfd0:
    // 0x27bfd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27bfd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bfd4: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x27bfd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x27bfd8: 0x8e221560  lw          $v0, 0x1560($s1)
    ctx->pc = 0x27bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5472)));
    // 0x27bfdc: 0x8e321580  lw          $s2, 0x1580($s1)
    ctx->pc = 0x27bfdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5504)));
    // 0x27bfe0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x27bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x27bfe4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27BFE4u;
    {
        const bool branch_taken_0x27bfe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFE4u;
        // 0x27bfe8: 0xae221560  sw          $v0, 0x1560($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfe4) {
            ctx->pc = 0x27C000u;
            goto label_27c000;
        }
    }
    ctx->pc = 0x27BFECu;
    // 0x27bfec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bff0: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27BFF0u;
    {
        const bool branch_taken_0x27bff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27bff0) {
            ctx->pc = 0x27C038u;
            goto label_27c038;
        }
    }
    ctx->pc = 0x27BFF8u;
    // 0x27bff8: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x27BFF8u;
    {
        const bool branch_taken_0x27bff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BFF8u;
        // 0x27bffc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bff8) {
            ctx->pc = 0x27C294u;
            goto label_27c294;
        }
    }
    ctx->pc = 0x27C000u;
label_27c000:
    // 0x27c000: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x27c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x27c004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c008: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27c008u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c00c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x27c00cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27c010: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x27c010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x27c014: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27c014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c018: 0x8c460014  lw          $a2, 0x14($v0)
    ctx->pc = 0x27c018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x27c01c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27c01cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c020: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27c020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27c024: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27C024u;
    SET_GPR_U32(ctx, 31, 0x27C02Cu);
    ctx->pc = 0x27C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C024u;
    // 0x27c028: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27C024u, 0x27C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C02Cu;
label_27c02c:
    // 0x27c02c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x27c02cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x27c030: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c034: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x27c034u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_27c038:
    // 0x27c038: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27C038u;
    SET_GPR_U32(ctx, 31, 0x27C040u);
    ctx->pc = 0x27C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C038u;
    // 0x27c03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27C038u, 0x27C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C040u;
label_27c040:
    // 0x27c040: 0x50400094  beql        $v0, $zero, . + 4 + (0x94 << 2)
    ctx->pc = 0x27C040u;
    {
        const bool branch_taken_0x27c040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c040) {
            ctx->pc = 0x27C044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C040u;
            // 0x27c044: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C294u;
            goto label_27c294;
        }
    }
    ctx->pc = 0x27C048u;
    // 0x27c048: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x27c048u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x27c04c: 0x58400091  blezl       $v0, . + 4 + (0x91 << 2)
    ctx->pc = 0x27C04Cu;
    {
        const bool branch_taken_0x27c04c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x27c04c) {
            ctx->pc = 0x27C050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C04Cu;
            // 0x27c050: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C294u;
            goto label_27c294;
        }
    }
    ctx->pc = 0x27C054u;
    // 0x27c054: 0xc62115b4  lwc1        $f1, 0x15B4($s1)
    ctx->pc = 0x27c054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c058: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27c058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c05c: 0x0  nop
    ctx->pc = 0x27c05cu;
    // NOP
    // 0x27c060: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27c060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c064: 0x0  nop
    ctx->pc = 0x27c064u;
    // NOP
    // 0x27c068: 0x4501008a  bc1t        . + 4 + (0x8A << 2)
    ctx->pc = 0x27C068u;
    {
        const bool branch_taken_0x27c068 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C068u;
        // 0x27c06c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c068) {
            ctx->pc = 0x27C294u;
            goto label_27c294;
        }
    }
    ctx->pc = 0x27C070u;
    // 0x27c070: 0x12400088  beqz        $s2, . + 4 + (0x88 << 2)
    ctx->pc = 0x27C070u;
    {
        const bool branch_taken_0x27c070 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c070) {
            ctx->pc = 0x27C294u;
            goto label_27c294;
        }
    }
    ctx->pc = 0x27C078u;
    // 0x27c078: 0x8642054a  lh          $v0, 0x54A($s2)
    ctx->pc = 0x27c078u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x27c07c: 0x58400086  blezl       $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x27C07Cu;
    {
        const bool branch_taken_0x27c07c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x27c07c) {
            ctx->pc = 0x27C080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C07Cu;
            // 0x27c080: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C298u;
            goto label_27c298;
        }
    }
    ctx->pc = 0x27C084u;
    // 0x27c084: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x27c084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c088: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x27c088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x27c08c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27c08cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c090: 0x0  nop
    ctx->pc = 0x27c090u;
    // NOP
    // 0x27c094: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27c094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c098: 0x0  nop
    ctx->pc = 0x27c098u;
    // NOP
    // 0x27c09c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27C09Cu;
    {
        const bool branch_taken_0x27c09c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C09Cu;
        // 0x27c0a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c09c) {
            ctx->pc = 0x27C0A8u;
            goto label_27c0a8;
        }
    }
    ctx->pc = 0x27C0A4u;
    // 0x27c0a4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x27c0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c0a8:
    // 0x27c0a8: 0xc6410760  lwc1        $f1, 0x760($s2)
    ctx->pc = 0x27c0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c0ac: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x27c0acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x27c0b0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x27c0b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x27c0b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27c0b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c0b8: 0x0  nop
    ctx->pc = 0x27c0b8u;
    // NOP
    // 0x27c0bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27c0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c0c0: 0x0  nop
    ctx->pc = 0x27c0c0u;
    // NOP
    // 0x27c0c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27C0C4u;
    {
        const bool branch_taken_0x27c0c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c0c4) {
            ctx->pc = 0x27C0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C0C4u;
            // 0x27c0c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C0CCu;
            goto label_27c0cc;
        }
    }
    ctx->pc = 0x27C0CCu;
label_27c0cc:
    // 0x27c0cc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x27c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x27c0d0: 0x24539b70  addiu       $s3, $v0, -0x6490
    ctx->pc = 0x27c0d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x27c0d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x27c0d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0d8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x27C0D8u;
    SET_GPR_U32(ctx, 31, 0x27C0E0u);
    ctx->pc = 0x27C0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0D8u;
    // 0x27c0dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x27C0D8u, 0x27C0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C0E0u;
label_27c0e0:
    // 0x27c0e0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x27c0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27c0e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27C0E4u;
    {
        const bool branch_taken_0x27c0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0E4u;
        // 0x27c0e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0e4) {
            ctx->pc = 0x27C110u;
            goto label_27c110;
        }
    }
    ctx->pc = 0x27C0ECu;
    // 0x27c0ec: 0x96420548  lhu         $v0, 0x548($s2)
    ctx->pc = 0x27c0ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1352)));
    // 0x27c0f0: 0x8644054a  lh          $a0, 0x54A($s2)
    ctx->pc = 0x27c0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1354)));
    // 0x27c0f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27c0f8: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x27c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x27c0fc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27c0fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27c100: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27c100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27c104: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x27c104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x27c108: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x27c108u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27c10c: 0xa2800a  movz        $s0, $a1, $v0
    ctx->pc = 0x27c10cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_27c110:
    // 0x27c110: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x27C110u;
    SET_GPR_U32(ctx, 31, 0x27C118u);
    ctx->pc = 0x27C114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C110u;
    // 0x27c114: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x27C110u, 0x27C118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C118u;
label_27c118:
    // 0x27c118: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x27c118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x27c11c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c120: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x27c120u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x27c124: 0x1200005b  beqz        $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x27C124u;
    {
        const bool branch_taken_0x27c124 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C124u;
        // 0x27c128: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c124) {
            ctx->pc = 0x27C294u;
            goto label_27c294;
        }
    }
    ctx->pc = 0x27C12Cu;
    // 0x27c12c: 0x922202b4  lbu         $v0, 0x2B4($s1)
    ctx->pc = 0x27c12cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x27c130: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C130u;
    {
        const bool branch_taken_0x27c130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C130u;
        // 0x27c134: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c130) {
            ctx->pc = 0x27C144u;
            goto label_27c144;
        }
    }
    ctx->pc = 0x27C138u;
    // 0x27c138: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x27c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x27c13c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27C13Cu;
    {
        const bool branch_taken_0x27c13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C13Cu;
        // 0x27c140: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c13c) {
            ctx->pc = 0x27C148u;
            goto label_27c148;
        }
    }
    ctx->pc = 0x27C144u;
label_27c144:
    // 0x27c144: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27c144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c148:
    // 0x27c148: 0x52000052  beql        $s0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x27C148u;
    {
        const bool branch_taken_0x27c148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c148) {
            ctx->pc = 0x27C14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C148u;
            // 0x27c14c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C294u;
            goto label_27c294;
        }
    }
    ctx->pc = 0x27C150u;
    // 0x27c150: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x27c150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27c154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27c154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27c158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27c158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c15c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x27c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27c160: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27c160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x27c164: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x27c164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x27c168: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x27c168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27c16c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27c16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c170: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x27C170u;
    SET_GPR_U32(ctx, 31, 0x27C178u);
    ctx->pc = 0x27C174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C170u;
    // 0x27c174: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x27C170u, 0x27C178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C178u;
label_27c178:
    // 0x27c178: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x27c178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x27c17c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x27c17cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c180: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x27c180u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c184: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x27c184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x27c188: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x27c188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27c18c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x27c18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27c190: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x27C190u;
    SET_GPR_U32(ctx, 31, 0x27C198u);
    ctx->pc = 0x27C194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C190u;
    // 0x27c194: 0xc7ad0018  lwc1        $f13, 0x18($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x27C190u, 0x27C198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C198u;
label_27c198:
    // 0x27c198: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27c198u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27c19c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x27C19Cu;
    SET_GPR_U32(ctx, 31, 0x27C1A4u);
    ctx->pc = 0x27C1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C19Cu;
    // 0x27c1a0: 0x8e1000f0  lw          $s0, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x27C19Cu, 0x27C1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C1A4u;
label_27c1a4:
    // 0x27c1a4: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x27c1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x27c1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c1ac: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x27c1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x27c1b0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27c1b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27c1b4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x27c1b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27c1b8: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x27C1B8u;
    SET_GPR_U32(ctx, 31, 0x27C1C0u);
    ctx->pc = 0x27C1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C1B8u;
    // 0x27c1bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x27C1B8u, 0x27C1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C1C0u;
label_27c1c0:
    // 0x27c1c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27c1c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x27c1c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27c1c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c1c8: 0x0  nop
    ctx->pc = 0x27c1c8u;
    // NOP
    // 0x27c1cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27c1ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c1d0: 0x0  nop
    ctx->pc = 0x27c1d0u;
    // NOP
    // 0x27c1d4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x27C1D4u;
    {
        const bool branch_taken_0x27c1d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C1D4u;
        // 0x27c1d8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c1d4) {
            ctx->pc = 0x27C1E0u;
            goto label_27c1e0;
        }
    }
    ctx->pc = 0x27C1DCu;
    // 0x27c1dc: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x27c1dcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_27c1e0:
    // 0x27c1e0: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x27c1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x27c1e4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x27c1e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x27c1e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27c1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c1ec: 0x0  nop
    ctx->pc = 0x27c1ecu;
    // NOP
    // 0x27c1f0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x27c1f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c1f4: 0x0  nop
    ctx->pc = 0x27c1f4u;
    // NOP
    // 0x27c1f8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x27C1F8u;
    {
        const bool branch_taken_0x27c1f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C1F8u;
        // 0x27c1fc: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c1f8) {
            ctx->pc = 0x27C294u;
            goto label_27c294;
        }
    }
    ctx->pc = 0x27C200u;
    // 0x27c200: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x27c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27c204: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x27c204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x27c208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27c208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c20c: 0x0  nop
    ctx->pc = 0x27c20cu;
    // NOP
    // 0x27c210: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27c210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27c214: 0x0  nop
    ctx->pc = 0x27c214u;
    // NOP
    // 0x27c218: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x27C218u;
    {
        const bool branch_taken_0x27c218 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27c218) {
            ctx->pc = 0x27C248u;
            goto label_27c248;
        }
    }
    ctx->pc = 0x27C220u;
    // 0x27c220: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x27C220u;
    SET_GPR_U32(ctx, 31, 0x27C228u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x27C220u, 0x27C228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C228u;
label_27c228:
    // 0x27c228: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27c228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27c22c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C22Cu;
    {
        const bool branch_taken_0x27c22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c22c) {
            ctx->pc = 0x27C248u;
            goto label_27c248;
        }
    }
    ctx->pc = 0x27C234u;
    // 0x27c234: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x27C234u;
    SET_GPR_U32(ctx, 31, 0x27C23Cu);
    ctx->pc = 0x27C238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C234u;
    // 0x27c238: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x27C234u, 0x27C23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C23Cu;
label_27c23c:
    // 0x27c23c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x27c23cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x27c240: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C240u;
    {
        const bool branch_taken_0x27c240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C240u;
        // 0x27c244: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c240) {
            ctx->pc = 0x27C260u;
            goto label_27c260;
        }
    }
    ctx->pc = 0x27C248u;
label_27c248:
    // 0x27c248: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x27C248u;
    SET_GPR_U32(ctx, 31, 0x27C250u);
    ctx->pc = 0x27C24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C248u;
    // 0x27c24c: 0x26849b70  addiu       $a0, $s4, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x27C248u, 0x27C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C250u;
label_27c250:
    // 0x27c250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27c250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c254: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x27C254u;
    {
        const bool branch_taken_0x27c254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27c254) {
            ctx->pc = 0x27C258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27C254u;
            // 0x27c258: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27C274u;
            goto label_27c274;
        }
    }
    ctx->pc = 0x27C25Cu;
    // 0x27c25c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27c260:
    // 0x27c260: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x27c260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c264: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x27c264u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x27c268: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x27c268u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c26c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27C26Cu;
    {
        const bool branch_taken_0x27c26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C26Cu;
        // 0x27c270: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c26c) {
            ctx->pc = 0x27C290u;
            goto label_27c290;
        }
    }
    ctx->pc = 0x27C274u;
label_27c274:
    // 0x27c274: 0x3c0143e1  lui         $at, 0x43E1
    ctx->pc = 0x27c274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17377 << 16));
    // 0x27c278: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27c278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c27c: 0x0  nop
    ctx->pc = 0x27c27cu;
    // NOP
    // 0x27c280: 0xe62015b4  swc1        $f0, 0x15B4($s1)
    ctx->pc = 0x27c280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5556), bits); }
    // 0x27c284: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x27c284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c288: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x27c288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27c28c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x27c28cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_27c290:
    // 0x27c290: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x27c290u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27c294:
    // 0x27c294: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x27c294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27c298:
    // 0x27c298: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x27c298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27c29c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27c29cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27c2a0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x27c2a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c2a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27c2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c2a8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x27c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27c2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x27C2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C2ACu;
        // 0x27c2b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C2B4u;
    // 0x27c2b4: 0x0  nop
    ctx->pc = 0x27c2b4u;
    // NOP
    ctx->pc = 0x27c2b8u;
}
