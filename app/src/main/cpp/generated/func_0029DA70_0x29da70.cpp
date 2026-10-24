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

// Function: func_0029DA70
// Address: 0x29da70 - 0x29e2c0
void func_0029DA70_0x29da70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0029DA70_0x29da70");
#endif

    switch (ctx->pc) {
        case 0x29dad0u: goto label_29dad0;
        case 0x29daf8u: goto label_29daf8;
        case 0x29db08u: goto label_29db08;
        case 0x29db20u: goto label_29db20;
        case 0x29db38u: goto label_29db38;
        case 0x29db78u: goto label_29db78;
        case 0x29db94u: goto label_29db94;
        case 0x29dba4u: goto label_29dba4;
        case 0x29dbd8u: goto label_29dbd8;
        case 0x29dc00u: goto label_29dc00;
        case 0x29dc10u: goto label_29dc10;
        case 0x29dc40u: goto label_29dc40;
        case 0x29dc94u: goto label_29dc94;
        case 0x29dca4u: goto label_29dca4;
        case 0x29dcd8u: goto label_29dcd8;
        case 0x29dd00u: goto label_29dd00;
        case 0x29dd1cu: goto label_29dd1c;
        case 0x29dd58u: goto label_29dd58;
        case 0x29dd8cu: goto label_29dd8c;
        case 0x29ddd0u: goto label_29ddd0;
        case 0x29de00u: goto label_29de00;
        case 0x29de1cu: goto label_29de1c;
        case 0x29de2cu: goto label_29de2c;
        case 0x29de3cu: goto label_29de3c;
        case 0x29de7cu: goto label_29de7c;
        case 0x29dedcu: goto label_29dedc;
        case 0x29df18u: goto label_29df18;
        case 0x29df40u: goto label_29df40;
        case 0x29df5cu: goto label_29df5c;
        case 0x29df98u: goto label_29df98;
        case 0x29dfccu: goto label_29dfcc;
        case 0x29e010u: goto label_29e010;
        case 0x29e040u: goto label_29e040;
        case 0x29e05cu: goto label_29e05c;
        case 0x29e06cu: goto label_29e06c;
        case 0x29e07cu: goto label_29e07c;
        case 0x29e0c0u: goto label_29e0c0;
        case 0x29e120u: goto label_29e120;
        case 0x29e158u: goto label_29e158;
        case 0x29e180u: goto label_29e180;
        case 0x29e19cu: goto label_29e19c;
        case 0x29e1d8u: goto label_29e1d8;
        case 0x29e20cu: goto label_29e20c;
        case 0x29e250u: goto label_29e250;
        default: break;
    }

    ctx->pc = 0x29da70u;

    // 0x29da70: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x29da70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x29da74: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x29da74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x29da78: 0x8c6276b0  lw          $v0, 0x76B0($v1)
    ctx->pc = 0x29da78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x29da7c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x29da7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x29da80: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x29da80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x29da84: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x29da84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da88: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x29da88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x29da8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29da90: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x29da90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x29da94: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x29da94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x29da98: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x29da98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x29da9c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x29da9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x29daa0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x29daa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x29daa4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x29daa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x29daa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29daa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29daac: 0x24110e00  addiu       $s1, $zero, 0xE00
    ctx->pc = 0x29daacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x29dab0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x29dab0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dab4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x29dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29dab8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dabc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x29dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x29dac0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29dac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29dac4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x29dac4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x29dac8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DAC8u;
    SET_GPR_U32(ctx, 31, 0x29DAD0u);
    ctx->pc = 0x29DACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DAC8u;
    // 0x29dacc: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DAC8u, 0x29DAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DAD0u;
label_29dad0:
    // 0x29dad0: 0x3c10005a  lui         $s0, 0x5A
    ctx->pc = 0x29dad0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
    // 0x29dad4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x29dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x29dad8: 0x26100780  addiu       $s0, $s0, 0x780
    ctx->pc = 0x29dad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1920));
    // 0x29dadc: 0x34844208  ori         $a0, $a0, 0x4208
    ctx->pc = 0x29dadcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16904);
    // 0x29dae0: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x29dae0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x29dae4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29dae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dae8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29dae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29daec: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x29daecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x29daf0: 0xc0a8bb4  jal         func_2A2ED0
    ctx->pc = 0x29DAF0u;
    SET_GPR_U32(ctx, 31, 0x29DAF8u);
    ctx->pc = 0x29DAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DAF0u;
    // 0x29daf4: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2ED0u, 0x29DAF0u, 0x29DAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DAF8u;
