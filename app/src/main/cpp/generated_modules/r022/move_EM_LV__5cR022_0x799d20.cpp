#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: move_EM_LV__5cR022
// Address: 0x799d20 - 0x79a2d0
void move_EM_LV__5cR022_0x799d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_EM_LV__5cR022_0x799d20");
#endif

    switch (ctx->pc) {
        case 0x799db8u: goto label_799db8;
        case 0x799e2cu: goto label_799e2c;
        case 0x799e44u: goto label_799e44;
        case 0x799e6cu: goto label_799e6c;
        case 0x799e84u: goto label_799e84;
        case 0x799eacu: goto label_799eac;
        case 0x799ec4u: goto label_799ec4;
        case 0x799eecu: goto label_799eec;
        case 0x799f04u: goto label_799f04;
        case 0x799f1cu: goto label_799f1c;
        case 0x799f38u: goto label_799f38;
        case 0x799f54u: goto label_799f54;
        case 0x799f70u: goto label_799f70;
        case 0x799f98u: goto label_799f98;
        case 0x799fa8u: goto label_799fa8;
        case 0x799fb8u: goto label_799fb8;
        case 0x799fc8u: goto label_799fc8;
        case 0x799fe4u: goto label_799fe4;
        case 0x799ff4u: goto label_799ff4;
        case 0x79a004u: goto label_79a004;
        case 0x79a014u: goto label_79a014;
        case 0x79a08cu: goto label_79a08c;
        case 0x79a124u: goto label_79a124;
        case 0x79a138u: goto label_79a138;
        case 0x79a14cu: goto label_79a14c;
        case 0x79a160u: goto label_79a160;
        case 0x79a174u: goto label_79a174;
        case 0x79a198u: goto label_79a198;
        case 0x79a1a8u: goto label_79a1a8;
        case 0x79a1b8u: goto label_79a1b8;
        case 0x79a1c8u: goto label_79a1c8;
        case 0x79a1e4u: goto label_79a1e4;
        case 0x79a1f4u: goto label_79a1f4;
        case 0x79a204u: goto label_79a204;
        case 0x79a214u: goto label_79a214;
        case 0x79a28cu: goto label_79a28c;
        default: break;
    }

    ctx->pc = 0x799d20u;

    // 0x799d20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799d24: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x799d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x799d28: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x799d2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x799d2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d30: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799d34: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799d38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x799d3c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x799d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x799d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799d44: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x799d44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x799d48: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x799d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x799d4c: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x799D4Cu;
    {
        const bool branch_taken_0x799d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D4Cu;
        // 0x799d50: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d4c) {
            ctx->pc = 0x79A0D8u;
            goto label_79a0d8;
        }
    }
    ctx->pc = 0x799D54u;
    // 0x799d54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x799d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x799d58: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x799d5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799d60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x799d64: 0x800008  jr          $a0
    ctx->pc = 0x799D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799D6Cu: goto label_799d6c;
            case 0x799DC4u: goto label_799dc4;
            case 0x799E04u: goto label_799e04;
            case 0x799F84u: goto label_799f84;
            case 0x79A0C8u: goto label_79a0c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799D64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799D6Cu;
label_799d6c:
    // 0x799d6c: 0x8e820090  lw          $v0, 0x90($s4)
    ctx->pc = 0x799d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x799d70: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799d74: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d7c: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x799d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x799d80: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x799d84: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799d88: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799d8c: 0x8e830094  lw          $v1, 0x94($s4)
    ctx->pc = 0x799d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x799d90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799d90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799d94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d98: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x799d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x799d9c: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x799d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x799da0: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x799da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x799da4: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x799da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x799da8: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x799da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
    // 0x799dac: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x799db0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799DB0u;
    SET_GPR_U32(ctx, 31, 0x799DB8u);
    ctx->pc = 0x799DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DB0u;
    // 0x799db4: 0xac400084  sw          $zero, 0x84($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799DB0u, 0x799DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB8u;
label_799db8:
    // 0x799db8: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x799db8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x799dbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x799dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x799dc0: 0xa6830002  sh          $v1, 0x2($s4)
    ctx->pc = 0x799dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
