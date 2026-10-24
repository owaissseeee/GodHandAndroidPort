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

// Function: func_0028CED8
// Address: 0x28ced8 - 0x28d048
void func_0028CED8_0x28ced8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028CED8_0x28ced8");
#endif

    switch (ctx->pc) {
        case 0x28cf34u: goto label_28cf34;
        case 0x28cf54u: goto label_28cf54;
        case 0x28cfb8u: goto label_28cfb8;
        case 0x28cfd0u: goto label_28cfd0;
        case 0x28d00cu: goto label_28d00c;
        case 0x28d030u: goto label_28d030;
        default: break;
    }

    ctx->pc = 0x28ced8u;

    // 0x28ced8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ced8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28cedc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28cedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28cee0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28cee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28cee4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28cee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ceec: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x28ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x28cef0: 0x2444fdf8  addiu       $a0, $v0, -0x208
    ctx->pc = 0x28cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966776));
    // 0x28cef4: 0x2c830072  sltiu       $v1, $a0, 0x72
    ctx->pc = 0x28cef4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)114) ? 1 : 0);
    // 0x28cef8: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x28CEF8u;
    {
        const bool branch_taken_0x28cef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CEF8u;
        // 0x28cefc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cef8) {
            ctx->pc = 0x28D030u;
            goto label_28d030;
        }
    }
    ctx->pc = 0x28CF00u;
    // 0x28cf00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x28cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28cf04: 0x24429df0  addiu       $v0, $v0, -0x6210
    ctx->pc = 0x28cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942192));
    // 0x28cf08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28cf0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28cf10: 0x800008  jr          $a0
    ctx->pc = 0x28CF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28CF18u: goto label_28cf18;
            case 0x28CF34u: goto label_28cf34;
            case 0x28CF68u: goto label_28cf68;
            case 0x28CF80u: goto label_28cf80;
            case 0x28CF98u: goto label_28cf98;
            case 0x28CFD8u: goto label_28cfd8;
            case 0x28CFF0u: goto label_28cff0;
            case 0x28D014u: goto label_28d014;
            case 0x28D030u: goto label_28d030;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CF10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28CF18u;
label_28cf18:
    // 0x28cf18: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x28cf18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28cf1c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x28cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x28cf20: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x28cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x28cf24: 0x2405027a  addiu       $a1, $zero, 0x27A
    ctx->pc = 0x28cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 634));
    // 0x28cf28: 0x8cc2006c  lw          $v0, 0x6C($a2)
    ctx->pc = 0x28cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x28cf2c: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x28CF2Cu;
    SET_GPR_U32(ctx, 31, 0x28CF34u);
    ctx->pc = 0x28CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF2Cu;
    // 0x28cf30: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x28CF2Cu, 0x28CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF34u;
label_28cf34:
    // 0x28cf34: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x28cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28cf38: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x28cf38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x28cf3c: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x28cf3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x28cf40: 0x24050253  addiu       $a1, $zero, 0x253
    ctx->pc = 0x28cf40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
    // 0x28cf44: 0x8c46005c  lw          $a2, 0x5C($v0)
    ctx->pc = 0x28cf44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x28cf48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf4c: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x28CF4Cu;
    SET_GPR_U32(ctx, 31, 0x28CF54u);
    ctx->pc = 0x28CF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CF4Cu;
    // 0x28cf50: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x28CF4Cu, 0x28CF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CF54u;
label_28cf54:
    // 0x28cf54: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x28cf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28cf58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cf58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf5c: 0x24050369  addiu       $a1, $zero, 0x369
    ctx->pc = 0x28cf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 873));
    // 0x28cf60: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x28CF60u;
    {
        const bool branch_taken_0x28cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF60u;
        // 0x28cf64: 0x8c660060  lw          $a2, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf60) {
            ctx->pc = 0x28CFC8u;
            goto label_28cfc8;
        }
    }
    ctx->pc = 0x28CF68u;
label_28cf68:
    // 0x28cf68: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x28cf68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28cf6c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x28cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x28cf70: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x28cf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x28cf74: 0x24050257  addiu       $a1, $zero, 0x257
    ctx->pc = 0x28cf74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
    // 0x28cf78: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28CF78u;
    {
        const bool branch_taken_0x28cf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF78u;
        // 0x28cf7c: 0x8cc20058  lw          $v0, 0x58($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf78) {
            ctx->pc = 0x28D004u;
            goto label_28d004;
        }
    }
    ctx->pc = 0x28CF80u;