label_29daf8:
    // 0x29daf8: 0x118942  srl         $s1, $s1, 5
    ctx->pc = 0x29daf8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 5));
    // 0x29dafc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db00: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29DB00u;
    SET_GPR_U32(ctx, 31, 0x29DB08u);
    ctx->pc = 0x29DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB00u;
    // 0x29db04: 0x3c13003c  lui         $s3, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29DB00u, 0x29DB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB08u;
label_29db08:
    // 0x29db08: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x29db08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29db0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29db0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29db10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29db14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db18: 0xc0a66e8  jal         func_299BA0
    ctx->pc = 0x29DB18u;
    SET_GPR_U32(ctx, 31, 0x29DB20u);
    ctx->pc = 0x29DB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB18u;
    // 0x29db1c: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299BA0u, 0x29DB18u, 0x29DB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB20u;
label_29db20:
    // 0x29db20: 0x17803c  dsll32      $s0, $s7, 0
    ctx->pc = 0x29db20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) << (32 + 0));
    // 0x29db24: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x29db24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x29db28: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x29db28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x29db2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29db2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db30: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29DB30u;
    SET_GPR_U32(ctx, 31, 0x29DB38u);
    ctx->pc = 0x29DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB30u;
    // 0x29db34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29DB30u, 0x29DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB38u;
label_29db38:
    // 0x29db38: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x29db38u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    // 0x29db3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x29db3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x29db40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29db40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29db44: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x29db44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x29db48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29db48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29db4c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x29db4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x29db50: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29db54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29db58: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x29db58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x29db5c: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x29db5cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x29db60: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x29db60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x29db64: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x29db64u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db68: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x29db68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db6c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29db6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29db70: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DB70u;
    SET_GPR_U32(ctx, 31, 0x29DB78u);
    ctx->pc = 0x29DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB70u;
    // 0x29db74: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DB70u, 0x29DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB78u;
label_29db78:
    // 0x29db78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29db78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29db7c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29db7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db80: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x29db80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x29db84: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x29db84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x29db88: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x29db88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x29db8c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DB8Cu;
    SET_GPR_U32(ctx, 31, 0x29DB94u);
    ctx->pc = 0x29DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB8Cu;
    // 0x29db90: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DB8Cu, 0x29DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DB94u;
label_29db94:
    // 0x29db94: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x29db94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x29db98: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29db98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29db9c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DB9Cu;
    SET_GPR_U32(ctx, 31, 0x29DBA4u);
    ctx->pc = 0x29DBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DB9Cu;
    // 0x29dba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DB9Cu, 0x29DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBA4u;
label_29dba4:
    // 0x29dba4: 0x8e671180  lw          $a3, 0x1180($s3)
    ctx->pc = 0x29dba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29dba8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x29dba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29dbac: 0x6323c  dsll32      $a2, $a2, 8
    ctx->pc = 0x29dbacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 8));
    // 0x29dbb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbb4: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29dbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29dbb8: 0x247182a  slt         $v1, $s2, $a3
    ctx->pc = 0x29dbb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x29dbbc: 0x24e2003f  addiu       $v0, $a3, 0x3F
    ctx->pc = 0x29dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x29dbc0: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x29dbc0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x29dbc4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29dbc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29dbc8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29dbcc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x29dbccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x29dbd0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DBD0u;
    SET_GPR_U32(ctx, 31, 0x29DBD8u);
    ctx->pc = 0x29DBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DBD0u;
    // 0x29dbd4: 0x2263025  or          $a2, $s1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DBD0u, 0x29DBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DBD8u;
