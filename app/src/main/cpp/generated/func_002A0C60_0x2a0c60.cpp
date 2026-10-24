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

// Function: func_002A0C60
// Address: 0x2a0c60 - 0x2a10e8
void func_002A0C60_0x2a0c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A0C60_0x2a0c60");
#endif

    switch (ctx->pc) {
        case 0x2a0cb8u: goto label_2a0cb8;
        case 0x2a0cfcu: goto label_2a0cfc;
        case 0x2a0d40u: goto label_2a0d40;
        case 0x2a0d68u: goto label_2a0d68;
        case 0x2a0d78u: goto label_2a0d78;
        case 0x2a0d90u: goto label_2a0d90;
        case 0x2a0da0u: goto label_2a0da0;
        case 0x2a0db8u: goto label_2a0db8;
        case 0x2a0e08u: goto label_2a0e08;
        case 0x2a0e18u: goto label_2a0e18;
        case 0x2a0e28u: goto label_2a0e28;
        case 0x2a0e3cu: goto label_2a0e3c;
        case 0x2a0e74u: goto label_2a0e74;
        case 0x2a0ea0u: goto label_2a0ea0;
        case 0x2a0ee4u: goto label_2a0ee4;
        case 0x2a0eecu: goto label_2a0eec;
        case 0x2a0f00u: goto label_2a0f00;
        case 0x2a0f10u: goto label_2a0f10;
        case 0x2a0f20u: goto label_2a0f20;
        case 0x2a0f30u: goto label_2a0f30;
        case 0x2a0f68u: goto label_2a0f68;
        case 0x2a0f90u: goto label_2a0f90;
        case 0x2a0fa4u: goto label_2a0fa4;
        case 0x2a0ffcu: goto label_2a0ffc;
        case 0x2a1010u: goto label_2a1010;
        case 0x2a1048u: goto label_2a1048;
        case 0x2a1074u: goto label_2a1074;
        case 0x2a10b8u: goto label_2a10b8;
        default: break;
    }

    ctx->pc = 0x2a0c60u;

    // 0x2a0c60: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2a0c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2a0c64: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a0c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a0c68: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2a0c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2a0c6c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a0c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a0c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a0c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0c74: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2a0c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2a0c78: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2a0c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2a0c7c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2a0c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2a0c80: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2a0c80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2a0c84: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2a0c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2a0c88: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2a0c88u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x2a0c8c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2a0c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2a0c90: 0x24120800  addiu       $s2, $zero, 0x800
    ctx->pc = 0x2a0c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a0c94: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2a0c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2a0c98: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x2a0c98u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a0c9c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2a0c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2a0ca0: 0x24140e00  addiu       $s4, $zero, 0xE00
    ctx->pc = 0x2a0ca0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3584));
    // 0x2a0ca4: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2a0ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2a0ca8: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x2a0ca8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x2a0cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a0cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a0cb0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0CB0u;
    SET_GPR_U32(ctx, 31, 0x2A0CB8u);
    ctx->pc = 0x2A0CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0CB0u;
    // 0x2a0cb4: 0x3c1e003c  lui         $fp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0CB0u, 0x2A0CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0CB8u;
label_2a0cb8:
    // 0x2a0cb8: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x2a0cb8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a0cbc: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x2a0cbcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x2a0cc0: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x2a0cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a0cc4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a0cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a0cc8: 0x8c6211ac  lw          $v0, 0x11AC($v1)
    ctx->pc = 0x2a0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x2a0ccc: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a0cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a0cd0: 0x2a4182a  slt         $v1, $s5, $a0
    ctx->pc = 0x2a0cd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2a0cd4: 0x2486003f  addiu       $a2, $a0, 0x3F
    ctx->pc = 0x2a0cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x2a0cd8: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x2a0cd8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x2a0cdc: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x2a0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x2a0ce0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a0ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a0ce4: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x2a0ce4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x2a0ce8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a0ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a0cec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a0cecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a0cf0: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a0cf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a0cf4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0CF4u;
    SET_GPR_U32(ctx, 31, 0x2A0CFCu);
    ctx->pc = 0x2A0CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0CF4u;
    // 0x2a0cf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0CF4u, 0x2A0CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0CFCu;