label_28cf80:
    // 0x28cf80: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x28cf80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28cf84: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x28cf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x28cf88: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x28cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x28cf8c: 0x2405036c  addiu       $a1, $zero, 0x36C
    ctx->pc = 0x28cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 876));
    // 0x28cf90: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28CF90u;
    {
        const bool branch_taken_0x28cf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CF90u;
        // 0x28cf94: 0x8cc20070  lw          $v0, 0x70($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf90) {
            ctx->pc = 0x28D004u;
            goto label_28d004;
        }
    }
    ctx->pc = 0x28CF98u;
label_28cf98:
    // 0x28cf98: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x28cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28cf9c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x28cf9cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x28cfa0: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x28cfa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x28cfa4: 0x2405036f  addiu       $a1, $zero, 0x36F
    ctx->pc = 0x28cfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 879));
    // 0x28cfa8: 0x8c460064  lw          $a2, 0x64($v0)
    ctx->pc = 0x28cfa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x28cfac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cfb0: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x28CFB0u;
    SET_GPR_U32(ctx, 31, 0x28CFB8u);
    ctx->pc = 0x28CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CFB0u;
    // 0x28cfb4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x28CFB0u, 0x28CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CFB8u;
label_28cfb8:
    // 0x28cfb8: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x28cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28cfbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28cfbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cfc0: 0x2405037a  addiu       $a1, $zero, 0x37A
    ctx->pc = 0x28cfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 890));
    // 0x28cfc4: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x28cfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_28cfc8:
    // 0x28cfc8: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x28CFC8u;
    SET_GPR_U32(ctx, 31, 0x28CFD0u);
    ctx->pc = 0x28CFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CFC8u;
    // 0x28cfcc: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x28CFC8u, 0x28CFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CFD0u;
label_28cfd0:
    // 0x28cfd0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28CFD0u;
    {
        const bool branch_taken_0x28cfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFD0u;
        // 0x28cfd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfd0) {
            ctx->pc = 0x28D034u;
            goto label_28d034;
        }
    }
    ctx->pc = 0x28CFD8u;
label_28cfd8:
    // 0x28cfd8: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x28cfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28cfdc: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x28cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x28cfe0: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x28cfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x28cfe4: 0x24050370  addiu       $a1, $zero, 0x370
    ctx->pc = 0x28cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 880));
    // 0x28cfe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28CFE8u;
    {
        const bool branch_taken_0x28cfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CFE8u;
        // 0x28cfec: 0x8cc20074  lw          $v0, 0x74($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfe8) {
            ctx->pc = 0x28D004u;
            goto label_28d004;
        }
    }
    ctx->pc = 0x28CFF0u;
label_28cff0:
    // 0x28cff0: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x28cff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28cff4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x28cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x28cff8: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x28cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x28cffc: 0x2405037f  addiu       $a1, $zero, 0x37F
    ctx->pc = 0x28cffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 895));
    // 0x28d000: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x28d000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
label_28d004:
    // 0x28d004: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x28D004u;
    SET_GPR_U32(ctx, 31, 0x28D00Cu);
    ctx->pc = 0x28D008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D004u;
    // 0x28d008: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x28D004u, 0x28D00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D00Cu;
label_28d00c:
    // 0x28d00c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28D00Cu;
    {
        const bool branch_taken_0x28d00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D00Cu;
        // 0x28d010: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d00c) {
            ctx->pc = 0x28D034u;
            goto label_28d034;
        }
    }
    ctx->pc = 0x28D014u;
label_28d014:
    // 0x28d014: 0x8e260304  lw          $a2, 0x304($s1)
    ctx->pc = 0x28d014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x28d018: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x28d018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x28d01c: 0x248464e0  addiu       $a0, $a0, 0x64E0
    ctx->pc = 0x28d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    // 0x28d020: 0x2405037f  addiu       $a1, $zero, 0x37F
    ctx->pc = 0x28d020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 895));
    // 0x28d024: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x28d024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x28d028: 0xc07fb38  jal         func_1FECE0
    ctx->pc = 0x28D028u;
    SET_GPR_U32(ctx, 31, 0x28D030u);
    ctx->pc = 0x28D02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D028u;
    // 0x28d02c: 0x463021  addu        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FECE0u, 0x28D028u, 0x28D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28D030u;
label_28d030:
    // 0x28d030: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28d030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28d034:
    // 0x28d034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d038: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d03c: 0x3e00008  jr          $ra
    ctx->pc = 0x28D03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D03Cu;
        // 0x28d040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D044u;
    // 0x28d044: 0x0  nop
    ctx->pc = 0x28d044u;
    // NOP
    ctx->pc = 0x28d048u;
}