label_29dbd8:
    // 0x29dbd8: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x29dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29dbdc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dbe0: 0x8fc6118c  lw          $a2, 0x118C($fp)
    ctx->pc = 0x29dbe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4492)));
    // 0x29dbe4: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29dbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29dbe8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29dbec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29dbecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29dbf0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29dbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29dbf4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29dbf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29dbf8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DBF8u;
    SET_GPR_U32(ctx, 31, 0x29DC00u);
    ctx->pc = 0x29DBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DBF8u;
    // 0x29dbfc: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DBF8u, 0x29DC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC00u;
label_29dc00:
    // 0x29dc00: 0x24060089  addiu       $a2, $zero, 0x89
    ctx->pc = 0x29dc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x29dc04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc08: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DC08u;
    SET_GPR_U32(ctx, 31, 0x29DC10u);
    ctx->pc = 0x29DC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC08u;
    // 0x29dc0c: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DC08u, 0x29DC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC10u;
label_29dc10:
    // 0x29dc10: 0x8fc6118c  lw          $a2, 0x118C($fp)
    ctx->pc = 0x29dc10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4492)));
    // 0x29dc14: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29dc18: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x29dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29dc1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc20: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29dc20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29dc24: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29dc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29dc28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29dc2c: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29dc2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29dc30: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29dc30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29dc34: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29dc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29dc38: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DC38u;
    SET_GPR_U32(ctx, 31, 0x29DC40u);
    ctx->pc = 0x29DC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC38u;
    // 0x29dc3c: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DC38u, 0x29DC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC40u;
label_29dc40:
    // 0x29dc40: 0x8ea41188  lw          $a0, 0x1188($s5)
    ctx->pc = 0x29dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4488)));
    // 0x29dc44: 0x3c0625b0  lui         $a2, 0x25B0
    ctx->pc = 0x29dc44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)9648 << 16));
    // 0x29dc48: 0x8e8511b8  lw          $a1, 0x11B8($s4)
    ctx->pc = 0x29dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4536)));
    // 0x29dc4c: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x29dc4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x29dc50: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x29dc50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29dc54: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29dc58: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29dc58u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29dc5c: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29dc5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29dc60: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29dc60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29dc64: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x29dc64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x29dc68: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29dc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29dc6c: 0x3406800e  ori         $a2, $zero, 0x800E
    ctx->pc = 0x29dc6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29dc70: 0x635b8  dsll        $a2, $a2, 22
    ctx->pc = 0x29dc70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 22);
    // 0x29dc74: 0x34c68c00  ori         $a2, $a2, 0x8C00
    ctx->pc = 0x29dc74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)35840);
    // 0x29dc78: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x29dc78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x29dc7c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x29dc7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x29dc80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc84: 0x2058025  or          $s0, $s0, $a1
    ctx->pc = 0x29dc84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x29dc88: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29dc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29dc8c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DC8Cu;
    SET_GPR_U32(ctx, 31, 0x29DC94u);
    ctx->pc = 0x29DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC8Cu;
    // 0x29dc90: 0x2063025  or          $a2, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DC8Cu, 0x29DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DC94u;
label_29dc94:
    // 0x29dc94: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dc98: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29dc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29dc9c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DC9Cu;
    SET_GPR_U32(ctx, 31, 0x29DCA4u);
    ctx->pc = 0x29DCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DC9Cu;
    // 0x29dca0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DC9Cu, 0x29DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DCA4u;
label_29dca4:
    // 0x29dca4: 0x8e631180  lw          $v1, 0x1180($s3)
    ctx->pc = 0x29dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29dca8: 0x243902a  slt         $s2, $s2, $v1
    ctx->pc = 0x29dca8u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29dcac: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29dcb0: 0x72100b  movn        $v0, $v1, $s2
    ctx->pc = 0x29dcb0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29dcb4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29dcb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29dcb8: 0x1840004e  blez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x29DCB8u;
    {
        const bool branch_taken_0x29dcb8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DCB8u;
        // 0x29dcbc: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dcb8) {
            ctx->pc = 0x29DDF4u;
            goto label_29ddf4;
        }
    }
    ctx->pc = 0x29DCC0u;
    // 0x29dcc0: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x29dcc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcc4: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x29dcc4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x29dcc8: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x29dcc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29dccc: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x29dcccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x29dcd0: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x29dcd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29dcd4: 0x8e82118c  lw          $v0, 0x118C($s4)
    ctx->pc = 0x29dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4492)));
