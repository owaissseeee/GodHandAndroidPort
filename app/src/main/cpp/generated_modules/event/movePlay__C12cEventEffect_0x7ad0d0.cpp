#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlay__C12cEventEffect
// Address: 0x7ad0d0 - 0x7ad230
void movePlay__C12cEventEffect_0x7ad0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__C12cEventEffect_0x7ad0d0");
#endif

    switch (ctx->pc) {
        case 0x7ad104u: goto label_7ad104;
        case 0x7ad120u: goto label_7ad120;
        case 0x7ad12cu: goto label_7ad12c;
        case 0x7ad158u: goto label_7ad158;
        case 0x7ad16cu: goto label_7ad16c;
        case 0x7ad1a0u: goto label_7ad1a0;
        case 0x7ad1b0u: goto label_7ad1b0;
        case 0x7ad1bcu: goto label_7ad1bc;
        case 0x7ad1e8u: goto label_7ad1e8;
        case 0x7ad1fcu: goto label_7ad1fc;
        default: break;
    }

    ctx->pc = 0x7ad0d0u;

    // 0x7ad0d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7ad0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7ad0d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7ad0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ad0d8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7ad0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7ad0dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7ad0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad0e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7ad0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7ad0e4: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7ad0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7ad0e8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7ad0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7ad0ec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7ad0ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad0f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7ad0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7ad0f4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7ad0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7ad0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ad0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ad0fc: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7AD0FCu;
    SET_GPR_U32(ctx, 31, 0x7AD104u);
    ctx->pc = 0x7AD100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD0FCu;
    // 0x7ad100: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7AD0FCu, 0x7AD104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD104u;
label_7ad104:
    // 0x7ad104: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7ad104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7ad108: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x7AD108u;
    {
        const bool branch_taken_0x7ad108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD108u;
        // 0x7ad10c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad108) {
            ctx->pc = 0x7AD20Cu;
            goto label_7ad20c;
        }
    }
    ctx->pc = 0x7AD110u;
    // 0x7ad110: 0x8e330014  lw          $s3, 0x14($s1)
    ctx->pc = 0x7ad110u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7ad114: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x7AD114u;
    {
        const bool branch_taken_0x7ad114 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD114u;
        // 0x7ad118: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad114) {
            ctx->pc = 0x7AD17Cu;
            goto label_7ad17c;
        }
    }
    ctx->pc = 0x7AD11Cu;
    // 0x7ad11c: 0x0  nop
    ctx->pc = 0x7ad11cu;
    // NOP
label_7ad120:
    // 0x7ad120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7ad120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad124: 0xc1ec888  jal         func_7B2220
    ctx->pc = 0x7AD124u;
    SET_GPR_U32(ctx, 31, 0x7AD12Cu);
    ctx->pc = 0x7AD128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD124u;
    // 0x7ad128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2220u, 0x7AD124u, 0x7AD12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD12Cu;
label_7ad12c:
    // 0x7ad12c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x7AD12Cu;
    {
        const bool branch_taken_0x7ad12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ad12c) {
            ctx->pc = 0x7AD130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD12Cu;
            // 0x7ad130: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD170u;
            goto label_7ad170;
        }
    }
    ctx->pc = 0x7AD134u;
    // 0x7ad134: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x7ad134u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x7ad138: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x7AD138u;
    {
        const bool branch_taken_0x7ad138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ad138) {
            ctx->pc = 0x7AD13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD138u;
            // 0x7ad13c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD170u;
            goto label_7ad170;
        }
    }
    ctx->pc = 0x7AD140u;
    // 0x7ad140: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x7ad140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x7ad144: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7ad144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7ad148: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AD148u;
    {
        const bool branch_taken_0x7ad148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD148u;
        // 0x7ad14c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad148) {
            ctx->pc = 0x7AD160u;
            goto label_7ad160;
        }
    }
    ctx->pc = 0x7AD150u;
    // 0x7ad150: 0xc1ec896  jal         func_7B2258
    ctx->pc = 0x7AD150u;
    SET_GPR_U32(ctx, 31, 0x7AD158u);
    ctx->pc = 0x7AD154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD150u;
    // 0x7ad154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2258u, 0x7AD150u, 0x7AD158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD158u;
label_7ad158:
    // 0x7ad158: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AD158u;
    {
        const bool branch_taken_0x7ad158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ad158) {
            ctx->pc = 0x7AD15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD158u;
            // 0x7ad15c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD170u;
            goto label_7ad170;
        }
    }
    ctx->pc = 0x7AD160u;
label_7ad160:
    // 0x7ad160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7ad160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad164: 0xc1eb48c  jal         func_7AD230
    ctx->pc = 0x7AD164u;
    SET_GPR_U32(ctx, 31, 0x7AD16Cu);
    ctx->pc = 0x7AD168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD164u;
    // 0x7ad168: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AD230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AD230u, 0x7AD164u, 0x7AD16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD16Cu;