label_799dc4:
    // 0x799dc4: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x799dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x799dc8: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x799dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x799dcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799dd0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x799dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799dd4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x799dd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x799dd8: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x799dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x799ddc: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x799ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x799de0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x799de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x799de4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x799de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799de8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x799de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799dec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x799decu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799df0: 0x0  nop
    ctx->pc = 0x799df0u;
    // NOP
    // 0x799df4: 0x450000b9  bc1f        . + 4 + (0xB9 << 2)
    ctx->pc = 0x799DF4u;
    {
        const bool branch_taken_0x799df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DF4u;
        // 0x799df8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799df4) {
            ctx->pc = 0x79A0DCu;
            goto label_79a0dc;
        }
    }
    ctx->pc = 0x799DFCu;
    // 0x799dfc: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x799DFCu;
    {
        const bool branch_taken_0x799dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DFCu;
        // 0x799e00: 0xe4610038  swc1        $f1, 0x38($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799dfc) {
            ctx->pc = 0x79A0B8u;
            goto label_79a0b8;
        }
    }
    ctx->pc = 0x799E04u;
label_799e04:
    // 0x799e04: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x799e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x799e08: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x799e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x799e0c: 0x24519b70  addiu       $s1, $v0, -0x6490
    ctx->pc = 0x799e0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x799e10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e14: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x799e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e1c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x799e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x799e20: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x799e24: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799E24u;
    SET_GPR_U32(ctx, 31, 0x799E2Cu);
    ctx->pc = 0x799E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E24u;
    // 0x799e28: 0x8e900090  lw          $s0, 0x90($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799E24u, 0x799E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E2Cu;
label_799e2c:
    // 0x799e2c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x799e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x799e30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x799e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799e34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799E34u;
    {
        const bool branch_taken_0x799e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E34u;
        // 0x799e38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e34) {
            ctx->pc = 0x799E4Cu;
            goto label_799e4c;
        }
    }
    ctx->pc = 0x799E3Cu;
    // 0x799e3c: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799E3Cu;
    SET_GPR_U32(ctx, 31, 0x799E44u);
    ctx->pc = 0x799E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E3Cu;
    // 0x799e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799E3Cu, 0x799E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E44u;
label_799e44:
    // 0x799e44: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x799e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x799e48: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_799e4c:
    // 0x799e4c: 0x8e830094  lw          $v1, 0x94($s4)
    ctx->pc = 0x799e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x799e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799e58: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x799e5c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x799e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x799e60: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x799e64: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799E64u;
    SET_GPR_U32(ctx, 31, 0x799E6Cu);
    ctx->pc = 0x799E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E64u;
    // 0x799e68: 0x8e900094  lw          $s0, 0x94($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799E64u, 0x799E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E6Cu;
label_799e6c:
    // 0x799e6c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x799e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x799e70: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x799e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799e74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799E74u;
    {
        const bool branch_taken_0x799e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e74) {
            ctx->pc = 0x799E8Cu;
            goto label_799e8c;
        }
    }
    ctx->pc = 0x799E7Cu;
    // 0x799e7c: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799E7Cu;
    SET_GPR_U32(ctx, 31, 0x799E84u);
    ctx->pc = 0x799E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E7Cu;
    // 0x799e80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799E7Cu, 0x799E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799E84u;
label_799e84:
    // 0x799e84: 0x8e830094  lw          $v1, 0x94($s4)
    ctx->pc = 0x799e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x799e88: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_799e8c:
    // 0x799e8c: 0x8e830098  lw          $v1, 0x98($s4)
    ctx->pc = 0x799e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x799e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799e98: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x799e9c: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x799e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x799ea0: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x799ea4: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799EA4u;
    SET_GPR_U32(ctx, 31, 0x799EACu);
    ctx->pc = 0x799EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EA4u;
    // 0x799ea8: 0x8e900098  lw          $s0, 0x98($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799EA4u, 0x799EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EACu;
label_799eac:
    // 0x799eac: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x799eb0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x799eb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799eb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799EB4u;
    {
        const bool branch_taken_0x799eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EB4u;
        // 0x799eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799eb4) {
            ctx->pc = 0x799ECCu;
            goto label_799ecc;
        }
    }
    ctx->pc = 0x799EBCu;
    // 0x799ebc: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799EBCu;
    SET_GPR_U32(ctx, 31, 0x799EC4u);
    ctx->pc = 0x799EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EBCu;
    // 0x799ec0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799EBCu, 0x799EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC4u;