label_29dcd8:
    // 0x29dcd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29dcd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcdc: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x29dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x29dce0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29dce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29dce4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29dce8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29dce8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29dcec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29dcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29dcf0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dcf4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29dcf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29dcf8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DCF8u;
    SET_GPR_U32(ctx, 31, 0x29DD00u);
    ctx->pc = 0x29DCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DCF8u;
    // 0x29dcfc: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DCF8u, 0x29DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD00u;
label_29dd00:
    // 0x29dd00: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x29dd00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x29dd04: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29dd04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29dd08: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29dd08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29dd0c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd10: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29dd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29dd14: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DD14u;
    SET_GPR_U32(ctx, 31, 0x29DD1Cu);
    ctx->pc = 0x29DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD14u;
    // 0x29dd18: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DD14u, 0x29DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD1Cu;
label_29dd1c:
    // 0x29dd1c: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x29dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29dd20: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29dd20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29dd24: 0x8e666b80  lw          $a2, 0x6B80($s3)
    ctx->pc = 0x29dd24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27520)));
    // 0x29dd28: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd2c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29dd30: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29dd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29dd34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29dd38: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29dd38u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29dd3c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29dd3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29dd40: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29dd40u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29dd44: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29dd44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29dd48: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29dd48u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29dd4c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29dd4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29dd50: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DD50u;
    SET_GPR_U32(ctx, 31, 0x29DD58u);
    ctx->pc = 0x29DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD50u;
    // 0x29dd54: 0xd23025  or          $a2, $a2, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DD50u, 0x29DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD58u;
label_29dd58:
    // 0x29dd58: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29dd5c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29dd60: 0x8c461194  lw          $a2, 0x1194($v0)
    ctx->pc = 0x29dd60u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C1194u));
    // 0x29dd64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29dd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29dd68: 0x8c831188  lw          $v1, 0x1188($a0)
    ctx->pc = 0x29dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1188u));
    // 0x29dd6c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29dd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29dd70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd74: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29dd74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29dd78: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29dd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29dd7c: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x29dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x29dd80: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29dd80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29dd84: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DD84u;
    SET_GPR_U32(ctx, 31, 0x29DD8Cu);
    ctx->pc = 0x29DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DD84u;
    // 0x29dd88: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DD84u, 0x29DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DD8Cu;
label_29dd8c:
    // 0x29dd8c: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x29dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29dd90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dd94: 0x8e666b80  lw          $a2, 0x6B80($s3)
    ctx->pc = 0x29dd94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 27520)));
    // 0x29dd98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29dd98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29dd9c: 0x8e87118c  lw          $a3, 0x118C($s4)
    ctx->pc = 0x29dd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4492)));
    // 0x29dda0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29dda4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29dda8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29dda8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29ddac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29ddacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29ddb0: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29ddb4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ddb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ddb8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29ddbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29ddc0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ddc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ddc4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29ddc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29ddc8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DDC8u;
    SET_GPR_U32(ctx, 31, 0x29DDD0u);
    ctx->pc = 0x29DDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDC8u;
    // 0x29ddcc: 0xd23025  or          $a2, $a2, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DDC8u, 0x29DDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DDD0u;
label_29ddd0:
    // 0x29ddd0: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x29ddd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x29ddd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ddd8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29ddd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29dddc: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29dde0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29dde0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29dde4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29dde4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29dde8: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x29dde8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29ddec: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x29DDECu;
    {
        const bool branch_taken_0x29ddec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DDECu;
        // 0x29ddf0: 0x8e82118c  lw          $v0, 0x118C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddec) {
            ctx->pc = 0x29DCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29dcd8;
        }
    }
    ctx->pc = 0x29DDF4u;
label_29ddf4:
    // 0x29ddf4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ddf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ddf8: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29DDF8u;
    SET_GPR_U32(ctx, 31, 0x29DE00u);
    ctx->pc = 0x29DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DDF8u;
    // 0x29ddfc: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29DDF8u, 0x29DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE00u;
