#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079A9B8
// Address: 0x79a9b8 - 0x79aba0
void func_0079A9B8_0x79a9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A9B8_0x79a9b8");
#endif

    switch (ctx->pc) {
        case 0x79aabcu: goto label_79aabc;
        case 0x79aac4u: goto label_79aac4;
        case 0x79aae8u: goto label_79aae8;
        case 0x79aaf8u: goto label_79aaf8;
        case 0x79ab00u: goto label_79ab00;
        case 0x79ab28u: goto label_79ab28;
        case 0x79ab30u: goto label_79ab30;
        case 0x79ab40u: goto label_79ab40;
        case 0x79ab58u: goto label_79ab58;
        case 0x79ab78u: goto label_79ab78;
        case 0x79ab84u: goto label_79ab84;
        default: break;
    }

    ctx->pc = 0x79a9b8u;

    // 0x79a9b8: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x79a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x79a9bc: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a9c0: 0x8ca47a8c  lw          $a0, 0x7A8C($a1)
    ctx->pc = 0x79a9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x79a9c4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x79a9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x79a9c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a9cc: 0x8c46c804  lw          $a2, -0x37FC($v0)
    ctx->pc = 0x79a9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x79C804u));
    // 0x79a9d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79a9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79a9d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79a9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79a9d8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x79a9d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x79a9dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79a9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79a9e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79a9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x79a9e4: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x79a9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x79a9e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a9ec: 0x2cc20009  sltiu       $v0, $a2, 0x9
    ctx->pc = 0x79a9ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x79a9f0: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x79A9F0u;
    {
        const bool branch_taken_0x79a9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9F0u;
        // 0x79a9f4: 0xaca47a8c  sw          $a0, 0x7A8C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 31372), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a9f0) {
            ctx->pc = 0x79AAECu;
            goto label_79aaec;
        }
    }
    ctx->pc = 0x79A9F8u;
    // 0x79a9f8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a9fc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x79a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x79aa00: 0x2442c510  addiu       $v0, $v0, -0x3AF0
    ctx->pc = 0x79aa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952208));
    // 0x79aa04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79aa08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79aa0c: 0x800008  jr          $a0
    ctx->pc = 0x79AA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79AA14u: goto label_79aa14;
            case 0x79AA28u: goto label_79aa28;
            case 0x79AA3Cu: goto label_79aa3c;
            case 0x79AA50u: goto label_79aa50;
            case 0x79AA64u: goto label_79aa64;
            case 0x79AA78u: goto label_79aa78;
            case 0x79AA8Cu: goto label_79aa8c;
            case 0x79AAA0u: goto label_79aaa0;
            case 0x79AAD0u: goto label_79aad0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AA0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79AA14u;
label_79aa14:
    // 0x79aa14: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79aa18: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79aa18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79aa1c: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aa20: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x79AA20u;
    {
        const bool branch_taken_0x79aa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA20u;
        // 0x79aa24: 0x24a5ae78  addiu       $a1, $a1, -0x5188 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa20) {
            ctx->pc = 0x79AAB0u;
            goto label_79aab0;
        }
    }
    ctx->pc = 0x79AA28u;
label_79aa28:
    // 0x79aa28: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79aa2c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79aa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79aa30: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aa34: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x79AA34u;
    {
        const bool branch_taken_0x79aa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA34u;
        // 0x79aa38: 0x24a5b018  addiu       $a1, $a1, -0x4FE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa34) {
            ctx->pc = 0x79AAB0u;
            goto label_79aab0;
        }
    }
    ctx->pc = 0x79AA3Cu;
label_79aa3c:
    // 0x79aa3c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79aa40: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79aa40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79aa44: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aa48: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x79AA48u;
    {
        const bool branch_taken_0x79aa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA48u;
        // 0x79aa4c: 0x24a5b048  addiu       $a1, $a1, -0x4FB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946888));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa48) {
            ctx->pc = 0x79AAB0u;
            goto label_79aab0;
        }
    }
    ctx->pc = 0x79AA50u;
