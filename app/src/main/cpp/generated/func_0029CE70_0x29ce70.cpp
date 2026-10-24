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

// Function: func_0029CE70
// Address: 0x29ce70 - 0x29da70
void func_0029CE70_0x29ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0029CE70_0x29ce70");
#endif

    switch (ctx->pc) {
        case 0x29ced0u: goto label_29ced0;
        case 0x29cee0u: goto label_29cee0;
        case 0x29cf30u: goto label_29cf30;
        case 0x29cf78u: goto label_29cf78;
        case 0x29cfa8u: goto label_29cfa8;
        case 0x29d000u: goto label_29d000;
        case 0x29d018u: goto label_29d018;
        case 0x29d048u: goto label_29d048;
        case 0x29d078u: goto label_29d078;
        case 0x29d090u: goto label_29d090;
        case 0x29d0ccu: goto label_29d0cc;
        case 0x29d0f8u: goto label_29d0f8;
        case 0x29d140u: goto label_29d140;
        case 0x29d1a0u: goto label_29d1a0;
        case 0x29d1b0u: goto label_29d1b0;
        case 0x29d1c8u: goto label_29d1c8;
        case 0x29d1dcu: goto label_29d1dc;
        case 0x29d1ecu: goto label_29d1ec;
        case 0x29d220u: goto label_29d220;
        case 0x29d24cu: goto label_29d24c;
        case 0x29d25cu: goto label_29d25c;
        case 0x29d290u: goto label_29d290;
        case 0x29d2ecu: goto label_29d2ec;
        case 0x29d2fcu: goto label_29d2fc;
        case 0x29d338u: goto label_29d338;
        case 0x29d360u: goto label_29d360;
        case 0x29d38cu: goto label_29d38c;
        case 0x29d3c8u: goto label_29d3c8;
        case 0x29d40cu: goto label_29d40c;
        case 0x29d450u: goto label_29d450;
        case 0x29d480u: goto label_29d480;
        case 0x29d49cu: goto label_29d49c;
        case 0x29d4acu: goto label_29d4ac;
        case 0x29d4bcu: goto label_29d4bc;
        case 0x29d4f8u: goto label_29d4f8;
        case 0x29d524u: goto label_29d524;
        case 0x29d534u: goto label_29d534;
        case 0x29d568u: goto label_29d568;
        case 0x29d5c4u: goto label_29d5c4;
        case 0x29d5d4u: goto label_29d5d4;
        case 0x29d610u: goto label_29d610;
        case 0x29d638u: goto label_29d638;
        case 0x29d664u: goto label_29d664;
        case 0x29d6a0u: goto label_29d6a0;
        case 0x29d6e4u: goto label_29d6e4;
        case 0x29d728u: goto label_29d728;
        case 0x29d758u: goto label_29d758;
        case 0x29d774u: goto label_29d774;
        case 0x29d784u: goto label_29d784;
        case 0x29d794u: goto label_29d794;
        case 0x29d7d4u: goto label_29d7d4;
        case 0x29d800u: goto label_29d800;
        case 0x29d810u: goto label_29d810;
        case 0x29d844u: goto label_29d844;
        case 0x29d8a0u: goto label_29d8a0;
        case 0x29d8b0u: goto label_29d8b0;
        case 0x29d8f0u: goto label_29d8f0;
        case 0x29d918u: goto label_29d918;
        case 0x29d944u: goto label_29d944;
        case 0x29d980u: goto label_29d980;
        case 0x29d9c4u: goto label_29d9c4;
        case 0x29da08u: goto label_29da08;
        default: break;
    }

    ctx->pc = 0x29ce70u;

    // 0x29ce70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x29ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29ce74: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x29ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29ce78: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x29ce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x29ce7c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29ce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29ce80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29ce80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ce84: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x29ce84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x29ce88: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x29ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x29ce8c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x29ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29ce90: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x29ce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x29ce94: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x29ce94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x29ce98: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29ce98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29ce9c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x29ce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x29cea0: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x29cea0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x29cea4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x29cea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x29cea8: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x29cea8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x29ceac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x29ceacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x29ceb0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x29ceb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ceb4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x29ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x29ceb8: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x29ceb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x29cebc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29cebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29cec0: 0x241e0e00  addiu       $fp, $zero, 0xE00
    ctx->pc = 0x29cec0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x29cec4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x29cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x29cec8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CEC8u;
    SET_GPR_U32(ctx, 31, 0x29CED0u);
    ctx->pc = 0x29CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CEC8u;
    // 0x29cecc: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CEC8u, 0x29CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CED0u;
label_29ced0:
    // 0x29ced0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29ced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ced4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ced4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ced8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CED8u;
    SET_GPR_U32(ctx, 31, 0x29CEE0u);
    ctx->pc = 0x29CEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CED8u;
    // 0x29cedc: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CED8u, 0x29CEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEE0u;
label_29cee0:
    // 0x29cee0: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x29cee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29cee4: 0x3405fffc  ori         $a1, $zero, 0xFFFC
    ctx->pc = 0x29cee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x29cee8: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x29cee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x29ceec: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x29ceecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x29cef0: 0x52ab8  dsll        $a1, $a1, 10
    ctx->pc = 0x29cef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 10);
    // 0x29cef4: 0x8e0611ac  lw          $a2, 0x11AC($s0)
    ctx->pc = 0x29cef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4524)));
    // 0x29cef8: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x29cef8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29cefc: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29cefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29cf00: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29cf00u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29cf04: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x29cf04u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29cf08: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29cf08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29cf0c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29cf0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29cf10: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29cf10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29cf14: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29cf14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29cf18: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29cf18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29cf1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf20: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29cf20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29cf24: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x29cf24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x29cf28: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CF28u;
    SET_GPR_U32(ctx, 31, 0x29CF30u);
    ctx->pc = 0x29CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF28u;
    // 0x29cf2c: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CF28u, 0x29CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF30u;