label_29de00:
    // 0x29de00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29de00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de04: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x29de04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x29de08: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29de08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29de0c: 0x24460780  addiu       $a2, $v0, 0x780
    ctx->pc = 0x29de0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x29de10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29de10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de14: 0xc0a66e8  jal         func_299BA0
    ctx->pc = 0x29DE14u;
    SET_GPR_U32(ctx, 31, 0x29DE1Cu);
    ctx->pc = 0x29DE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE14u;
    // 0x29de18: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299BA0u, 0x29DE14u, 0x29DE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE1Cu;
label_29de1c:
    // 0x29de1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29de1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29de20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de24: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29DE24u;
    SET_GPR_U32(ctx, 31, 0x29DE2Cu);
    ctx->pc = 0x29DE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE24u;
    // 0x29de28: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29DE24u, 0x29DE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE2Cu;
label_29de2c:
    // 0x29de2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29de2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de30: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x29de30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x29de34: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DE34u;
    SET_GPR_U32(ctx, 31, 0x29DE3Cu);
    ctx->pc = 0x29DE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE34u;
    // 0x29de38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DE34u, 0x29DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE3Cu;
label_29de3c:
    // 0x29de3c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29de3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29de40: 0x3c07807f  lui         $a3, 0x807F
    ctx->pc = 0x29de40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32895 << 16));
    // 0x29de44: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x29de44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x29de48: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x29de48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x29de4c: 0x8c831180  lw          $v1, 0x1180($a0)
    ctx->pc = 0x29de4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4480)));
    // 0x29de50: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29de50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29de54: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29de54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29de58: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x29de58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29de5c: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x29de5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29de60: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x29de60u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29de64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29de64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29de68: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29de68u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29de6c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29de6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29de70: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29de70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29de74: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DE74u;
    SET_GPR_U32(ctx, 31, 0x29DE7Cu);
    ctx->pc = 0x29DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DE74u;
    // 0x29de78: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DE74u, 0x29DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DE7Cu;
label_29de7c:
    // 0x29de7c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29de80: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x29de80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29de84: 0x8c641188  lw          $a0, 0x1188($v1)
    ctx->pc = 0x29de84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C1188u));
    // 0x29de88: 0x3c0725b0  lui         $a3, 0x25B0
    ctx->pc = 0x29de88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9648 << 16));
    // 0x29de8c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29de90: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x29de90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29de94: 0x8c6511b8  lw          $a1, 0x11B8($v1)
    ctx->pc = 0x29de94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4536)));
    // 0x29de98: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29de98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29de9c: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29de9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29dea0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29dea0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29dea4: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29dea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29dea8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29dea8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29deac: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29deacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29deb0: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29deb4: 0x3403800e  ori         $v1, $zero, 0x800E
    ctx->pc = 0x29deb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29deb8: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x29deb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x29debc: 0x34638c00  ori         $v1, $v1, 0x8C00
    ctx->pc = 0x29debcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35840);
    // 0x29dec0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x29dec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x29dec4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29dec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29dec8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29decc: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29deccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29ded0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29ded0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29ded4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DED4u;
    SET_GPR_U32(ctx, 31, 0x29DEDCu);
    ctx->pc = 0x29DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DED4u;
    // 0x29ded8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DED4u, 0x29DEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DEDCu;
label_29dedc:
    // 0x29dedc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29dedcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29dee0: 0x8c831180  lw          $v1, 0x1180($a0)
    ctx->pc = 0x29dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29dee4: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29dee4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29dee8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29deec: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29deecu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29def0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29def0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29def4: 0x1840004f  blez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x29DEF4u;
    {
        const bool branch_taken_0x29def4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DEF4u;
        // 0x29def8: 0x3c15003c  lui         $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29def4) {
            ctx->pc = 0x29E034u;
            goto label_29e034;
        }
    }
    ctx->pc = 0x29DEFCu;
    // 0x29defc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29defcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df00: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x29df00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x29df04: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x29df04u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29df08: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x29df08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x29df0c: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x29df0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29df10: 0x8ea2118c  lw          $v0, 0x118C($s5)
    ctx->pc = 0x29df10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29df14: 0x0  nop
    ctx->pc = 0x29df14u;
    // NOP