label_799ec4:
    // 0x799ec4: 0x8e830098  lw          $v1, 0x98($s4)
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x799ec8: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_799ecc:
    // 0x799ecc: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x799eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x799ed0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ed4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799ed8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x799ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x799edc: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x799edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x799ee0: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x799ee4: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799EE4u;
    SET_GPR_U32(ctx, 31, 0x799EECu);
    ctx->pc = 0x799EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EE4u;
    // 0x799ee8: 0x8e90009c  lw          $s0, 0x9C($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799EE4u, 0x799EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EECu;
label_799eec:
    // 0x799eec: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x799eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x799ef0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x799ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x799ef4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799EF4u;
    {
        const bool branch_taken_0x799ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799EF4u;
        // 0x799ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ef4) {
            ctx->pc = 0x799F0Cu;
            goto label_799f0c;
        }
    }
    ctx->pc = 0x799EFCu;
    // 0x799efc: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799EFCu;
    SET_GPR_U32(ctx, 31, 0x799F04u);
    ctx->pc = 0x799F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EFCu;
    // 0x799f00: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799EFCu, 0x799F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F04u;
label_799f04:
    // 0x799f04: 0x8e83009c  lw          $v1, 0x9C($s4)
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x799f08: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x799f08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
label_799f0c:
    // 0x799f0c: 0x8e900090  lw          $s0, 0x90($s4)
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x799f10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f14: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799F14u;
    SET_GPR_U32(ctx, 31, 0x799F1Cu);
    ctx->pc = 0x799F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F14u;
    // 0x799f18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799F14u, 0x799F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F1Cu;
label_799f1c:
    // 0x799f1c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x799f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x799f20: 0x1462006e  bne         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x799F20u;
    {
        const bool branch_taken_0x799f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x799F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F20u;
        // 0x799f24: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f20) {
            ctx->pc = 0x79A0DCu;
            goto label_79a0dc;
        }
    }
    ctx->pc = 0x799F28u;
    // 0x799f28: 0x8e900094  lw          $s0, 0x94($s4)
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x799f2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f30: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799F30u;
    SET_GPR_U32(ctx, 31, 0x799F38u);
    ctx->pc = 0x799F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F30u;
    // 0x799f34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799F30u, 0x799F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F38u;
label_799f38:
    // 0x799f38: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x799f3c: 0x14620067  bne         $v1, $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x799F3Cu;
    {
        const bool branch_taken_0x799f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x799F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F3Cu;
        // 0x799f40: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f3c) {
            ctx->pc = 0x79A0DCu;
            goto label_79a0dc;
        }
    }
    ctx->pc = 0x799F44u;
    // 0x799f44: 0x8e900098  lw          $s0, 0x98($s4)
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x799f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f4c: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799F4Cu;
    SET_GPR_U32(ctx, 31, 0x799F54u);
    ctx->pc = 0x799F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F4Cu;
    // 0x799f50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799F4Cu, 0x799F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F54u;
label_799f54:
    // 0x799f54: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x799f58: 0x14620060  bne         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x799F58u;
    {
        const bool branch_taken_0x799f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x799F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F58u;
        // 0x799f5c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f58) {
            ctx->pc = 0x79A0DCu;
            goto label_79a0dc;
        }
    }
    ctx->pc = 0x799F60u;
    // 0x799f60: 0x8e90009c  lw          $s0, 0x9C($s4)
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x799f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f68: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799F68u;
    SET_GPR_U32(ctx, 31, 0x799F70u);
    ctx->pc = 0x799F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F68u;
    // 0x799f6c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799F68u, 0x799F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F70u;
label_799f70:
    // 0x799f70: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x799f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x799f74: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x799F74u;
    {
        const bool branch_taken_0x799f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x799F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F74u;
        // 0x799f78: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f74) {
            ctx->pc = 0x79A0DCu;
            goto label_79a0dc;
        }
    }
    ctx->pc = 0x799F7Cu;
    // 0x799f7c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x799F7Cu;
    {
        const bool branch_taken_0x799f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F7Cu;
        // 0x799f80: 0x96820002  lhu         $v0, 0x2($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f7c) {
            ctx->pc = 0x79A0BCu;
            goto label_79a0bc;
        }
    }
    ctx->pc = 0x799F84u;
label_799f84:
    // 0x799f84: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x799f84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x799f88: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f8c: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x799f90: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799F90u;
    SET_GPR_U32(ctx, 31, 0x799F98u);
    ctx->pc = 0x799F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F90u;
    // 0x799f94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799F90u, 0x799F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F98u;