label_29cf30:
    // 0x29cf30: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29cf30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29cf34: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x29cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29cf38: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x29cf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29cf3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf40: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29cf40u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29cf44: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29cf44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29cf48: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29cf4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29cf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29cf50: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29cf50u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29cf54: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x29cf54u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x29cf58: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29cf58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29cf5c: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x29cf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x29cf60: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29cf60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29cf64: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x29cf64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x29cf68: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29cf68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29cf6c: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x29cf6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x29cf70: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CF70u;
    SET_GPR_U32(ctx, 31, 0x29CF78u);
    ctx->pc = 0x29CF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF70u;
    // 0x29cf74: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CF70u, 0x29CF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF78u;
label_29cf78:
    // 0x29cf78: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29cf78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29cf7c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29cf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29cf80: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29cf84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cf88: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x29cf88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x29cf8c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29cf90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29cf94: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29cf94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29cf98: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29cf98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29cf9c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29cfa0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CFA0u;
    SET_GPR_U32(ctx, 31, 0x29CFA8u);
    ctx->pc = 0x29CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFA0u;
    // 0x29cfa4: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CFA0u, 0x29CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFA8u;
label_29cfa8:
    // 0x29cfa8: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x29cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29cfac: 0x3c052420  lui         $a1, 0x2420
    ctx->pc = 0x29cfacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)9248 << 16));
    // 0x29cfb0: 0x8e2211b8  lw          $v0, 0x11B8($s1)
    ctx->pc = 0x29cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4536)));
    // 0x29cfb4: 0x34078100  ori         $a3, $zero, 0x8100
    ctx->pc = 0x29cfb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x29cfb8: 0x73ef8  dsll        $a3, $a3, 27
    ctx->pc = 0x29cfb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 27);
    // 0x29cfbc: 0x34e7c000  ori         $a3, $a3, 0xC000
    ctx->pc = 0x29cfbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)49152);
    // 0x29cfc0: 0x73d38  dsll        $a3, $a3, 20
    ctx->pc = 0x29cfc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x29cfc4: 0x264182a  slt         $v1, $s3, $a0
    ctx->pc = 0x29cfc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29cfc8: 0x2486003f  addiu       $a2, $a0, 0x3F
    ctx->pc = 0x29cfc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29cfcc: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x29cfccu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x29cfd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x29cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x29cfd4: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29cfd4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29cfd8: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x29cfd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x29cfdc: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x29cfdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x29cfe0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x29cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x29cfe4: 0x3c63025  or          $a2, $fp, $a2
    ctx->pc = 0x29cfe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | GPR_U64(ctx, 6));
    // 0x29cfe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cfec: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29cfecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29cff0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29cff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29cff4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x29cff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x29cff8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29CFF8u;
    SET_GPR_U32(ctx, 31, 0x29D000u);
    ctx->pc = 0x29CFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFF8u;
    // 0x29cffc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29CFF8u, 0x29D000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D000u;
label_29d000:
    // 0x29d000: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d004: 0x34069d00  ori         $a2, $zero, 0x9D00
    ctx->pc = 0x29d004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40192);
    // 0x29d008: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x29d008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x29d00c: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x29d00cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x29d010: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D010u;
    SET_GPR_U32(ctx, 31, 0x29D018u);
    ctx->pc = 0x29D014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D010u;
    // 0x29d014: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D010u, 0x29D018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D018u;
label_29d018:
    // 0x29d018: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x29d018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29d01c: 0x263982a  slt         $s3, $s3, $v1
    ctx->pc = 0x29d01cu;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29d020: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29d020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29d024: 0x73100b  movn        $v0, $v1, $s3
    ctx->pc = 0x29d024u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29d028: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29d028u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29d02c: 0x1840004d  blez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x29D02Cu;
    {
        const bool branch_taken_0x29d02c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D02Cu;
        // 0x29d030: 0x2413003f  addiu       $s3, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d02c) {
            ctx->pc = 0x29D164u;
            goto label_29d164;
        }
    }
    ctx->pc = 0x29D034u;
    // 0x29d034: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x29d034u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x29d038: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x29d038u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29d03c: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x29d03cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x29d040: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29d040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29d044: 0x0  nop
    ctx->pc = 0x29d044u;
    // NOP
label_29d048:
    // 0x29d048: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29d048u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d04c: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x29d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x29d050: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29d050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29d054: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x29d054u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x29d058: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x29d058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29d05c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29d05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29d060: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d064: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29d064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29d068: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29d068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29d06c: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29d06cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29d070: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D070u;
    SET_GPR_U32(ctx, 31, 0x29D078u);
    ctx->pc = 0x29D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D070u;
    // 0x29d074: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D070u, 0x29D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D078u;
label_29d078:
    // 0x29d078: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x29d078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x29d07c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29d07cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29d080: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29d080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29d084: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d088: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D088u;
    SET_GPR_U32(ctx, 31, 0x29D090u);
    ctx->pc = 0x29D08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D088u;
    // 0x29d08c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D088u, 0x29D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D090u;
label_29d090:
    // 0x29d090: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29d090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29d094: 0x24070808  addiu       $a3, $zero, 0x808
    ctx->pc = 0x29d094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x29d098: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29d098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29d09c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d0a0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29d0a4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29d0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29d0a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d0ac: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d0acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d0b0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29d0b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29d0b4: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29d0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29d0b8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d0b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d0bc: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29d0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29d0c0: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29d0c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29d0c4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D0C4u;
    SET_GPR_U32(ctx, 31, 0x29D0CCu);
    ctx->pc = 0x29D0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D0C4u;
    // 0x29d0c8: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D0C4u, 0x29D0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D0CCu;