label_29df18:
    // 0x29df18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29df18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df1c: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x29df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x29df20: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29df20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29df24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29df24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29df28: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29df28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29df2c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29df2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29df30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df34: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29df34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29df38: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DF38u;
    SET_GPR_U32(ctx, 31, 0x29DF40u);
    ctx->pc = 0x29DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DF38u;
    // 0x29df3c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DF38u, 0x29DF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF40u;
label_29df40:
    // 0x29df40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29df40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29df44: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29df44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29df48: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29df48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29df4c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29df4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df50: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29df50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29df54: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DF54u;
    SET_GPR_U32(ctx, 31, 0x29DF5Cu);
    ctx->pc = 0x29DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DF54u;
    // 0x29df58: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DF54u, 0x29DF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF5Cu;
label_29df5c:
    // 0x29df5c: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29df60: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29df60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29df64: 0x8e866b80  lw          $a2, 0x6B80($s4)
    ctx->pc = 0x29df64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27520)));
    // 0x29df68: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29df68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df6c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29df70: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29df70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29df74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29df74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29df78: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29df78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29df7c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29df7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29df80: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29df80u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29df84: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29df84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29df88: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29df88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29df8c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29df8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29df90: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DF90u;
    SET_GPR_U32(ctx, 31, 0x29DF98u);
    ctx->pc = 0x29DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DF90u;
    // 0x29df94: 0xd33025  or          $a2, $a2, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DF90u, 0x29DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DF98u;
label_29df98:
    // 0x29df98: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29df98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29df9c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29dfa0: 0x8c461194  lw          $a2, 0x1194($v0)
    ctx->pc = 0x29dfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C1194u));
    // 0x29dfa4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29dfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29dfa8: 0x8c831188  lw          $v1, 0x1188($a0)
    ctx->pc = 0x29dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1188u));
    // 0x29dfac: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29dfacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29dfb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfb4: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29dfb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29dfb8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29dfbc: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x29dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x29dfc0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29dfc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29dfc4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DFC4u;
    SET_GPR_U32(ctx, 31, 0x29DFCCu);
    ctx->pc = 0x29DFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DFC4u;
    // 0x29dfc8: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DFC4u, 0x29DFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DFCCu;
label_29dfcc:
    // 0x29dfcc: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x29dfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29dfd0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29dfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29dfd4: 0x8e866b80  lw          $a2, 0x6B80($s4)
    ctx->pc = 0x29dfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27520)));
    // 0x29dfd8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29dfdc: 0x8ea7118c  lw          $a3, 0x118C($s5)
    ctx->pc = 0x29dfdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29dfe0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29dfe4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29dfe8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29dfe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29dfec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29dfecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29dff0: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29dff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29dff4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29dff4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29dff8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29dff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29dffc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e000: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e000u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e004: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29e004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29e008: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E008u;
    SET_GPR_U32(ctx, 31, 0x29E010u);
    ctx->pc = 0x29E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E008u;
    // 0x29e00c: 0xd33025  or          $a2, $a2, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E008u, 0x29E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E010u;
label_29e010:
    // 0x29e010: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x29e010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29e014: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29e014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29e018: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29e018u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29e01c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29e020: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29e020u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29e024: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29e024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29e028: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29e028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29e02c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x29E02Cu;
    {
        const bool branch_taken_0x29e02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E02Cu;
        // 0x29e030: 0x8ea2118c  lw          $v0, 0x118C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e02c) {
            ctx->pc = 0x29DF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29df18;
        }
    }
    ctx->pc = 0x29E034u;
label_29e034:
    // 0x29e034: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e038: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29E038u;
    SET_GPR_U32(ctx, 31, 0x29E040u);
    ctx->pc = 0x29E03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E038u;
    // 0x29e03c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29E038u, 0x29E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E040u;
label_29e040:
    // 0x29e040: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29e040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e044: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x29e044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x29e048: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x29e048u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29e04c: 0x24460780  addiu       $a2, $v0, 0x780
    ctx->pc = 0x29e04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x29e050: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e054: 0xc0a66e8  jal         func_299BA0
    ctx->pc = 0x29E054u;
    SET_GPR_U32(ctx, 31, 0x29E05Cu);
    ctx->pc = 0x29E058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E054u;
    // 0x29e058: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299BA0u, 0x29E054u, 0x29E05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E05Cu;