label_799f98:
    // 0x799f98: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fa0: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799FA0u;
    SET_GPR_U32(ctx, 31, 0x799FA8u);
    ctx->pc = 0x799FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FA0u;
    // 0x799fa4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799FA0u, 0x799FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA8u;
label_799fa8:
    // 0x799fa8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x799fa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fb0: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799FB0u;
    SET_GPR_U32(ctx, 31, 0x799FB8u);
    ctx->pc = 0x799FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FB0u;
    // 0x799fb4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799FB0u, 0x799FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FB8u;
label_799fb8:
    // 0x799fb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fc0: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799FC0u;
    SET_GPR_U32(ctx, 31, 0x799FC8u);
    ctx->pc = 0x799FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FC0u;
    // 0x799fc4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799FC0u, 0x799FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC8u;
label_799fc8:
    // 0x799fc8: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x799fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fd0: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x799fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x799fd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799fd8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x799fdc: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799FDCu;
    SET_GPR_U32(ctx, 31, 0x799FE4u);
    ctx->pc = 0x799FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FDCu;
    // 0x799fe0: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799FDCu, 0x799FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FE4u;
label_799fe4:
    // 0x799fe4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x799fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fec: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799FECu;
    SET_GPR_U32(ctx, 31, 0x799FF4u);
    ctx->pc = 0x799FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FECu;
    // 0x799ff0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799FECu, 0x799FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF4u;
label_799ff4:
    // 0x799ff4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x799ff4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ffc: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x799FFCu;
    SET_GPR_U32(ctx, 31, 0x79A004u);
    ctx->pc = 0x79A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FFCu;
    // 0x79a000: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x799FFCu, 0x79A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A004u;
label_79a004:
    // 0x79a004: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a004u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a00c: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A00Cu;
    SET_GPR_U32(ctx, 31, 0x79A014u);
    ctx->pc = 0x79A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A00Cu;
    // 0x79a010: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A00Cu, 0x79A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A014u;
label_79a014:
    // 0x79a014: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x79a014u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a018: 0x0  nop
    ctx->pc = 0x79a018u;
    // NOP
    // 0x79a01c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x79a01cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x79a020: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x79a020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x79a024: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79a024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79a028: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x79a028u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a02c: 0x0  nop
    ctx->pc = 0x79a02cu;
    // NOP
    // 0x79a030: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79a030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79a034: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79a034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x79a038: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79a038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79a03c: 0x44921800  mtc1        $s2, $f3
    ctx->pc = 0x79a03cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a040: 0x0  nop
    ctx->pc = 0x79a040u;
    // NOP
    // 0x79a044: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x79a044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x79a048: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x79a04c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a050: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x79a050u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x79a054: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x79a054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a058: 0x0  nop
    ctx->pc = 0x79a058u;
    // NOP
    // 0x79a05c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x79a05cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x79a060: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x79a060u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x79a064: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79a064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x79a068: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x79a068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x79a06c: 0x44951000  mtc1        $s5, $f2
    ctx->pc = 0x79a06cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a070: 0x0  nop
    ctx->pc = 0x79a070u;
    // NOP
    // 0x79a074: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x79a074u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x79a078: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x79a078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x79a07c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79a07cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79a080: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x79a080u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x79a084: 0xc1e6f16  jal         func_79BC58
    ctx->pc = 0x79A084u;
    SET_GPR_U32(ctx, 31, 0x79A08Cu);
    ctx->pc = 0x79A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A084u;
    // 0x79a088: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BC58u, 0x79A084u, 0x79A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A08Cu;
label_79a08c:
    // 0x79a08c: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x79a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x79a090: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x79a090u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x79a094: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x79a094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x79a098: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a09c: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x79a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x79a0a0: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x79a0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x79a0a4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x79a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x79a0a8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x79a0a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79a0ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79A0ACu;
    {
        const bool branch_taken_0x79a0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0ACu;
        // 0x79a0b0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0ac) {
            ctx->pc = 0x79A0DCu;
            goto label_79a0dc;
        }
    }
    ctx->pc = 0x79A0B4u;
    // 0x79a0b4: 0xac750084  sw          $s5, 0x84($v1)
    ctx->pc = 0x79a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 21));