label_29d0cc:
    // 0x29d0cc: 0x8e06118c  lw          $a2, 0x118C($s0)
    ctx->pc = 0x29d0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29d0d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d0d4: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29d0d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29d0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d0dc: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x29d0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x29d0e0: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29d0e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29d0e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29d0e8: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x29d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x29d0ec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d0ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d0f0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D0F0u;
    SET_GPR_U32(ctx, 31, 0x29D0F8u);
    ctx->pc = 0x29D0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D0F0u;
    // 0x29d0f4: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D0F0u, 0x29D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D0F8u;
label_29d0f8:
    // 0x29d0f8: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x29d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29d0fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d100: 0x8e07118c  lw          $a3, 0x118C($s0)
    ctx->pc = 0x29d100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
    // 0x29d104: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29d104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29d108: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29d108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29d10c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29d110: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29d110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29d114: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29d114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29d118: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29d118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29d11c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29d11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29d120: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29d120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29d124: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d124u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d128: 0x24630808  addiu       $v1, $v1, 0x808
    ctx->pc = 0x29d128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2056));
    // 0x29d12c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29d130: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d134: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29d134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29d138: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D138u;
    SET_GPR_U32(ctx, 31, 0x29D140u);
    ctx->pc = 0x29D13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D138u;
    // 0x29d13c: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D138u, 0x29D140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D140u;
label_29d140:
    // 0x29d140: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x29d140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29d144: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29d144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29d148: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29d148u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29d14c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29d14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29d150: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29d150u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29d154: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29d154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29d158: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29d158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29d15c: 0x5440ffba  bnel        $v0, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x29D15Cu;
    {
        const bool branch_taken_0x29d15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d15c) {
            ctx->pc = 0x29D160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D15Cu;
            // 0x29d160: 0x8e06118c  lw          $a2, 0x118C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4492)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d048;
        }
    }
    ctx->pc = 0x29D164u;
label_29d164:
    // 0x29d164: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x29d164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29d168: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x29d168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x29d16c: 0x282a821  addu        $s5, $s4, $v0
    ctx->pc = 0x29d16cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29d170: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x29d170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x29d174: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x29d174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x29d178: 0x24710780  addiu       $s1, $v1, 0x780
    ctx->pc = 0x29d178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1920));
    // 0x29d17c: 0x348441a4  ori         $a0, $a0, 0x41A4
    ctx->pc = 0x29d17cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16804);
    // 0x29d180: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x29d180u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x29d184: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29d184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29d188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29d188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d18c: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x29d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x29d190: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29d190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d194: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x29d194u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x29d198: 0xc0a8bb4  jal         func_2A2ED0
    ctx->pc = 0x29D198u;
    SET_GPR_U32(ctx, 31, 0x29D1A0u);
    ctx->pc = 0x29D19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D198u;
    // 0x29d19c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2ED0u, 0x29D198u, 0x29D1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1A0u;
label_29d1a0:
    // 0x29d1a0: 0x1e8142  srl         $s0, $fp, 5
    ctx->pc = 0x29d1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 30), 5));
    // 0x29d1a4: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x29d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x29d1a8: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29D1A8u;
    SET_GPR_U32(ctx, 31, 0x29D1B0u);
    ctx->pc = 0x29D1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1A8u;
    // 0x29d1ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29D1A8u, 0x29D1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1B0u;
label_29d1b0:
    // 0x29d1b0: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x29d1b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29d1b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29d1b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1b8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29d1b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1c0: 0xc0a66e8  jal         func_299BA0
    ctx->pc = 0x29D1C0u;
    SET_GPR_U32(ctx, 31, 0x29D1C8u);
    ctx->pc = 0x29D1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1C0u;
    // 0x29d1c4: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299BA0u, 0x29D1C0u, 0x29D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1C8u;
label_29d1c8:
    // 0x29d1c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29d1c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d1d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1d4: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29D1D4u;
    SET_GPR_U32(ctx, 31, 0x29D1DCu);
    ctx->pc = 0x29D1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1D4u;
    // 0x29d1d8: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29D1D4u, 0x29D1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1DCu;
label_29d1dc:
    // 0x29d1dc: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x29d1dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x29d1e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1e4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D1E4u;
    SET_GPR_U32(ctx, 31, 0x29D1ECu);
    ctx->pc = 0x29D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D1E4u;
    // 0x29d1e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D1E4u, 0x29D1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1ECu;
label_29d1ec:
    // 0x29d1ec: 0x8ee71180  lw          $a3, 0x1180($s7)
    ctx->pc = 0x29d1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d1f0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x29d1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29d1f4: 0x6323c  dsll32      $a2, $a2, 8
    ctx->pc = 0x29d1f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 8));
    // 0x29d1f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d1fc: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29d1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29d200: 0x247182a  slt         $v1, $s2, $a3
    ctx->pc = 0x29d200u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x29d204: 0x24e2003f  addiu       $v0, $a3, 0x3F
    ctx->pc = 0x29d204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x29d208: 0xe3100b  movn        $v0, $a3, $v1
    ctx->pc = 0x29d208u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x29d20c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29d20cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29d210: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29d210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29d214: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x29d214u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x29d218: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D218u;
    SET_GPR_U32(ctx, 31, 0x29D220u);
    ctx->pc = 0x29D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D218u;
    // 0x29d21c: 0x2063025  or          $a2, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D218u, 0x29D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D220u;
label_29d220:
    // 0x29d220: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29d220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29d224: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d228: 0x8c66118c  lw          $a2, 0x118C($v1)
    ctx->pc = 0x29d228u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29d22c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d230: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d234: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29d234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29d238: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29d238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29d23c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29d23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29d240: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29d240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29d244: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D244u;
    SET_GPR_U32(ctx, 31, 0x29D24Cu);
    ctx->pc = 0x29D248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D244u;
    // 0x29d248: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D244u, 0x29D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D24Cu;