label_29e05c:
    // 0x29e05c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e060: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e064: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29E064u;
    SET_GPR_U32(ctx, 31, 0x29E06Cu);
    ctx->pc = 0x29E068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E064u;
    // 0x29e068: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29E064u, 0x29E06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E06Cu;
label_29e06c:
    // 0x29e06c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e070: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x29e070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x29e074: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E074u;
    SET_GPR_U32(ctx, 31, 0x29E07Cu);
    ctx->pc = 0x29E078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E074u;
    // 0x29e078: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E074u, 0x29E07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E07Cu;
label_29e07c:
    // 0x29e07c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29e080: 0x3407ff00  ori         $a3, $zero, 0xFF00
    ctx->pc = 0x29e080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x29e084: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x29e084u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x29e088: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x29e088u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x29e08c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29e08cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29e090: 0x8c831180  lw          $v1, 0x1180($a0)
    ctx->pc = 0x29e090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4480)));
    // 0x29e094: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29e094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29e098: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e09c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x29e09cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29e0a0: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x29e0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29e0a4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x29e0a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29e0a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e0ac: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29e0acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29e0b0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e0b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e0b4: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29e0b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29e0b8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E0B8u;
    SET_GPR_U32(ctx, 31, 0x29E0C0u);
    ctx->pc = 0x29E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E0B8u;
    // 0x29e0bc: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E0B8u, 0x29E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0C0u;
label_29e0c0:
    // 0x29e0c0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29e0c4: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x29e0c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e0c8: 0x8c641188  lw          $a0, 0x1188($v1)
    ctx->pc = 0x29e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C1188u));
    // 0x29e0cc: 0x3c0725b0  lui         $a3, 0x25B0
    ctx->pc = 0x29e0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9648 << 16));
    // 0x29e0d0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29e0d4: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x29e0d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29e0d8: 0x8c6511b8  lw          $a1, 0x11B8($v1)
    ctx->pc = 0x29e0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4536)));
    // 0x29e0dc: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29e0e0: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29e0e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29e0e4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29e0e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29e0e8: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29e0e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29e0ec: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29e0ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29e0f0: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29e0f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29e0f4: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29e0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29e0f8: 0x3403800e  ori         $v1, $zero, 0x800E
    ctx->pc = 0x29e0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29e0fc: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x29e0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x29e100: 0x34638c00  ori         $v1, $v1, 0x8C00
    ctx->pc = 0x29e100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35840);
    // 0x29e104: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x29e104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x29e108: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29e108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29e10c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e110: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29e110u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29e114: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29e114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29e118: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E118u;
    SET_GPR_U32(ctx, 31, 0x29E120u);
    ctx->pc = 0x29E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E118u;
    // 0x29e11c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E118u, 0x29E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E120u;
label_29e120:
    // 0x29e120: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29e120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29e124: 0x8c831180  lw          $v1, 0x1180($a0)
    ctx->pc = 0x29e124u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29e128: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29e128u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29e12c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29e130: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29e130u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29e134: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29e134u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29e138: 0x1840004e  blez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x29E138u;
    {
        const bool branch_taken_0x29e138 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E138u;
        // 0x29e13c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e138) {
            ctx->pc = 0x29E274u;
            goto label_29e274;
        }
    }
    ctx->pc = 0x29E140u;
    // 0x29e140: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x29e140u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x29e144: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x29e144u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x29e148: 0x3412ffff  ori         $s2, $zero, 0xFFFF
    ctx->pc = 0x29e148u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29e14c: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x29e14cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x29e150: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x29e150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29e154: 0x8ea2118c  lw          $v0, 0x118C($s5)
    ctx->pc = 0x29e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
label_29e158:
    // 0x29e158: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29e158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e15c: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x29e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x29e160: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e164: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29e164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29e168: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29e168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29e16c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29e16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29e170: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e174: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29e174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29e178: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E178u;
    SET_GPR_U32(ctx, 31, 0x29E180u);
    ctx->pc = 0x29E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E178u;
    // 0x29e17c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E178u, 0x29E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E180u;
