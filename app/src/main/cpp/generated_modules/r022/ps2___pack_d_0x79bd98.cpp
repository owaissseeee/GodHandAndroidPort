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
// Function: __pack_d
// Address: 0x79bd98 - 0x79bec8
void ps2___pack_d_0x79bd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_d_0x79bd98");
#endif

    ctx->pc = 0x79bd98u;

    // 0x79bd98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79bd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79bd9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79bd9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bda0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x79bda0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79bda4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79bda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79bda8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79BDA8u;
    {
        const bool branch_taken_0x79bda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDA8u;
        // 0x79bdac: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bda8) {
            ctx->pc = 0x79BDC4u;
            goto label_79bdc4;
        }
    }
    ctx->pc = 0x79BDB0u;
    // 0x79bdb0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79bdb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79bdb4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x79bdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x79bdb8: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x79bdb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x79bdbc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x79BDBCu;
    {
        const bool branch_taken_0x79bdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDBCu;
        // 0x79bdc0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bdbc) {
            ctx->pc = 0x79BE68u;
            goto label_79be68;
        }
    }
    ctx->pc = 0x79BDC4u;
label_79bdc4:
    // 0x79bdc4: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79bdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79bdc8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x79BDC8u;
    {
        const bool branch_taken_0x79bdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bdc8) {
            ctx->pc = 0x79BDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BDC8u;
            // 0x79bdcc: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BE24u;
            goto label_79be24;
        }
    }
    ctx->pc = 0x79BDD0u;
    // 0x79bdd0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79bdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79bdd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BDD4u;
    {
        const bool branch_taken_0x79bdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bdd4) {
            ctx->pc = 0x79BDE4u;
            goto label_79bde4;
        }
    }
    ctx->pc = 0x79BDDCu;
    // 0x79bddc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x79BDDCu;
    {
        const bool branch_taken_0x79bddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDDCu;
        // 0x79bde0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bddc) {
            ctx->pc = 0x79BE68u;
            goto label_79be68;
        }
    }
    ctx->pc = 0x79BDE4u;
label_79bde4:
    // 0x79bde4: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x79BDE4u;
    {
        const bool branch_taken_0x79bde4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bde4) {
            ctx->pc = 0x79BE68u;
            goto label_79be68;
        }
    }
    ctx->pc = 0x79BDECu;
    // 0x79bdec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x79bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x79bdf0: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x79bdf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x79bdf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79BDF4u;
    {
        const bool branch_taken_0x79bdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDF4u;
        // 0x79bdf8: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bdf4) {
            ctx->pc = 0x79BE14u;
            goto label_79be14;
        }
    }
    ctx->pc = 0x79BDFCu;
    // 0x79bdfc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x79bdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79be00: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x79be00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x79be04: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x79BE04u;
    {
        const bool branch_taken_0x79be04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE04u;
        // 0x79be08: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be04) {
            ctx->pc = 0x79BE64u;
            goto label_79be64;
        }
    }
    ctx->pc = 0x79BE0Cu;
    // 0x79be0c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x79BE0Cu;
    {
        const bool branch_taken_0x79be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE0Cu;
        // 0x79be10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be0c) {
            ctx->pc = 0x79BE64u;
            goto label_79be64;
        }
    }
    ctx->pc = 0x79BE14u;
label_79be14:
    // 0x79be14: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x79be14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x79be18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BE18u;
    {
        const bool branch_taken_0x79be18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE18u;
        // 0x79be1c: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be18) {
            ctx->pc = 0x79BE2Cu;
            goto label_79be2c;
        }
    }
    ctx->pc = 0x79BE20u;
    // 0x79be20: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x79be20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_79be24:
    // 0x79be24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x79BE24u;
    {
        const bool branch_taken_0x79be24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE24u;
        // 0x79be28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be24) {
            ctx->pc = 0x79BE68u;
            goto label_79be68;
        }
    }
    ctx->pc = 0x79BE2Cu;
label_79be2c:
    // 0x79be2c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x79be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x79be30: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x79be30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79be34: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BE34u;
    {
        const bool branch_taken_0x79be34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79be34) {
            ctx->pc = 0x79BE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BE34u;
            // 0x79be38: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BE48u;
            goto label_79be48;
        }
    }
    ctx->pc = 0x79BE3Cu;
    // 0x79be3c: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x79be3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x79be40: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x79be40u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x79be44: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x79be44u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_79be48:
    // 0x79be48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79be48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79be4c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x79be4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x79be50: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x79be50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x79be54: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BE54u;
    {
        const bool branch_taken_0x79be54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79be54) {
            ctx->pc = 0x79BE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BE54u;
            // 0x79be58: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BE68u;
            goto label_79be68;
        }
    }
    ctx->pc = 0x79BE5Cu;
    // 0x79be5c: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x79be5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x79be60: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79be60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79be64:
    // 0x79be64: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x79be64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_79be68:
    // 0x79be68: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x79be68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x79be6c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x79be6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x79be70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79be70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79be74: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x79be74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x79be78: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x79be78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79be7c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79be7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79be80: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x79be80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x79be84: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x79be84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x79be88: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x79be88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x79be8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79be8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79be90: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x79be90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x79be94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79be94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79be98: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x79be98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x79be9c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79be9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79bea0: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x79bea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x79bea4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79bea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79bea8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x79bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79beac: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x79beacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x79beb0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x79beb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79beb4: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x79beb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x79beb8: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x79beb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x79bebc: 0x3e00008  jr          $ra
    ctx->pc = 0x79BEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEBCu;
        // 0x79bec0: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BEC4u;
    // 0x79bec4: 0x0  nop
    ctx->pc = 0x79bec4u;
    // NOP
    ctx->pc = 0x79bec8u;
}
} // namespace gh_r022