label_29d24c:
    // 0x29d24c: 0x24060089  addiu       $a2, $zero, 0x89
    ctx->pc = 0x29d24cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x29d250: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d254: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D254u;
    SET_GPR_U32(ctx, 31, 0x29D25Cu);
    ctx->pc = 0x29D258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D254u;
    // 0x29d258: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D254u, 0x29D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D25Cu;
label_29d25c:
    // 0x29d25c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29d260: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29d260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29d264: 0x8c46118c  lw          $a2, 0x118C($v0)
    ctx->pc = 0x29d264u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29d268: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d26c: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d270: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29d270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29d274: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29d274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29d278: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d27c: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29d27cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29d280: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29d280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29d284: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29d284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29d288: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D288u;
    SET_GPR_U32(ctx, 31, 0x29D290u);
    ctx->pc = 0x29D28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D288u;
    // 0x29d28c: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D288u, 0x29D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D290u;
label_29d290:
    // 0x29d290: 0x8ee41180  lw          $a0, 0x1180($s7)
    ctx->pc = 0x29d290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d294: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29d294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29d298: 0x8c6511b8  lw          $a1, 0x11B8($v1)
    ctx->pc = 0x29d298u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29d29c: 0x3c0725b0  lui         $a3, 0x25B0
    ctx->pc = 0x29d29cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9648 << 16));
    // 0x29d2a0: 0x244182a  slt         $v1, $s2, $a0
    ctx->pc = 0x29d2a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29d2a4: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29d2a8: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29d2a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29d2ac: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29d2acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29d2b0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29d2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29d2b4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29d2b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29d2b8: 0x9c6611ac  lwu         $a2, 0x11AC($v1)
    ctx->pc = 0x29d2b8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4524)));
    // 0x29d2bc: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29d2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29d2c0: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29d2c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29d2c4: 0x3408800e  ori         $t0, $zero, 0x800E
    ctx->pc = 0x29d2c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29d2c8: 0x845b8  dsll        $t0, $t0, 22
    ctx->pc = 0x29d2c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 22);
    // 0x29d2cc: 0x35088c00  ori         $t0, $t0, 0x8C00
    ctx->pc = 0x29d2ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35840);
    // 0x29d2d0: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x29d2d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x29d2d4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29d2d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29d2d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2dc: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29d2dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29d2e0: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x29d2e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29d2e4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D2E4u;
    SET_GPR_U32(ctx, 31, 0x29D2ECu);
    ctx->pc = 0x29D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2E4u;
    // 0x29d2e8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D2E4u, 0x29D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2ECu;
label_29d2ec:
    // 0x29d2ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d2f0: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29d2f4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D2F4u;
    SET_GPR_U32(ctx, 31, 0x29D2FCu);
    ctx->pc = 0x29D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D2F4u;
    // 0x29d2f8: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D2F4u, 0x29D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D2FCu;
label_29d2fc:
    // 0x29d2fc: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29d2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d300: 0x243902a  slt         $s2, $s2, $v1
    ctx->pc = 0x29d300u;
    SET_GPR_U64(ctx, 18, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29d304: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29d308: 0x72100b  movn        $v0, $v1, $s2
    ctx->pc = 0x29d308u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29d30c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29d30cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29d310: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x29D310u;
    {
        const bool branch_taken_0x29d310 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29D314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D310u;
        // 0x29d314: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d310) {
            ctx->pc = 0x29D474u;
            goto label_29d474;
        }
    }
    ctx->pc = 0x29D318u;
    // 0x29d318: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x29d318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d31c: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x29d31cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x29d320: 0x3c1e0058  lui         $fp, 0x58
    ctx->pc = 0x29d320u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
    // 0x29d324: 0x3416ffff  ori         $s6, $zero, 0xFFFF
    ctx->pc = 0x29d324u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29d328: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x29d328u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x29d32c: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x29d32cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29d330: 0x8ea2118c  lw          $v0, 0x118C($s5)
    ctx->pc = 0x29d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29d334: 0x0  nop
    ctx->pc = 0x29d334u;
    // NOP
label_29d338:
    // 0x29d338: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29d338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d33c: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x29d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x29d340: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d344: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d348: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29d348u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29d34c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29d34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29d350: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d354: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29d354u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29d358: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D358u;
    SET_GPR_U32(ctx, 31, 0x29D360u);
    ctx->pc = 0x29D35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D358u;
    // 0x29d35c: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D358u, 0x29D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D360u;
label_29d360:
    // 0x29d360: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29d360u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29d364: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x29d364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29d368: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d36c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29d36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d370: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x29d370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x29d374: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d374u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d378: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29d378u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29d37c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29d37cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29d380: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x29d380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x29d384: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D384u;
    SET_GPR_U32(ctx, 31, 0x29D38Cu);
    ctx->pc = 0x29D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D384u;
    // 0x29d388: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D384u, 0x29D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D38Cu;
label_29d38c:
    // 0x29d38c: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x29d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29d390: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29d390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29d394: 0x8fc66b80  lw          $a2, 0x6B80($fp)
    ctx->pc = 0x29d394u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 27520)));
    // 0x29d398: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29d398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29d39c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29d3a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d3a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d3a8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d3ac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29d3acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29d3b0: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29d3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29d3b4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d3b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d3b8: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29d3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29d3bc: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29d3bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29d3c0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D3C0u;
    SET_GPR_U32(ctx, 31, 0x29D3C8u);
    ctx->pc = 0x29D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D3C0u;
    // 0x29d3c4: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D3C0u, 0x29D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D3C8u;