label_29e180:
    // 0x29e180: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29e180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29e184: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29e184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29e188: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29e188u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29e18c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e190: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29e190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e194: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E194u;
    SET_GPR_U32(ctx, 31, 0x29E19Cu);
    ctx->pc = 0x29E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E194u;
    // 0x29e198: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E194u, 0x29E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E19Cu;
label_29e19c:
    // 0x29e19c: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x29e19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29e1a0: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29e1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29e1a4: 0x8e866b80  lw          $a2, 0x6B80($s4)
    ctx->pc = 0x29e1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27520)));
    // 0x29e1a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1ac: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29e1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29e1b0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29e1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29e1b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29e1b8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29e1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29e1bc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29e1bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29e1c0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29e1c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29e1c4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e1c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e1c8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29e1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29e1cc: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29e1ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29e1d0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E1D0u;
    SET_GPR_U32(ctx, 31, 0x29E1D8u);
    ctx->pc = 0x29E1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E1D0u;
    // 0x29e1d4: 0xd23025  or          $a2, $a2, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E1D0u, 0x29E1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E1D8u;
label_29e1d8:
    // 0x29e1d8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29e1dc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29e1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29e1e0: 0x8c461194  lw          $a2, 0x1194($v0)
    ctx->pc = 0x29e1e0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C1194u));
    // 0x29e1e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29e1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29e1e8: 0x8c831188  lw          $v1, 0x1188($a0)
    ctx->pc = 0x29e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1188u));
    // 0x29e1ec: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29e1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29e1f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1f4: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29e1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29e1f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e1fc: 0x24630009  addiu       $v1, $v1, 0x9
    ctx->pc = 0x29e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x29e200: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e204: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E204u;
    SET_GPR_U32(ctx, 31, 0x29E20Cu);
    ctx->pc = 0x29E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E204u;
    // 0x29e208: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E204u, 0x29E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E20Cu;
label_29e20c:
    // 0x29e20c: 0x8e631180  lw          $v1, 0x1180($s3)
    ctx->pc = 0x29e20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29e210: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29e210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e214: 0x8e866b80  lw          $a2, 0x6B80($s4)
    ctx->pc = 0x29e214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 27520)));
    // 0x29e218: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29e218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29e21c: 0x8ea7118c  lw          $a3, 0x118C($s5)
    ctx->pc = 0x29e21cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29e220: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29e220u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29e224: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29e224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e228: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29e228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29e22c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29e22cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29e230: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29e230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29e234: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29e234u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29e238: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29e238u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29e23c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29e23cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29e240: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29e240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29e244: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29e244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29e248: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29E248u;
    SET_GPR_U32(ctx, 31, 0x29E250u);
    ctx->pc = 0x29E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E248u;
    // 0x29e24c: 0xd23025  or          $a2, $a2, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29E248u, 0x29E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E250u;
label_29e250:
    // 0x29e250: 0x8e641180  lw          $a0, 0x1180($s3)
    ctx->pc = 0x29e250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
    // 0x29e254: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29e254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29e258: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29e258u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29e25c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29e260: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29e260u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29e264: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29e264u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29e268: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29e268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29e26c: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x29E26Cu;
    {
        const bool branch_taken_0x29e26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E26Cu;
        // 0x29e270: 0x8ea2118c  lw          $v0, 0x118C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e26c) {
            ctx->pc = 0x29E158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e158;
        }
    }
    ctx->pc = 0x29E274u;
label_29e274:
    // 0x29e274: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29e274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x29e278: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x29e278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29e27c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x29e27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x29e280: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x29e280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29e284: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29e284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x29e288: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x29e288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e28c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29e28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29e290: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x29e290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e294: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x29e294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e298: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x29e298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e29c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x29e29cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e2a0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x29e2a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e2a4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x29e2a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e2a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29e2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e2ac: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x29e2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x29e2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x29E2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E2B0u;
        // 0x29e2b4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E2B8u;
    // 0x29e2b8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x29e2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x29e2bc: 0x0  nop
    ctx->pc = 0x29e2bcu;
    // NOP
    ctx->pc = 0x29e2c0u;
}
