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

// Function: func_0015AF30
// Address: 0x15af30 - 0x15b080
void func_0015AF30_0x15af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015AF30_0x15af30");
#endif

    switch (ctx->pc) {
        case 0x15af88u: goto label_15af88;
        case 0x15af9cu: goto label_15af9c;
        case 0x15afb0u: goto label_15afb0;
        case 0x15afc4u: goto label_15afc4;
        case 0x15afecu: goto label_15afec;
        case 0x15affcu: goto label_15affc;
        case 0x15b00cu: goto label_15b00c;
        case 0x15b01cu: goto label_15b01c;
        case 0x15b02cu: goto label_15b02c;
        case 0x15b03cu: goto label_15b03c;
        case 0x15b04cu: goto label_15b04c;
        default: break;
    }

    ctx->pc = 0x15af30u;

    // 0x15af30: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15af30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x15af34: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x15af34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15af38: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x15af38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x15af3c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x15af3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x15af40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15af40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af44: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x15af44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x15af48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15af48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af4c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x15af4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x15af50: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15af50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15af54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15af54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15af58: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x15af58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15af5c: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x15af5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15af60: 0x0  nop
    ctx->pc = 0x15af60u;
    // NOP
    // 0x15af64: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x15AF64u;
    {
        const bool branch_taken_0x15af64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15AF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF64u;
        // 0x15af68: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af64) {
            ctx->pc = 0x15AFA4u;
            goto label_15afa4;
        }
    }
    ctx->pc = 0x15AF6Cu;
    // 0x15af6c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15af6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15af70: 0x460d0032  c.eq.s      $f0, $f13
    ctx->pc = 0x15af70u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15af74: 0x0  nop
    ctx->pc = 0x15af74u;
    // NOP
    // 0x15af78: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x15AF78u;
    {
        const bool branch_taken_0x15af78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15af78) {
            ctx->pc = 0x15AF7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15AF78u;
            // 0x15af7c: 0xc60d0000  lwc1        $f13, 0x0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15AFA8u;
            goto label_15afa8;
        }
    }
    ctx->pc = 0x15AF80u;
    // 0x15af80: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x15AF80u;
    SET_GPR_U32(ctx, 31, 0x15AF88u);
    ctx->pc = 0x15AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF80u;
    // 0x15af84: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x15AF80u, 0x15AF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF88u;
label_15af88:
    // 0x15af88: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x15af88u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x15af8c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x15af8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x15af90: 0x24a53c40  addiu       $a1, $a1, 0x3C40
    ctx->pc = 0x15af90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15424));
    // 0x15af94: 0xc0c2994  jal         func_30A650
    ctx->pc = 0x15AF94u;
    SET_GPR_U32(ctx, 31, 0x15AF9Cu);
    ctx->pc = 0x15AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AF94u;
    // 0x15af98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A650u, 0x15AF94u, 0x15AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AF9Cu;
label_15af9c:
    // 0x15af9c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15AF9Cu;
    {
        const bool branch_taken_0x15af9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AF9Cu;
        // 0x15afa0: 0x27b00040  addiu       $s0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15af9c) {
            ctx->pc = 0x15B000u;
            goto label_15b000;
        }
    }
    ctx->pc = 0x15AFA4u;
label_15afa4:
    // 0x15afa4: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x15afa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_15afa8:
    // 0x15afa8: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x15AFA8u;
    SET_GPR_U32(ctx, 31, 0x15AFB0u);
    ctx->pc = 0x15AFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFA8u;
    // 0x15afac: 0xc60c0008  lwc1        $f12, 0x8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x15AFA8u, 0x15AFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFB0u;
label_15afb0:
    // 0x15afb0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x15afb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x15afb4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x15afb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x15afb8: 0x24a53c40  addiu       $a1, $a1, 0x3C40
    ctx->pc = 0x15afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15424));
    // 0x15afbc: 0xc0c29ee  jal         func_30A7B8
    ctx->pc = 0x15AFBCu;
    SET_GPR_U32(ctx, 31, 0x15AFC4u);
    ctx->pc = 0x15AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFBCu;
    // 0x15afc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A7B8u, 0x15AFBCu, 0x15AFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFC4u;