label_29d3c8:
    // 0x29d3c8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29d3cc: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x29d3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29d3d0: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x29d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29d3d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d3d8: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x29d3d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29d3dc: 0x8ea6118c  lw          $a2, 0x118C($s5)
    ctx->pc = 0x29d3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29d3e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29d3e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29d3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d3e8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d3ec: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x29d3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29d3f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d3f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29d3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29d3f8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29d3f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29d3fc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29d3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29d400: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x29d400u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x29d404: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D404u;
    SET_GPR_U32(ctx, 31, 0x29D40Cu);
    ctx->pc = 0x29D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D404u;
    // 0x29d408: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D404u, 0x29D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D40Cu;
label_29d40c:
    // 0x29d40c: 0x8e031180  lw          $v1, 0x1180($s0)
    ctx->pc = 0x29d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29d410: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d414: 0x8fc66b80  lw          $a2, 0x6B80($fp)
    ctx->pc = 0x29d414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 27520)));
    // 0x29d418: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29d418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29d41c: 0x8ea7118c  lw          $a3, 0x118C($s5)
    ctx->pc = 0x29d41cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29d420: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29d420u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29d424: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29d428: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29d428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29d42c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29d42cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29d430: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29d430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29d434: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d434u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d438: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29d438u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29d43c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29d440: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d440u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d444: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29d444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29d448: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D448u;
    SET_GPR_U32(ctx, 31, 0x29D450u);
    ctx->pc = 0x29D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D448u;
    // 0x29d44c: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D448u, 0x29D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D450u;
label_29d450:
    // 0x29d450: 0x8e041180  lw          $a0, 0x1180($s0)
    ctx->pc = 0x29d450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29d454: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29d454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29d458: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29d458u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29d45c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29d460: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29d460u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29d464: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29d464u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29d468: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x29d468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29d46c: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x29D46Cu;
    {
        const bool branch_taken_0x29d46c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D46Cu;
        // 0x29d470: 0x8ea2118c  lw          $v0, 0x118C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d46c) {
            ctx->pc = 0x29D338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d338;
        }
    }
    ctx->pc = 0x29D474u;
label_29d474:
    // 0x29d474: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d478: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29D478u;
    SET_GPR_U32(ctx, 31, 0x29D480u);
    ctx->pc = 0x29D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D478u;
    // 0x29d47c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29D478u, 0x29D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D480u;
label_29d480:
    // 0x29d480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29d480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d484: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x29d484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x29d488: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x29d488u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d48c: 0x24460780  addiu       $a2, $v0, 0x780
    ctx->pc = 0x29d48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x29d490: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d494: 0xc0a66e8  jal         func_299BA0
    ctx->pc = 0x29D494u;
    SET_GPR_U32(ctx, 31, 0x29D49Cu);
    ctx->pc = 0x29D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D494u;
    // 0x29d498: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299BA0u, 0x29D494u, 0x29D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D49Cu;
label_29d49c:
    // 0x29d49c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d4a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d4a4: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29D4A4u;
    SET_GPR_U32(ctx, 31, 0x29D4ACu);
    ctx->pc = 0x29D4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4A4u;
    // 0x29d4a8: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29D4A4u, 0x29D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4ACu;
label_29d4ac:
    // 0x29d4ac: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x29d4acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x29d4b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d4b4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D4B4u;
    SET_GPR_U32(ctx, 31, 0x29D4BCu);
    ctx->pc = 0x29D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4B4u;
    // 0x29d4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D4B4u, 0x29D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4BCu;
label_29d4bc:
    // 0x29d4bc: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d4c0: 0x3c07807f  lui         $a3, 0x807F
    ctx->pc = 0x29d4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32895 << 16));
    // 0x29d4c4: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x29d4c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x29d4c8: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x29d4c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x29d4cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d4d0: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29d4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29d4d4: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x29d4d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29d4d8: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x29d4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29d4dc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x29d4dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29d4e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d4e4: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29d4e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29d4e8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d4ec: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29d4ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29d4f0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D4F0u;
    SET_GPR_U32(ctx, 31, 0x29D4F8u);
    ctx->pc = 0x29D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D4F0u;
    // 0x29d4f4: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D4F0u, 0x29D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D4F8u;
label_29d4f8:
    // 0x29d4f8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29d4fc: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29d4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d500: 0x8c66118c  lw          $a2, 0x118C($v1)
    ctx->pc = 0x29d500u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29d504: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d508: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d50c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29d50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29d510: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29d510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29d514: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29d514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29d518: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29d518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29d51c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D51Cu;
    SET_GPR_U32(ctx, 31, 0x29D524u);
    ctx->pc = 0x29D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D51Cu;
    // 0x29d520: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D51Cu, 0x29D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D524u;
label_29d524:
    // 0x29d524: 0x24060089  addiu       $a2, $zero, 0x89
    ctx->pc = 0x29d524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x29d528: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d52c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D52Cu;
    SET_GPR_U32(ctx, 31, 0x29D534u);
    ctx->pc = 0x29D530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D52Cu;
    // 0x29d530: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D52Cu, 0x29D534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D534u;
label_29d534:
    // 0x29d534: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29d534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29d538: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29d538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29d53c: 0x8c46118c  lw          $a2, 0x118C($v0)
    ctx->pc = 0x29d53cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29d540: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d544: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29d544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d548: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29d548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29d54c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29d54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29d550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d554: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29d554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29d558: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29d558u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29d55c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29d560: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D560u;
    SET_GPR_U32(ctx, 31, 0x29D568u);
    ctx->pc = 0x29D564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D560u;
    // 0x29d564: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D560u, 0x29D568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D568u;