label_7ad16c:
    // 0x7ad16c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x7ad16cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_7ad170:
    // 0x7ad170: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x7ad170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x7ad174: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x7AD174u;
    {
        const bool branch_taken_0x7ad174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD174u;
        // 0x7ad178: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad174) {
            ctx->pc = 0x7AD120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ad120;
        }
    }
    ctx->pc = 0x7AD17Cu;
label_7ad17c:
    // 0x7ad17c: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7ad17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7ad180: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7ad180u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7ad184: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x7ad184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ad188: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x7ad188u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7ad18c: 0x0  nop
    ctx->pc = 0x7ad18cu;
    // NOP
    // 0x7ad190: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x7AD190u;
    {
        const bool branch_taken_0x7ad190 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7ad190) {
            ctx->pc = 0x7AD194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD190u;
            // 0x7ad194: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD1A4u;
            goto label_7ad1a4;
        }
    }
    ctx->pc = 0x7AD198u;
    // 0x7ad198: 0xc0be856  jal         func_2FA158
    ctx->pc = 0x7AD198u;
    SET_GPR_U32(ctx, 31, 0x7AD1A0u);
    ctx->pc = 0x7AD19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD198u;
    // 0x7ad19c: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA158u, 0x7AD198u, 0x7AD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD1A0u;
label_7ad1a0:
    // 0x7ad1a0: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x7ad1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_7ad1a4:
    // 0x7ad1a4: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x7AD1A4u;
    {
        const bool branch_taken_0x7ad1a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD1A4u;
        // 0x7ad1a8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad1a4) {
            ctx->pc = 0x7AD20Cu;
            goto label_7ad20c;
        }
    }
    ctx->pc = 0x7AD1ACu;
    // 0x7ad1ac: 0x0  nop
    ctx->pc = 0x7ad1acu;
    // NOP
label_7ad1b0:
    // 0x7ad1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7ad1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad1b4: 0xc1ec888  jal         func_7B2220
    ctx->pc = 0x7AD1B4u;
    SET_GPR_U32(ctx, 31, 0x7AD1BCu);
    ctx->pc = 0x7AD1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD1B4u;
    // 0x7ad1b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2220u, 0x7AD1B4u, 0x7AD1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD1BCu;
label_7ad1bc:
    // 0x7ad1bc: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x7AD1BCu;
    {
        const bool branch_taken_0x7ad1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ad1bc) {
            ctx->pc = 0x7AD1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD1BCu;
            // 0x7ad1c0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD200u;
            goto label_7ad200;
        }
    }
    ctx->pc = 0x7AD1C4u;
    // 0x7ad1c4: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x7ad1c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x7ad1c8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x7AD1C8u;
    {
        const bool branch_taken_0x7ad1c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7ad1c8) {
            ctx->pc = 0x7AD1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD1C8u;
            // 0x7ad1cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD200u;
            goto label_7ad200;
        }
    }
    ctx->pc = 0x7AD1D0u;
    // 0x7ad1d0: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x7ad1d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
    // 0x7ad1d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7ad1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7ad1d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AD1D8u;
    {
        const bool branch_taken_0x7ad1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD1D8u;
        // 0x7ad1dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad1d8) {
            ctx->pc = 0x7AD1F0u;
            goto label_7ad1f0;
        }
    }
    ctx->pc = 0x7AD1E0u;
    // 0x7ad1e0: 0xc1ec896  jal         func_7B2258
    ctx->pc = 0x7AD1E0u;
    SET_GPR_U32(ctx, 31, 0x7AD1E8u);
    ctx->pc = 0x7AD1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD1E0u;
    // 0x7ad1e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B2258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B2258u, 0x7AD1E0u, 0x7AD1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD1E8u;
label_7ad1e8:
    // 0x7ad1e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AD1E8u;
    {
        const bool branch_taken_0x7ad1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ad1e8) {
            ctx->pc = 0x7AD1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD1E8u;
            // 0x7ad1ec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD200u;
            goto label_7ad200;
        }
    }
    ctx->pc = 0x7AD1F0u;
label_7ad1f0:
    // 0x7ad1f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7ad1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad1f4: 0xc1eb4c2  jal         func_7AD308
    ctx->pc = 0x7AD1F4u;
    SET_GPR_U32(ctx, 31, 0x7AD1FCu);
    ctx->pc = 0x7AD1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD1F4u;
    // 0x7ad1f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AD308u, 0x7AD1F4u, 0x7AD1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD1FCu;
label_7ad1fc:
    // 0x7ad1fc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x7ad1fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_7ad200:
    // 0x7ad200: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x7ad200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x7ad204: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x7AD204u;
    {
        const bool branch_taken_0x7ad204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD204u;
        // 0x7ad208: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad204) {
            ctx->pc = 0x7AD1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ad1b0;
        }
    }
    ctx->pc = 0x7AD20Cu;
label_7ad20c:
    // 0x7ad20c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7ad20cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ad210: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7ad210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ad214: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7ad214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ad218: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7ad218u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ad21c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7ad21cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ad220: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ad220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ad224: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD224u;
        // 0x7ad228: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD22Cu;
    // 0x7ad22c: 0x0  nop
    ctx->pc = 0x7ad22cu;
    // NOP
    ctx->pc = 0x7ad230u;
}
} // namespace gh_event