label_79a0b8:
    // 0x79a0b8: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x79a0b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_79a0bc:
    // 0x79a0bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a0c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79A0C0u;
    {
        const bool branch_taken_0x79a0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0C0u;
        // 0x79a0c4: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0c0) {
            ctx->pc = 0x79A0D8u;
            goto label_79a0d8;
        }
    }
    ctx->pc = 0x79A0C8u;
label_79a0c8:
    // 0x79a0c8: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x79a0c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79a0cc: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x79a0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a0d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a0d4: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x79a0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_79a0d8:
    // 0x79a0d8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_79a0dc:
    // 0x79a0dc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x79a0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x79a0e0: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x79a0e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x79a0e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79a0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79a0e8: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x79A0E8u;
    {
        const bool branch_taken_0x79a0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0E8u;
        // 0x79a0ec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0e8) {
            ctx->pc = 0x79A2A8u;
            goto label_79a2a8;
        }
    }
    ctx->pc = 0x79A0F0u;
    // 0x79a0f0: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x79a0f4: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x79A0F4u;
    {
        const bool branch_taken_0x79a0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0F4u;
        // 0x79a0f8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0f4) {
            ctx->pc = 0x79A2ACu;
            goto label_79a2ac;
        }
    }
    ctx->pc = 0x79A0FCu;
    // 0x79a0fc: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x79A0FCu;
    {
        const bool branch_taken_0x79a0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0FCu;
        // 0x79a100: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0fc) {
            ctx->pc = 0x79A2ACu;
            goto label_79a2ac;
        }
    }
    ctx->pc = 0x79A104u;
    // 0x79a104: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x79a108: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79a108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a10c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79a10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79a110: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79a110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a114: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79a114u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a118: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79a118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79a11c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79A11Cu;
    SET_GPR_U32(ctx, 31, 0x79A124u);
    ctx->pc = 0x79A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A11Cu;
    // 0x79a120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79A11Cu, 0x79A124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A124u;
label_79a124:
    // 0x79a124: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x79a124u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x79a128: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a12c: 0x26319b70  addiu       $s1, $s1, -0x6490
    ctx->pc = 0x79a12cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941552));
    // 0x79a130: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A130u;
    SET_GPR_U32(ctx, 31, 0x79A138u);
    ctx->pc = 0x79A134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A130u;
    // 0x79a134: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A130u, 0x79A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A138u;
label_79a138:
    // 0x79a138: 0x8e830090  lw          $v1, 0x90($s4)
    ctx->pc = 0x79a138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 144)));
    // 0x79a13c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a140: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79a140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79a144: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A144u;
    SET_GPR_U32(ctx, 31, 0x79A14Cu);
    ctx->pc = 0x79A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A144u;
    // 0x79a148: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A144u, 0x79A14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A14Cu;
label_79a14c:
    // 0x79a14c: 0x8e830094  lw          $v1, 0x94($s4)
    ctx->pc = 0x79a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x79a150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a154: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x79a154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79a158: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A158u;
    SET_GPR_U32(ctx, 31, 0x79A160u);
    ctx->pc = 0x79A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A158u;
    // 0x79a15c: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A158u, 0x79A160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A160u;
label_79a160:
    // 0x79a160: 0x8e830098  lw          $v1, 0x98($s4)
    ctx->pc = 0x79a160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x79a164: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a168: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79a168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79a16c: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A16Cu;
    SET_GPR_U32(ctx, 31, 0x79A174u);
    ctx->pc = 0x79A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A16Cu;
    // 0x79a170: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A16Cu, 0x79A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A174u;
label_79a174:
    // 0x79a174: 0x8e86009c  lw          $a2, 0x9C($s4)
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x79a178: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a17c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a180: 0xacc20084  sw          $v0, 0x84($a2)
    ctx->pc = 0x79a180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 2));
    // 0x79a184: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x79a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x79a188: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x79a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x79a18c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x79a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a190: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A190u;
    SET_GPR_U32(ctx, 31, 0x79A198u);
    ctx->pc = 0x79A194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A190u;
    // 0x79a194: 0xe4600038  swc1        $f0, 0x38($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A190u, 0x79A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A198u;
label_79a198:
    // 0x79a198: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1a0: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A1A0u;
    SET_GPR_U32(ctx, 31, 0x79A1A8u);
    ctx->pc = 0x79A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1A0u;
    // 0x79a1a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A1A0u, 0x79A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1A8u;