label_15afc4:
    // 0x15afc4: 0xc60d0000  lwc1        $f13, 0x0($s0)
    ctx->pc = 0x15afc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x15afc8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15afc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15afcc: 0x460d6b42  mul.s       $f13, $f13, $f13
    ctx->pc = 0x15afccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x15afd0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x15afd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x15afd4: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x15afd4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x15afd8: 0x0  nop
    ctx->pc = 0x15afd8u;
    // NOP
    // 0x15afdc: 0x0  nop
    ctx->pc = 0x15afdcu;
    // NOP
    // 0x15afe0: 0x460d0344  c1          0xD0344
    ctx->pc = 0x15afe0u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x15afe4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x15AFE4u;
    SET_GPR_U32(ctx, 31, 0x15AFECu);
    ctx->pc = 0x15AFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFE4u;
    // 0x15afe8: 0xc60c0004  lwc1        $f12, 0x4($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x15AFE4u, 0x15AFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFECu;
label_15afec:
    // 0x15afec: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x15afecu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x15aff0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15aff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aff4: 0xc0c2994  jal         func_30A650
    ctx->pc = 0x15AFF4u;
    SET_GPR_U32(ctx, 31, 0x15AFFCu);
    ctx->pc = 0x15AFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFF4u;
    // 0x15aff8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A650u, 0x15AFF4u, 0x15AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFFCu;
label_15affc:
    // 0x15affc: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x15affcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15b000:
    // 0x15b000: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15b000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b004: 0xc0c28ec  jal         func_30A3B0
    ctx->pc = 0x15B004u;
    SET_GPR_U32(ctx, 31, 0x15B00Cu);
    ctx->pc = 0x15B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B004u;
    // 0x15b008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A3B0u, 0x15B004u, 0x15B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B00Cu;
label_15b00c:
    // 0x15b00c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15b00cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x15b010: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15b010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b014: 0xc0c29c0  jal         func_30A700
    ctx->pc = 0x15B014u;
    SET_GPR_U32(ctx, 31, 0x15B01Cu);
    ctx->pc = 0x15B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B014u;
    // 0x15b018: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A700u, 0x15B014u, 0x15B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B01Cu;
label_15b01c:
    // 0x15b01c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x15b01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b024: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x15B024u;
    SET_GPR_U32(ctx, 31, 0x15B02Cu);
    ctx->pc = 0x15B028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B024u;
    // 0x15b028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x15B024u, 0x15B02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B02Cu;
label_15b02c:
    // 0x15b02c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15b030: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15b030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b034: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x15B034u;
    SET_GPR_U32(ctx, 31, 0x15B03Cu);
    ctx->pc = 0x15B038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B034u;
    // 0x15b038: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x15B034u, 0x15B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B03Cu;
label_15b03c:
    // 0x15b03c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15b03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b040: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x15b040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x15b044: 0xc0c292e  jal         func_30A4B8
    ctx->pc = 0x15B044u;
    SET_GPR_U32(ctx, 31, 0x15B04Cu);
    ctx->pc = 0x15B048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B044u;
    // 0x15b048: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4B8u, 0x15B044u, 0x15B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B04Cu;
label_15b04c:
    // 0x15b04c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15b04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15b050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15b050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15b054: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x15b054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15b058: 0xe620003c  swc1        $f0, 0x3C($s1)
    ctx->pc = 0x15b058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
    // 0x15b05c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x15b05cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15b060: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x15b060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15b064: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15b064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15b068: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x15b068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15b06c: 0x3e00008  jr          $ra
    ctx->pc = 0x15B06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B06Cu;
        // 0x15b070: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B074u;
    // 0x15b074: 0x0  nop
    ctx->pc = 0x15b074u;
    // NOP
    // 0x15b078: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x15b078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15b07c: 0x0  nop
    ctx->pc = 0x15b07cu;
    // NOP
    ctx->pc = 0x15b080u;
}