label_29d568:
    // 0x29d568: 0x8ee41180  lw          $a0, 0x1180($s7)
    ctx->pc = 0x29d568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d56c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29d570: 0x8c6511b8  lw          $a1, 0x11B8($v1)
    ctx->pc = 0x29d570u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29d574: 0x3c0725b0  lui         $a3, 0x25B0
    ctx->pc = 0x29d574u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9648 << 16));
    // 0x29d578: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29d578u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29d57c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29d580: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29d580u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29d584: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29d584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29d588: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29d588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29d58c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29d58cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29d590: 0x9c6611ac  lwu         $a2, 0x11AC($v1)
    ctx->pc = 0x29d590u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4524)));
    // 0x29d594: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29d594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29d598: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29d598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29d59c: 0x3408800e  ori         $t0, $zero, 0x800E
    ctx->pc = 0x29d59cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29d5a0: 0x845b8  dsll        $t0, $t0, 22
    ctx->pc = 0x29d5a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 22);
    // 0x29d5a4: 0x35088c00  ori         $t0, $t0, 0x8C00
    ctx->pc = 0x29d5a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35840);
    // 0x29d5a8: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x29d5a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x29d5ac: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29d5acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29d5b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d5b4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29d5b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29d5b8: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x29d5b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29d5bc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D5BCu;
    SET_GPR_U32(ctx, 31, 0x29D5C4u);
    ctx->pc = 0x29D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D5BCu;
    // 0x29d5c0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D5BCu, 0x29D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D5C4u;
label_29d5c4:
    // 0x29d5c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d5c8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29d5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29d5cc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D5CCu;
    SET_GPR_U32(ctx, 31, 0x29D5D4u);
    ctx->pc = 0x29D5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D5CCu;
    // 0x29d5d0: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D5CCu, 0x29D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D5D4u;
label_29d5d4:
    // 0x29d5d4: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d5d8: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29d5d8u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29d5dc: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29d5e0: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29d5e0u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29d5e4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29d5e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29d5e8: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x29D5E8u;
    {
        const bool branch_taken_0x29d5e8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D5E8u;
        // 0x29d5ec: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d5e8) {
            ctx->pc = 0x29D74Cu;
            goto label_29d74c;
        }
    }
    ctx->pc = 0x29D5F0u;
    // 0x29d5f0: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x29d5f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x29d5f4: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x29d5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29d5f8: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x29d5f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d5fc: 0x3c1e0058  lui         $fp, 0x58
    ctx->pc = 0x29d5fcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)88 << 16));
    // 0x29d600: 0x3416ffff  ori         $s6, $zero, 0xFFFF
    ctx->pc = 0x29d600u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29d604: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x29d604u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x29d608: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x29d608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29d60c: 0x8ea2118c  lw          $v0, 0x118C($s5)
    ctx->pc = 0x29d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
label_29d610:
    // 0x29d610: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29d610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d614: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x29d614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x29d618: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d61c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d620: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29d620u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29d624: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29d624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29d628: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d62c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29d62cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29d630: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D630u;
    SET_GPR_U32(ctx, 31, 0x29D638u);
    ctx->pc = 0x29D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D630u;
    // 0x29d634: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D630u, 0x29D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D638u;
label_29d638:
    // 0x29d638: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29d638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29d63c: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x29d63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29d640: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d644: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29d644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d648: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x29d648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x29d64c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d64cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d650: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29d650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29d654: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29d654u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29d658: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x29d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x29d65c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D65Cu;
    SET_GPR_U32(ctx, 31, 0x29D664u);
    ctx->pc = 0x29D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D65Cu;
    // 0x29d660: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D65Cu, 0x29D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D664u;
label_29d664:
    // 0x29d664: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x29d664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29d668: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29d668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29d66c: 0x8fc66b80  lw          $a2, 0x6B80($fp)
    ctx->pc = 0x29d66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 27520)));
    // 0x29d670: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29d670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29d674: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29d674u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29d678: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d67c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d680: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d680u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d684: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29d684u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29d688: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29d688u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29d68c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d68cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d690: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29d690u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29d694: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29d694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29d698: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D698u;
    SET_GPR_U32(ctx, 31, 0x29D6A0u);
    ctx->pc = 0x29D69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D698u;
    // 0x29d69c: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D698u, 0x29D6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6A0u;
label_29d6a0:
    // 0x29d6a0: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x29d6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x29d6a4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x29d6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29d6a8: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x29d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29d6ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6b0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x29d6b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29d6b4: 0x8ea6118c  lw          $a2, 0x118C($s5)
    ctx->pc = 0x29d6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29d6b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29d6bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29d6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d6c0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d6c4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x29d6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29d6c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d6cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29d6d0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29d6d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29d6d4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29d6d8: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x29d6d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x29d6dc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D6DCu;
    SET_GPR_U32(ctx, 31, 0x29D6E4u);
    ctx->pc = 0x29D6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D6DCu;
    // 0x29d6e0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D6DCu, 0x29D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D6E4u;
label_29d6e4:
    // 0x29d6e4: 0x8e031180  lw          $v1, 0x1180($s0)
    ctx->pc = 0x29d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29d6e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d6ec: 0x8fc66b80  lw          $a2, 0x6B80($fp)
    ctx->pc = 0x29d6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 27520)));
    // 0x29d6f0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29d6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29d6f4: 0x8ea7118c  lw          $a3, 0x118C($s5)
    ctx->pc = 0x29d6f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29d6f8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29d6fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29d700: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29d700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29d704: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29d704u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29d708: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29d708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29d70c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d70cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d710: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29d710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29d714: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29d714u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29d718: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d71c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29d71cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29d720: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D720u;
    SET_GPR_U32(ctx, 31, 0x29D728u);
    ctx->pc = 0x29D724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D720u;
    // 0x29d724: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D720u, 0x29D728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D728u;
