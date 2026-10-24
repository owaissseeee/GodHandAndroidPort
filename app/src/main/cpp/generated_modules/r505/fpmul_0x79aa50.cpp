#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: fpmul
// Address: 0x79aa50 - 0x79ac48
void fpmul_0x79aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpmul_0x79aa50");
#endif

    switch (ctx->pc) {
        case 0x79aa70u: goto label_79aa70;
        case 0x79aa80u: goto label_79aa80;
        case 0x79ab88u: goto label_79ab88;
        case 0x79abd0u: goto label_79abd0;
        case 0x79ac34u: goto label_79ac34;
        default: break;
    }

    ctx->pc = 0x79aa50u;

    // 0x79aa50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79aa54: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x79aa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x79aa58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79aa5c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79aa60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79aa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aa64: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x79aa64u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79aa68: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79AA68u;
    SET_GPR_U32(ctx, 31, 0x79AA70u);
    ctx->pc = 0x79AA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA68u;
    // 0x79aa6c: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79AA68u, 0x79AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA70u;
label_79aa70:
    // 0x79aa70: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79aa70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79aa74: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x79aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x79aa78: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79AA78u;
    SET_GPR_U32(ctx, 31, 0x79AA80u);
    ctx->pc = 0x79AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AA78u;
    // 0x79aa7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79AA78u, 0x79AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AA80u;
label_79aa80:
    // 0x79aa80: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x79aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79aa84: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x79aa84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79aa88: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79AA88u;
    {
        const bool branch_taken_0x79aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA88u;
        // 0x79aa8c: 0x27a90020  addiu       $t1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa88) {
            ctx->pc = 0x79AAE4u;
            goto label_79aae4;
        }
    }
    ctx->pc = 0x79AA90u;
    // 0x79aa90: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79aa94: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79aa94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79aa98: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x79AA98u;
    {
        const bool branch_taken_0x79aa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79aa98) {
            ctx->pc = 0x79AA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79AA98u;
            // 0x79aa9c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AB0Cu;
            goto label_79ab0c;
        }
    }
    ctx->pc = 0x79AAA0u;
    // 0x79aaa0: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x79aaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x79aaa4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AAA4u;
    {
        const bool branch_taken_0x79aaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAA4u;
        // 0x79aaa8: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aaa4) {
            ctx->pc = 0x79AAC0u;
            goto label_79aac0;
        }
    }
    ctx->pc = 0x79AAACu;
    // 0x79aaac: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79aaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79aab0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AAB0u;
    {
        const bool branch_taken_0x79aab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB0u;
        // 0x79aab4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aab0) {
            ctx->pc = 0x79AAD0u;
            goto label_79aad0;
        }
    }
    ctx->pc = 0x79AAB8u;
    // 0x79aab8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79AAB8u;
    {
        const bool branch_taken_0x79aab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB8u;
        // 0x79aabc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aab8) {
            ctx->pc = 0x79AAECu;
            goto label_79aaec;
        }
    }
    ctx->pc = 0x79AAC0u;
label_79aac0:
    // 0x79aac0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AAC0u;
    {
        const bool branch_taken_0x79aac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC0u;
        // 0x79aac4: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aac0) {
            ctx->pc = 0x79AADCu;
            goto label_79aadc;
        }
    }
    ctx->pc = 0x79AAC8u;
    // 0x79aac8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79AAC8u;
    {
        const bool branch_taken_0x79aac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC8u;
        // 0x79aacc: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aac8) {
            ctx->pc = 0x79AB0Cu;
            goto label_79ab0c;
        }
    }
    ctx->pc = 0x79AAD0u;
label_79aad0:
    // 0x79aad0: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79aad4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x79AAD4u;
    {
        const bool branch_taken_0x79aad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAD4u;
        // 0x79aad8: 0x2444c288  addiu       $a0, $v0, -0x3D78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aad4) {
            ctx->pc = 0x79AC2Cu;
            goto label_79ac2c;
        }
    }
    ctx->pc = 0x79AADCu;
label_79aadc:
    // 0x79aadc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79AADCu;
    {
        const bool branch_taken_0x79aadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AADCu;
        // 0x79aae0: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aadc) {
            ctx->pc = 0x79AB00u;
            goto label_79ab00;
        }
    }
    ctx->pc = 0x79AAE4u;
label_79aae4:
    // 0x79aae4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79aae8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79aae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_79aaec:
    // 0x79aaec: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x79aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79aaf0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79aaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79aaf4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79aaf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79aaf8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x79AAF8u;
    {
        const bool branch_taken_0x79aaf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAF8u;
        // 0x79aafc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aaf8) {
            ctx->pc = 0x79AC2Cu;
            goto label_79ac2c;
        }
    }
    ctx->pc = 0x79AB00u;
label_79ab00:
    // 0x79ab00: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79AB00u;
    {
        const bool branch_taken_0x79ab00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB00u;
        // 0x79ab04: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab00) {
            ctx->pc = 0x79AB24u;
            goto label_79ab24;
        }
    }
    ctx->pc = 0x79AB08u;
    // 0x79ab08: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x79ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_79ab0c:
    // 0x79ab0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79ab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ab10: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79ab14: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x79ab14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x79ab18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79ab18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79ab1c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x79AB1Cu;
    {
        const bool branch_taken_0x79ab1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB1Cu;
        // 0x79ab20: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab1c) {
            ctx->pc = 0x79AC2Cu;
            goto label_79ac2c;
        }
    }
    ctx->pc = 0x79AB24u;