label_2a0cfc:
    // 0x2a0cfc: 0x8e66118c  lw          $a2, 0x118C($s3)
    ctx->pc = 0x2a0cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x2a0d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d04: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a0d08: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2a0d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2a0d0c: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x2a0d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2a0d10: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a0d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a0d14: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a0d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a0d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0d1c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2a0d1cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2a0d20: 0x2463023  subu        $a2, $s2, $a2
    ctx->pc = 0x2a0d20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x2a0d24: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a0d24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a0d28: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2a0d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a0d2c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a0d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a0d30: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a0d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a0d34: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2a0d34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2a0d38: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0D38u;
    SET_GPR_U32(ctx, 31, 0x2A0D40u);
    ctx->pc = 0x2A0D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D38u;
    // 0x2a0d3c: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0D38u, 0x2A0D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D40u;
label_2a0d40:
    // 0x2a0d40: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a0d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d48: 0x8e66118c  lw          $a2, 0x118C($s3)
    ctx->pc = 0x2a0d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x2a0d4c: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2a0d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a0d50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a0d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a0d54: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a0d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a0d58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a0d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a0d5c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2a0d5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a0d60: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0D60u;
    SET_GPR_U32(ctx, 31, 0x2A0D68u);
    ctx->pc = 0x2A0D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D60u;
    // 0x2a0d64: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0D60u, 0x2A0D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D68u;
label_2a0d68:
    // 0x2a0d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d6c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x2a0d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x2a0d70: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0D70u;
    SET_GPR_U32(ctx, 31, 0x2A0D78u);
    ctx->pc = 0x2A0D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D70u;
    // 0x2a0d74: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0D70u, 0x2A0D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D78u;
label_2a0d78:
    // 0x2a0d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d7c: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x2a0d7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x2a0d80: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x2a0d80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x2a0d84: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x2a0d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x2a0d88: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0D88u;
    SET_GPR_U32(ctx, 31, 0x2A0D90u);
    ctx->pc = 0x2A0D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D88u;
    // 0x2a0d8c: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0D88u, 0x2A0D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D90u;
label_2a0d90:
    // 0x2a0d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d94: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x2a0d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2a0d98: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0D98u;
    SET_GPR_U32(ctx, 31, 0x2A0DA0u);
    ctx->pc = 0x2A0D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D98u;
    // 0x2a0d9c: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0D98u, 0x2A0DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DA0u;
label_2a0da0:
    // 0x2a0da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0da4: 0x3406fc00  ori         $a2, $zero, 0xFC00
    ctx->pc = 0x2a0da4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
    // 0x2a0da8: 0x634b8  dsll        $a2, $a2, 18
    ctx->pc = 0x2a0da8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 18);
    // 0x2a0dac: 0x34c63f00  ori         $a2, $a2, 0x3F00
    ctx->pc = 0x2a0dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16128);
    // 0x2a0db0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0DB0u;
    SET_GPR_U32(ctx, 31, 0x2A0DB8u);
    ctx->pc = 0x2A0DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0DB0u;
    // 0x2a0db4: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0DB0u, 0x2A0DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0DB8u;