label_79aa50:
    // 0x79aa50: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79aa54: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79aa58: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aa5c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x79AA5Cu;
    {
        const bool branch_taken_0x79aa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA5Cu;
        // 0x79aa60: 0x24a5b1e8  addiu       $a1, $a1, -0x4E18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa5c) {
            ctx->pc = 0x79AAB0u;
            goto label_79aab0;
        }
    }
    ctx->pc = 0x79AA64u;
label_79aa64:
    // 0x79aa64: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79aa68: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79aa68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79aa6c: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aa70: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x79AA70u;
    {
        const bool branch_taken_0x79aa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA70u;
        // 0x79aa74: 0x24a5b388  addiu       $a1, $a1, -0x4C78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa70) {
            ctx->pc = 0x79AAB0u;
            goto label_79aab0;
        }
    }
    ctx->pc = 0x79AA78u;
label_79aa78:
    // 0x79aa78: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79aa7c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79aa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79aa80: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aa84: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x79AA84u;
    {
        const bool branch_taken_0x79aa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA84u;
        // 0x79aa88: 0x24a5b4a0  addiu       $a1, $a1, -0x4B60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa84) {
            ctx->pc = 0x79AAB0u;
            goto label_79aab0;
        }
    }
    ctx->pc = 0x79AA8Cu;
label_79aa8c:
    // 0x79aa8c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79aa90: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79aa94: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aa98: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x79AA98u;
    {
        const bool branch_taken_0x79aa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AA98u;
        // 0x79aa9c: 0x24a5b638  addiu       $a1, $a1, -0x49C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aa98) {
            ctx->pc = 0x79AAB0u;
            goto label_79aab0;
        }
    }
    ctx->pc = 0x79AAA0u;
label_79aaa0:
    // 0x79aaa0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79aaa4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79aaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79aaa8: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x79aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aaac: 0x24a5b758  addiu       $a1, $a1, -0x48A8
    ctx->pc = 0x79aaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948696));
label_79aab0:
    // 0x79aab0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x79aab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79aab4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79AAB4u;
    SET_GPR_U32(ctx, 31, 0x79AABCu);
    ctx->pc = 0x79AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAB4u;
    // 0x79aab8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79AAB4u, 0x79AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AABCu;
label_79aabc:
    // 0x79aabc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79AABCu;
    {
        const bool branch_taken_0x79aabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AABCu;
        // 0x79aac0: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aabc) {
            ctx->pc = 0x79AAF0u;
            goto label_79aaf0;
        }
    }
    ctx->pc = 0x79AAC4u;
label_79aac4:
    // 0x79aac4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79aac8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x79AAC8u;
    {
        const bool branch_taken_0x79aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAC8u;
        // 0x79aacc: 0xa0620008  sb          $v0, 0x8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aac8) {
            ctx->pc = 0x79AB64u;
            goto label_79ab64;
        }
    }
    ctx->pc = 0x79AAD0u;
label_79aad0:
    // 0x79aad0: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79aad0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79aad4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79aad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79aad8: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79aadc: 0x24a5b9b0  addiu       $a1, $a1, -0x4650
    ctx->pc = 0x79aadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949296));
    // 0x79aae0: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79AAE0u;
    SET_GPR_U32(ctx, 31, 0x79AAE8u);
    ctx->pc = 0x79AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAE0u;
    // 0x79aae4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79AAE0u, 0x79AAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAE8u;
label_79aae8:
    // 0x79aae8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x79aae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79aaec:
    // 0x79aaec: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x79aaecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
label_79aaf0:
    // 0x79aaf0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x79aaf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79aaf4: 0x0  nop
    ctx->pc = 0x79aaf4u;
    // NOP
label_79aaf8:
    // 0x79aaf8: 0xc1e68a2  jal         func_79A288
    ctx->pc = 0x79AAF8u;
    SET_GPR_U32(ctx, 31, 0x79AB00u);
    ctx->pc = 0x79A288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A288u, 0x79AAF8u, 0x79AB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB00u;