label_79ab24:
    // 0x79ab24: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x79ab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x79ab28: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x79ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x79ab2c: 0x820019  multu       $a0, $v0
    ctx->pc = 0x79ab2cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x79ab30: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x79ab30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79ab34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79ab38: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x79ab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x79ab3c: 0x2812  mflo        $a1
    ctx->pc = 0x79ab3cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x79ab40: 0x2010  mfhi        $a0
    ctx->pc = 0x79ab40u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x79ab44: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x79ab44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x79ab48: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x79ab48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x79ab4c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x79ab4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x79ab50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x79ab50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x79ab54: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x79ab54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x79ab58: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x79ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x79ab5c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x79ab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x79ab60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x79ab60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x79ab64: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x79ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x79ab68: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x79ab68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x79ab6c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x79ab6cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x79ab70: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x79ab70u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x79ab74: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x79AB74u;
    {
        const bool branch_taken_0x79ab74 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x79AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB74u;
        // 0x79ab78: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab74) {
            ctx->pc = 0x79ABA8u;
            goto label_79aba8;
        }
    }
    ctx->pc = 0x79AB7Cu;
    // 0x79ab7c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x79ab7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x79ab80: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x79ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x79ab84: 0x0  nop
    ctx->pc = 0x79ab84u;
    // NOP
label_79ab88:
    // 0x79ab88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AB88u;
    {
        const bool branch_taken_0x79ab88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB88u;
        // 0x79ab8c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab88) {
            ctx->pc = 0x79AB98u;
            goto label_79ab98;
        }
    }
    ctx->pc = 0x79AB90u;
    // 0x79ab90: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x79ab90u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x79ab94: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x79ab94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_79ab98:
    // 0x79ab98: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x79ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x79ab9c: 0x480fffa  bltz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79AB9Cu;
    {
        const bool branch_taken_0x79ab9c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB9Cu;
        // 0x79aba0: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab9c) {
            ctx->pc = 0x79AB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ab88;
        }
    }
    ctx->pc = 0x79ABA4u;
    // 0x79aba4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x79aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_79aba8:
    // 0x79aba8: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x79aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x79abac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79abacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79abb0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x79abb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79abb4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x79ABB4u;
    {
        const bool branch_taken_0x79abb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79ABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABB4u;
        // 0x79abb8: 0x3083007f  andi        $v1, $a0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abb4) {
            ctx->pc = 0x79ABF8u;
            goto label_79abf8;
        }
    }
    ctx->pc = 0x79ABBCu;
    // 0x79abbc: 0x3c073fff  lui         $a3, 0x3FFF
    ctx->pc = 0x79abbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16383 << 16));
    // 0x79abc0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x79abc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x79abc4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x79abc4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x79abc8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x79abc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x79abcc: 0x0  nop
    ctx->pc = 0x79abccu;
    // NOP
label_79abd0:
    // 0x79abd0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x79abd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x79abd4: 0xa81824  and         $v1, $a1, $t0
    ctx->pc = 0x79abd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x79abd8: 0x34820001  ori         $v0, $a0, 0x1
    ctx->pc = 0x79abd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x79abdc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x79abdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x79abe0: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x79abe0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x79abe4: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x79abe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79abe8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x79ABE8u;
    {
        const bool branch_taken_0x79abe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABE8u;
        // 0x79abec: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abe8) {
            ctx->pc = 0x79ABD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79abd0;
        }
    }
    ctx->pc = 0x79ABF0u;
    // 0x79abf0: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x79abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x79abf4: 0x3083007f  andi        $v1, $a0, 0x7F
    ctx->pc = 0x79abf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
label_79abf8:
    // 0x79abf8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x79abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x79abfc: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79ABFCu;
    {
        const bool branch_taken_0x79abfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79abfc) {
            ctx->pc = 0x79AC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79ABFCu;
            // 0x79ac00: 0xafa4002c  sw          $a0, 0x2C($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79AC20u;
            goto label_79ac20;
        }
    }
    ctx->pc = 0x79AC04u;
    // 0x79ac04: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x79ac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x79ac08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79AC08u;
    {
        const bool branch_taken_0x79ac08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC08u;
        // 0x79ac0c: 0x24820040  addiu       $v0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac08) {
            ctx->pc = 0x79AC18u;
            goto label_79ac18;
        }
    }
    ctx->pc = 0x79AC10u;
    // 0x79ac10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79AC10u;
    {
        const bool branch_taken_0x79ac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC10u;
        // 0x79ac14: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac10) {
            ctx->pc = 0x79AC1Cu;
            goto label_79ac1c;
        }
    }
    ctx->pc = 0x79AC18u;
label_79ac18:
    // 0x79ac18: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x79ac18u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_79ac1c:
    // 0x79ac1c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x79ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_79ac20:
    // 0x79ac20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79ac24: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x79ac24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x79ac28: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x79ac28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_79ac2c:
    // 0x79ac2c: 0xc1e696e  jal         func_79A5B8
    ctx->pc = 0x79AC2Cu;
    SET_GPR_U32(ctx, 31, 0x79AC34u);
    ctx->pc = 0x79A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5B8u, 0x79AC2Cu, 0x79AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC34u;
label_79ac34:
    // 0x79ac34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79ac38: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x79ac38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ac3c: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC3Cu;
        // 0x79ac40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC44u;
    // 0x79ac44: 0x0  nop
    ctx->pc = 0x79ac44u;
    // NOP
    ctx->pc = 0x79ac48u;
}
} // namespace gh_r505