label_2a0db8:
    // 0x2a0db8: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x2a0db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a0dbc: 0x3c042400  lui         $a0, 0x2400
    ctx->pc = 0x2a0dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9216 << 16));
    // 0x2a0dc0: 0x8fc711b8  lw          $a3, 0x11B8($fp)
    ctx->pc = 0x2a0dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4536)));
    // 0x2a0dc4: 0x34088100  ori         $t0, $zero, 0x8100
    ctx->pc = 0x2a0dc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
    // 0x2a0dc8: 0x846f8  dsll        $t0, $t0, 27
    ctx->pc = 0x2a0dc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 27);
    // 0x2a0dcc: 0x3508c000  ori         $t0, $t0, 0xC000
    ctx->pc = 0x2a0dccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)49152);
    // 0x2a0dd0: 0x84538  dsll        $t0, $t0, 20
    ctx->pc = 0x2a0dd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 20);
    // 0x2a0dd4: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x2a0dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a0dd8: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x2a0dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a0ddc: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x2a0ddcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x2a0de0: 0x73fb8  dsll        $a3, $a3, 30
    ctx->pc = 0x2a0de0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 30);
    // 0x2a0de4: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x2a0de4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x2a0de8: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x2a0de8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x2a0dec: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x2a0decu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x2a0df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0df4: 0x2863025  or          $a2, $s4, $a2
    ctx->pc = 0x2a0df4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | GPR_U64(ctx, 6));
    // 0x2a0df8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a0df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a0dfc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2a0dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a0e00: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0E00u;
    SET_GPR_U32(ctx, 31, 0x2A0E08u);
    ctx->pc = 0x2A0E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E00u;
    // 0x2a0e04: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0E00u, 0x2A0E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E08u;
label_2a0e08:
    // 0x2a0e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e0c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x2a0e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2a0e10: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0E10u;
    SET_GPR_U32(ctx, 31, 0x2A0E18u);
    ctx->pc = 0x2A0E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E10u;
    // 0x2a0e14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0E10u, 0x2A0E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E18u;
label_2a0e18:
    // 0x2a0e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e20: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0E20u;
    SET_GPR_U32(ctx, 31, 0x2A0E28u);
    ctx->pc = 0x2A0E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E20u;
    // 0x2a0e24: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0E20u, 0x2A0E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E28u;
label_2a0e28:
    // 0x2a0e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e2c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2a0e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2a0e30: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x2a0e30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a0e34: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0E34u;
    SET_GPR_U32(ctx, 31, 0x2A0E3Cu);
    ctx->pc = 0x2A0E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E34u;
    // 0x2a0e38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0E34u, 0x2A0E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E3Cu;
label_2a0e3c:
    // 0x2a0e3c: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a0e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e44: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x2a0e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x2a0e48: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a0e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a0e4c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a0e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a0e50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0e54: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a0e54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a0e58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2a0e58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a0e5c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x2a0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a0e60: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a0e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a0e64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a0e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a0e68: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a0e68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a0e6c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A0E74u);
    ctx->pc = 0x2A0E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E6Cu;
    // 0x2a0e70: 0xd73025  or          $a2, $a2, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0E6Cu, 0x2A0E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0E74u;
label_2a0e74:
    // 0x2a0e74: 0x8e66118c  lw          $a2, 0x118C($s3)
    ctx->pc = 0x2a0e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x2a0e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0e7c: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a0e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a0e80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a0e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a0e84: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a0e84u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a0e88: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x2a0e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x2a0e8c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a0e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a0e90: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x2a0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x2a0e94: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a0e94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a0e98: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0E98u;
    SET_GPR_U32(ctx, 31, 0x2A0EA0u);
    ctx->pc = 0x2A0E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0E98u;
    // 0x2a0e9c: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0E98u, 0x2A0EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EA0u;
label_2a0ea0:
    // 0x2a0ea0: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a0ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a0ea4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a0ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a0ea8: 0x8e67118c  lw          $a3, 0x118C($s3)
    ctx->pc = 0x2a0ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x2a0eac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0eb0: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x2a0eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x2a0eb4: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a0eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a0eb8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a0eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0ebc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a0ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a0ec0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a0ec0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a0ec4: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2a0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2a0ec8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a0ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a0ecc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a0ed0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a0ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a0ed4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a0ed4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a0ed8: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a0ed8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a0edc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0EDCu;
    SET_GPR_U32(ctx, 31, 0x2A0EE4u);
    ctx->pc = 0x2A0EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0EDCu;
    // 0x2a0ee0: 0xd73025  or          $a2, $a2, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0EDCu, 0x2A0EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EE4u;
label_2a0ee4:
    // 0x2a0ee4: 0xc0a6642  jal         func_299908
    ctx->pc = 0x2A0EE4u;
    SET_GPR_U32(ctx, 31, 0x2A0EECu);
    ctx->pc = 0x2A0EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0EE4u;
    // 0x2a0ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x2A0EE4u, 0x2A0EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0EECu;