label_29d728:
    // 0x29d728: 0x8e041180  lw          $a0, 0x1180($s0)
    ctx->pc = 0x29d728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29d72c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29d72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29d730: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29d730u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29d734: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29d734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29d738: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29d738u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29d73c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29d73cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29d740: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29d740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29d744: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x29D744u;
    {
        const bool branch_taken_0x29d744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D744u;
        // 0x29d748: 0x8ea2118c  lw          $v0, 0x118C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d744) {
            ctx->pc = 0x29D610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d610;
        }
    }
    ctx->pc = 0x29D74Cu;
label_29d74c:
    // 0x29d74c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d750: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29D750u;
    SET_GPR_U32(ctx, 31, 0x29D758u);
    ctx->pc = 0x29D754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D750u;
    // 0x29d754: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29D750u, 0x29D758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D758u;
label_29d758:
    // 0x29d758: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29d758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d75c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x29d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x29d760: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x29d760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29d764: 0x24460780  addiu       $a2, $v0, 0x780
    ctx->pc = 0x29d764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x29d768: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d76c: 0xc0a66e8  jal         func_299BA0
    ctx->pc = 0x29D76Cu;
    SET_GPR_U32(ctx, 31, 0x29D774u);
    ctx->pc = 0x29D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D76Cu;
    // 0x29d770: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299BA0u, 0x29D76Cu, 0x29D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D774u;
label_29d774:
    // 0x29d774: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29d778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d77c: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29D77Cu;
    SET_GPR_U32(ctx, 31, 0x29D784u);
    ctx->pc = 0x29D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D77Cu;
    // 0x29d780: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29D77Cu, 0x29D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D784u;
label_29d784:
    // 0x29d784: 0x24060356  addiu       $a2, $zero, 0x356
    ctx->pc = 0x29d784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x29d788: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d78c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D78Cu;
    SET_GPR_U32(ctx, 31, 0x29D794u);
    ctx->pc = 0x29D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D78Cu;
    // 0x29d790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D78Cu, 0x29D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D794u;
label_29d794:
    // 0x29d794: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29d794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d798: 0x3407ff00  ori         $a3, $zero, 0xFF00
    ctx->pc = 0x29d798u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x29d79c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x29d79cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x29d7a0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x29d7a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x29d7a4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x29d7a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x29d7a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d7ac: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29d7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29d7b0: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x29d7b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29d7b4: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x29d7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29d7b8: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x29d7b8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x29d7bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x29d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d7c0: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x29d7c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x29d7c4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d7c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d7c8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29d7c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29d7cc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D7CCu;
    SET_GPR_U32(ctx, 31, 0x29D7D4u);
    ctx->pc = 0x29D7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7CCu;
    // 0x29d7d0: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D7CCu, 0x29D7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D7D4u;
label_29d7d4:
    // 0x29d7d4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29d7d8: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d7dc: 0x8c66118c  lw          $a2, 0x118C($v1)
    ctx->pc = 0x29d7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29d7e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d7e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d7e8: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x29d7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29d7ec: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29d7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29d7f0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29d7f4: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x29d7f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x29d7f8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D7F8u;
    SET_GPR_U32(ctx, 31, 0x29D800u);
    ctx->pc = 0x29D7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D7F8u;
    // 0x29d7fc: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D7F8u, 0x29D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D800u;
label_29d800:
    // 0x29d800: 0x24060089  addiu       $a2, $zero, 0x89
    ctx->pc = 0x29d800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x29d804: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d808: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D808u;
    SET_GPR_U32(ctx, 31, 0x29D810u);
    ctx->pc = 0x29D80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D808u;
    // 0x29d80c: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D808u, 0x29D810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D810u;
label_29d810:
    // 0x29d810: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29d810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29d814: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29d818: 0x8c46118c  lw          $a2, 0x118C($v0)
    ctx->pc = 0x29d818u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29d81c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d820: 0x8ee21180  lw          $v0, 0x1180($s7)
    ctx->pc = 0x29d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d824: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29d824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29d828: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29d828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29d82c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d830: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29d830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29d834: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29d834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29d838: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29d838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29d83c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D83Cu;
    SET_GPR_U32(ctx, 31, 0x29D844u);
    ctx->pc = 0x29D840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D83Cu;
    // 0x29d840: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D83Cu, 0x29D844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D844u;
label_29d844:
    // 0x29d844: 0x8ee41180  lw          $a0, 0x1180($s7)
    ctx->pc = 0x29d844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d848: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29d848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29d84c: 0x8c6511b8  lw          $a1, 0x11B8($v1)
    ctx->pc = 0x29d84cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29d850: 0x3c0725b0  lui         $a3, 0x25B0
    ctx->pc = 0x29d850u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9648 << 16));
    // 0x29d854: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29d854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29d858: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29d858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29d85c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29d85cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29d860: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29d860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29d864: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29d864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29d868: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29d868u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29d86c: 0x9c6611ac  lwu         $a2, 0x11AC($v1)
    ctx->pc = 0x29d86cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4524)));
    // 0x29d870: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29d870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29d874: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29d874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29d878: 0x3408800e  ori         $t0, $zero, 0x800E
    ctx->pc = 0x29d878u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29d87c: 0x845b8  dsll        $t0, $t0, 22
    ctx->pc = 0x29d87cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 22);
    // 0x29d880: 0x35088c00  ori         $t0, $t0, 0x8C00
    ctx->pc = 0x29d880u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35840);
    // 0x29d884: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x29d884u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x29d888: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29d888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29d88c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d890: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29d890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29d894: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x29d894u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29d898: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D898u;
    SET_GPR_U32(ctx, 31, 0x29D8A0u);
    ctx->pc = 0x29D89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D898u;
    // 0x29d89c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D898u, 0x29D8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8A0u;
label_29d8a0:
    // 0x29d8a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d8a4: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x29d8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x29d8a8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D8A8u;
    SET_GPR_U32(ctx, 31, 0x29D8B0u);
    ctx->pc = 0x29D8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8A8u;
    // 0x29d8ac: 0x24060060  addiu       $a2, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D8A8u, 0x29D8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8B0u;