label_79a1a8:
    // 0x79a1a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x79a1a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1b0: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A1B0u;
    SET_GPR_U32(ctx, 31, 0x79A1B8u);
    ctx->pc = 0x79A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1B0u;
    // 0x79a1b4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A1B0u, 0x79A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1B8u;
label_79a1b8:
    // 0x79a1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1c0: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A1C0u;
    SET_GPR_U32(ctx, 31, 0x79A1C8u);
    ctx->pc = 0x79A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1C0u;
    // 0x79a1c4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A1C0u, 0x79A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1C8u;
label_79a1c8:
    // 0x79a1c8: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x79a1c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x79a1cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1d0: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x79a1d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a1d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x79a1dc: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A1DCu;
    SET_GPR_U32(ctx, 31, 0x79A1E4u);
    ctx->pc = 0x79A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1DCu;
    // 0x79a1e0: 0x3055ffff  andi        $s5, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A1DCu, 0x79A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E4u;
label_79a1e4:
    // 0x79a1e4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x79a1e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1ec: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A1ECu;
    SET_GPR_U32(ctx, 31, 0x79A1F4u);
    ctx->pc = 0x79A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1ECu;
    // 0x79a1f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A1ECu, 0x79A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1F4u;
label_79a1f4:
    // 0x79a1f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79a1f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1fc: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A1FCu;
    SET_GPR_U32(ctx, 31, 0x79A204u);
    ctx->pc = 0x79A200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1FCu;
    // 0x79a200: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A1FCu, 0x79A204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A204u;
label_79a204:
    // 0x79a204: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a208: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79a208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a20c: 0xc07f160  jal         func_1FC580
    ctx->pc = 0x79A20Cu;
    SET_GPR_U32(ctx, 31, 0x79A214u);
    ctx->pc = 0x79A210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A20Cu;
    // 0x79a210: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC580u, 0x79A20Cu, 0x79A214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A214u;
label_79a214:
    // 0x79a214: 0x44901000  mtc1        $s0, $f2
    ctx->pc = 0x79a214u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a218: 0x0  nop
    ctx->pc = 0x79a218u;
    // NOP
    // 0x79a21c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x79a21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x79a220: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x79a220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x79a224: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x79a224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x79a228: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x79a228u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a22c: 0x0  nop
    ctx->pc = 0x79a22cu;
    // NOP
    // 0x79a230: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79a230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79a234: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x79a234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x79a238: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x79a238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x79a23c: 0x44921800  mtc1        $s2, $f3
    ctx->pc = 0x79a23cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79a240: 0x0  nop
    ctx->pc = 0x79a240u;
    // NOP
    // 0x79a244: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x79a244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x79a248: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x79a248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x79a24c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a24cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a250: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x79a250u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x79a254: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x79a254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79a258: 0x0  nop
    ctx->pc = 0x79a258u;
    // NOP
    // 0x79a25c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x79a25cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x79a260: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x79a260u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x79a264: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79a264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x79a268: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x79a268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x79a26c: 0x44951000  mtc1        $s5, $f2
    ctx->pc = 0x79a26cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79a270: 0x0  nop
    ctx->pc = 0x79a270u;
    // NOP
    // 0x79a274: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x79a274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x79a278: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x79a278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x79a27c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x79a27cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x79a280: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x79a280u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x79a284: 0xc1e6f16  jal         func_79BC58
    ctx->pc = 0x79A284u;
    SET_GPR_U32(ctx, 31, 0x79A28Cu);
    ctx->pc = 0x79A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A284u;
    // 0x79a288: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BC58u, 0x79A284u, 0x79A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A28Cu;
label_79a28c:
    // 0x79a28c: 0x8e83008c  lw          $v1, 0x8C($s4)
    ctx->pc = 0x79a28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
    // 0x79a290: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x79a290u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x79a294: 0xac750084  sw          $s5, 0x84($v1)
    ctx->pc = 0x79a294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 21));
    // 0x79a298: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x79a298u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x79a29c: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x79a29cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x79a2a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a2a4: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x79a2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_79a2a8:
    // 0x79a2a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79a2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79a2ac:
    // 0x79a2ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79a2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a2b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x79a2b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a2b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x79a2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a2b8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79a2b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a2bc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x79a2bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a2c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x79A2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A2C4u;
        // 0x79a2c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A2CCu;
    // 0x79a2cc: 0x0  nop
    ctx->pc = 0x79a2ccu;
    // NOP
    ctx->pc = 0x79a2d0u;
}
} // namespace gh_r022