label_2a0eec:
    // 0x2a0eec: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2a0eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2a0ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0ef4: 0x24c61b00  addiu       $a2, $a2, 0x1B00
    ctx->pc = 0x2a0ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6912));
    // 0x2a0ef8: 0xc0a668a  jal         func_299A28
    ctx->pc = 0x2A0EF8u;
    SET_GPR_U32(ctx, 31, 0x2A0F00u);
    ctx->pc = 0x2A0EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0EF8u;
    // 0x2a0efc: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A28u, 0x2A0EF8u, 0x2A0F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F00u;
label_2a0f00:
    // 0x2a0f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f08: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x2A0F08u;
    SET_GPR_U32(ctx, 31, 0x2A0F10u);
    ctx->pc = 0x2A0F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F08u;
    // 0x2a0f0c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x2A0F08u, 0x2A0F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F10u;
label_2a0f10:
    // 0x2a0f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a0f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f18: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0F18u;
    SET_GPR_U32(ctx, 31, 0x2A0F20u);
    ctx->pc = 0x2A0F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F18u;
    // 0x2a0f1c: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0F18u, 0x2A0F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F20u;
label_2a0f20:
    // 0x2a0f20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f24: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x2a0f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x2a0f28: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0F28u;
    SET_GPR_U32(ctx, 31, 0x2A0F30u);
    ctx->pc = 0x2A0F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F28u;
    // 0x2a0f2c: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0F28u, 0x2A0F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F30u;
label_2a0f30:
    // 0x2a0f30: 0x8e251180  lw          $a1, 0x1180($s1)
    ctx->pc = 0x2a0f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a0f34: 0x14a142  srl         $s4, $s4, 5
    ctx->pc = 0x2a0f34u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 20), 5));
    // 0x2a0f38: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2a0f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a0f3c: 0x6363c  dsll32      $a2, $a2, 24
    ctx->pc = 0x2a0f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 24));
    // 0x2a0f40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f44: 0x2a5182a  slt         $v1, $s5, $a1
    ctx->pc = 0x2a0f44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a0f48: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x2a0f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x2a0f4c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2a0f4cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2a0f50: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a0f50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a0f54: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x2a0f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x2a0f58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a0f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a0f5c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2a0f5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x2a0f60: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0F60u;
    SET_GPR_U32(ctx, 31, 0x2A0F68u);
    ctx->pc = 0x2A0F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F60u;
    // 0x2a0f64: 0x2863025  or          $a2, $s4, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0F60u, 0x2A0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F68u;
label_2a0f68:
    // 0x2a0f68: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a0f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f70: 0x8e66118c  lw          $a2, 0x118C($s3)
    ctx->pc = 0x2a0f70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x2a0f74: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x2a0f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2a0f78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a0f7c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a0f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a0f80: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a0f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a0f84: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x2a0f84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x2a0f88: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0F88u;
    SET_GPR_U32(ctx, 31, 0x2A0F90u);
    ctx->pc = 0x2A0F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F88u;
    // 0x2a0f8c: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0F88u, 0x2A0F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0F90u;
label_2a0f90:
    // 0x2a0f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0f94: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2a0f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2a0f98: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x2a0f98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x2a0f9c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0F9Cu;
    SET_GPR_U32(ctx, 31, 0x2A0FA4u);
    ctx->pc = 0x2A0FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0F9Cu;
    // 0x2a0fa0: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0F9Cu, 0x2A0FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0FA4u;