label_29d8b0:
    // 0x29d8b0: 0x8ee31180  lw          $v1, 0x1180($s7)
    ctx->pc = 0x29d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4480)));
    // 0x29d8b4: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29d8b4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29d8b8: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29d8bc: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29d8bcu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29d8c0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29d8c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29d8c4: 0x18400059  blez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x29D8C4u;
    {
        const bool branch_taken_0x29d8c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D8C4u;
        // 0x29d8c8: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d8c4) {
            ctx->pc = 0x29DA2Cu;
            goto label_29da2c;
        }
    }
    ctx->pc = 0x29D8CCu;
    // 0x29d8cc: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x29d8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d8d0: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x29d8d0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x29d8d4: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x29d8d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x29d8d8: 0x3c170058  lui         $s7, 0x58
    ctx->pc = 0x29d8d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)88 << 16));
    // 0x29d8dc: 0x3416ffff  ori         $s6, $zero, 0xFFFF
    ctx->pc = 0x29d8dcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29d8e0: 0x16b03c  dsll32      $s6, $s6, 0
    ctx->pc = 0x29d8e0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 0));
    // 0x29d8e4: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x29d8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29d8e8: 0x8ea2118c  lw          $v0, 0x118C($s5)
    ctx->pc = 0x29d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29d8ec: 0x0  nop
    ctx->pc = 0x29d8ecu;
    // NOP
label_29d8f0:
    // 0x29d8f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29d8f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d8f4: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x29d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x29d8f8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d8f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d8fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29d900: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29d900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29d904: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29d904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29d908: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d90c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29d90cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29d910: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D910u;
    SET_GPR_U32(ctx, 31, 0x29D918u);
    ctx->pc = 0x29D914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D910u;
    // 0x29d914: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D910u, 0x29D918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D918u;
label_29d918:
    // 0x29d918: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29d918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29d91c: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x29d91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29d920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d924: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29d924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d928: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x29d928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x29d92c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d92cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d930: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29d930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29d934: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29d934u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29d938: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x29d938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x29d93c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D93Cu;
    SET_GPR_U32(ctx, 31, 0x29D944u);
    ctx->pc = 0x29D940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D93Cu;
    // 0x29d940: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D93Cu, 0x29D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D944u;
label_29d944:
    // 0x29d944: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29d944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29d948: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29d948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29d94c: 0x8ee66b80  lw          $a2, 0x6B80($s7)
    ctx->pc = 0x29d94cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x29d950: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29d950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29d954: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29d954u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29d958: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d95c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d960: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d960u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d964: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29d964u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29d968: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29d968u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29d96c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d96cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d970: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29d970u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29d974: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29d974u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29d978: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D978u;
    SET_GPR_U32(ctx, 31, 0x29D980u);
    ctx->pc = 0x29D97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D978u;
    // 0x29d97c: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D978u, 0x29D980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D980u;
label_29d980:
    // 0x29d980: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x29d980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x29d984: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x29d984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29d988: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29d988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29d98c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d990: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x29d990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x29d994: 0x8ea6118c  lw          $a2, 0x118C($s5)
    ctx->pc = 0x29d994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29d998: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29d998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29d99c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d9a0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d9a4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x29d9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29d9a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d9ac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29d9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29d9b0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29d9b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29d9b4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29d9b8: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x29d9b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x29d9bc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29D9BCu;
    SET_GPR_U32(ctx, 31, 0x29D9C4u);
    ctx->pc = 0x29D9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D9BCu;
    // 0x29d9c0: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29D9BCu, 0x29D9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D9C4u;
label_29d9c4:
    // 0x29d9c4: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x29d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29d9c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9cc: 0x8ee66b80  lw          $a2, 0x6B80($s7)
    ctx->pc = 0x29d9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 27520)));
    // 0x29d9d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29d9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29d9d4: 0x8ea7118c  lw          $a3, 0x118C($s5)
    ctx->pc = 0x29d9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29d9d8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29d9dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29d9e0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29d9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29d9e4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29d9e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29d9e8: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29d9ec: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29d9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29d9f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29d9f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29d9f8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29d9f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29d9fc: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29d9fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29da00: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29DA00u;
    SET_GPR_U32(ctx, 31, 0x29DA08u);
    ctx->pc = 0x29DA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29DA00u;
    // 0x29da04: 0xd63025  or          $a2, $a2, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29DA00u, 0x29DA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29DA08u;
label_29da08:
    // 0x29da08: 0x8e441180  lw          $a0, 0x1180($s2)
    ctx->pc = 0x29da08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29da0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29da10: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29da10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29da14: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29da18: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29da18u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29da1c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29da1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29da20: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x29da20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29da24: 0x1440ffb2  bnez        $v0, . + 4 + (-0x4E << 2)
    ctx->pc = 0x29DA24u;
    {
        const bool branch_taken_0x29da24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA24u;
        // 0x29da28: 0x8ea2118c  lw          $v0, 0x118C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29da24) {
            ctx->pc = 0x29D8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d8f0;
        }
    }
    ctx->pc = 0x29DA2Cu;
label_29da2c:
    // 0x29da2c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x29da2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x29da30: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x29da30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29da34: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x29da34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x29da38: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x29da38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29da3c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x29da40: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x29da40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29da44: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29da44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x29da48: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x29da48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29da4c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x29da4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29da50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x29da50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29da54: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x29da54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29da58: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x29da58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29da5c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x29da5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29da60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29da60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29da64: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x29da64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x29da68: 0x3e00008  jr          $ra
    ctx->pc = 0x29DA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29DA68u;
        // 0x29da6c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29DA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29DA70u;
}