label_79ab00:
    // 0x79ab00: 0x8e02c800  lw          $v0, -0x3800($s0)
    ctx->pc = 0x79ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
    // 0x79ab04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ab08: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x79ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ab0c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x79ab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ab10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x79ab10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x79ab14: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79ab14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79ab18: 0x8e04c800  lw          $a0, -0x3800($s0)
    ctx->pc = 0x79ab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952960)));
    // 0x79ab1c: 0xc48c0004  lwc1        $f12, 0x4($a0)
    ctx->pc = 0x79ab1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x79ab20: 0xc1e663a  jal         func_7998E8
    ctx->pc = 0x79AB20u;
    SET_GPR_U32(ctx, 31, 0x79AB28u);
    ctx->pc = 0x79AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB20u;
    // 0x79ab24: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7998E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7998E8u, 0x79AB20u, 0x79AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB28u;
label_79ab28:
    // 0x79ab28: 0xc1e6eaa  jal         func_79BAA8
    ctx->pc = 0x79AB28u;
    SET_GPR_U32(ctx, 31, 0x79AB30u);
    ctx->pc = 0x79BAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAA8u, 0x79AB28u, 0x79AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB30u;
label_79ab30:
    // 0x79ab30: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x79AB30u;
    {
        const bool branch_taken_0x79ab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB30u;
        // 0x79ab34: 0x8e23c800  lw          $v1, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab30) {
            ctx->pc = 0x79AAC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aac4;
        }
    }
    ctx->pc = 0x79AB38u;
    // 0x79ab38: 0xc1e6e98  jal         func_79BA60
    ctx->pc = 0x79AB38u;
    SET_GPR_U32(ctx, 31, 0x79AB40u);
    ctx->pc = 0x79BA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BA60u, 0x79AB38u, 0x79AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB40u;
label_79ab40:
    // 0x79ab40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79AB40u;
    {
        const bool branch_taken_0x79ab40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB40u;
        // 0x79ab44: 0x8e22c800  lw          $v0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab40) {
            ctx->pc = 0x79AB60u;
            goto label_79ab60;
        }
    }
    ctx->pc = 0x79AB48u;
    // 0x79ab48: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79ab4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ab50: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79AB50u;
    SET_GPR_U32(ctx, 31, 0x79AB58u);
    ctx->pc = 0x79AB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB50u;
    // 0x79ab54: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79AB50u, 0x79AB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB58u;
label_79ab58:
    // 0x79ab58: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x79AB58u;
    {
        const bool branch_taken_0x79ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ab58) {
            ctx->pc = 0x79AAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79aaf8;
        }
    }
    ctx->pc = 0x79AB60u;
label_79ab60:
    // 0x79ab60: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x79ab60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
label_79ab64:
    // 0x79ab64: 0x8e442f84  lw          $a0, 0x2F84($s2)
    ctx->pc = 0x79ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79ab68: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79ab6c: 0x24a5aba0  addiu       $a1, $a1, -0x5460
    ctx->pc = 0x79ab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945696));
    // 0x79ab70: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79AB70u;
    SET_GPR_U32(ctx, 31, 0x79AB78u);
    ctx->pc = 0x79AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB70u;
    // 0x79ab74: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79AB70u, 0x79AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB78u;
label_79ab78:
    // 0x79ab78: 0x8e432f84  lw          $v1, 0x2F84($s2)
    ctx->pc = 0x79ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x79ab7c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79AB7Cu;
    SET_GPR_U32(ctx, 31, 0x79AB84u);
    ctx->pc = 0x79AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB7Cu;
    // 0x79ab80: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79AB7Cu, 0x79AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB84u;
label_79ab84:
    // 0x79ab84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79ab84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ab88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79ab88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ab8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x79ab8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79ab90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79ab90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ab94: 0x3e00008  jr          $ra
    ctx->pc = 0x79AB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB94u;
        // 0x79ab98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AB9Cu;
    // 0x79ab9c: 0x0  nop
    ctx->pc = 0x79ab9cu;
    // NOP
    ctx->pc = 0x79aba0u;
}
} // namespace gh_r040