label_2a0fa4:
    // 0x2a0fa4: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x2a0fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a0fa8: 0x3c0425b0  lui         $a0, 0x25B0
    ctx->pc = 0x2a0fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9648 << 16));
    // 0x2a0fac: 0x8fc511b8  lw          $a1, 0x11B8($fp)
    ctx->pc = 0x2a0facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4536)));
    // 0x2a0fb0: 0x3407800e  ori         $a3, $zero, 0x800E
    ctx->pc = 0x2a0fb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x2a0fb4: 0x73db8  dsll        $a3, $a3, 22
    ctx->pc = 0x2a0fb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 22);
    // 0x2a0fb8: 0x34e78800  ori         $a3, $a3, 0x8800
    ctx->pc = 0x2a0fb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)34816);
    // 0x2a0fbc: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x2a0fbcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x2a0fc0: 0x2a3a82a  slt         $s5, $s5, $v1
    ctx->pc = 0x2a0fc0u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2a0fc4: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2a0fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2a0fc8: 0x75100b  movn        $v0, $v1, $s5
    ctx->pc = 0x2a0fc8u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2a0fcc: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x2a0fccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x2a0fd0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a0fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a0fd4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2a0fd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2a0fd8: 0x9c6611ac  lwu         $a2, 0x11AC($v1)
    ctx->pc = 0x2a0fd8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4524)));
    // 0x2a0fdc: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x2a0fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x2a0fe0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x2a0fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x2a0fe4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x2a0fe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x2a0fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0fec: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x2a0fecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x2a0ff0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x2a0ff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x2a0ff4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A0FF4u;
    SET_GPR_U32(ctx, 31, 0x2A0FFCu);
    ctx->pc = 0x2A0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0FF4u;
    // 0x2a0ff8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A0FF4u, 0x2A0FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0FFCu;
label_2a0ffc:
    // 0x2a0ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a0ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1000: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x2a1000u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x2a1004: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x2a1004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a1008: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1008u;
    SET_GPR_U32(ctx, 31, 0x2A1010u);
    ctx->pc = 0x2A100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1008u;
    // 0x2a100c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1008u, 0x2A1010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1010u;
label_2a1010:
    // 0x2a1010: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x2a1010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1018: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x2a1018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x2a101c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x2a101cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2a1020: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a1020u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a1024: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a1024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a1028: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a1028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a102c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a102cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a1030: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x2a1030u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2a1034: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a1034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a1038: 0x129100  sll         $s2, $s2, 4
    ctx->pc = 0x2a1038u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x2a103c: 0x2463025  or          $a2, $s2, $a2
    ctx->pc = 0x2a103cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
    // 0x2a1040: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A1040u;
    SET_GPR_U32(ctx, 31, 0x2A1048u);
    ctx->pc = 0x2A1044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1040u;
    // 0x2a1044: 0xd73025  or          $a2, $a2, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A1040u, 0x2A1048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1048u;
label_2a1048:
    // 0x2a1048: 0x8e66118c  lw          $a2, 0x118C($s3)
    ctx->pc = 0x2a1048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x2a104c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1050: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a1050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1054: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2a1054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a1058: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a1058u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a105c: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x2a105cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x2a1060: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a1060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a1064: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x2a1064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x2a1068: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a1068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a106c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A106Cu;
    SET_GPR_U32(ctx, 31, 0x2A1074u);
    ctx->pc = 0x2A1070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A106Cu;
    // 0x2a1070: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A106Cu, 0x2A1074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1074u;
label_2a1074:
    // 0x2a1074: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x2a1074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x2a1078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a1078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a107c: 0x8e67118c  lw          $a3, 0x118C($s3)
    ctx->pc = 0x2a107cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x2a1080: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2a1080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2a1084: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x2a1084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x2a1088: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2a1088u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a108c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a108cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a1090: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2a1090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2a1094: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a1094u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a1098: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x2a1098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2a109c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2a109cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2a10a0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a10a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a10a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a10a8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2a10a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2a10ac: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x2a10acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2a10b0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x2A10B0u;
    SET_GPR_U32(ctx, 31, 0x2A10B8u);
    ctx->pc = 0x2A10B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A10B0u;
    // 0x2a10b4: 0xd73025  or          $a2, $a2, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x2A10B0u, 0x2A10B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A10B8u;
label_2a10b8:
    // 0x2a10b8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2a10b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2a10bc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2a10bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a10c0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2a10c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a10c4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2a10c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a10c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2a10c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a10cc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2a10ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a10d0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2a10d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a10d4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2a10d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a10d8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2a10d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a10dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a10dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a10e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A10E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A10E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A10E0u;
        // 0x2a10e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A10E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A10E8u;
}
