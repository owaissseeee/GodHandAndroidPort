#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: titleLoop__5cR020
// Address: 0x79bdc0 - 0x79bf00
void titleLoop__5cR020_0x79bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("titleLoop__5cR020_0x79bdc0");
#endif

    switch (ctx->pc) {
        case 0x79be14u: goto label_79be14;
        case 0x79be38u: goto label_79be38;
        case 0x79be68u: goto label_79be68;
        case 0x79be7cu: goto label_79be7c;
        case 0x79be98u: goto label_79be98;
        case 0x79bea8u: goto label_79bea8;
        default: break;
    }

    ctx->pc = 0x79bdc0u;

    // 0x79bdc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79bdc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79bdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79bdc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79bdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79bdcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79bdccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bdd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79bdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79bdd4: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x79bdd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79bdd8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BDD8u;
    {
        const bool branch_taken_0x79bdd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDD8u;
        // 0x79bddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bdd8) {
            ctx->pc = 0x79BDF0u;
            goto label_79bdf0;
        }
    }
    ctx->pc = 0x79BDE0u;
    // 0x79bde0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79BDE0u;
    {
        const bool branch_taken_0x79bde0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDE0u;
        // 0x79bde4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bde0) {
            ctx->pc = 0x79BE58u;
            goto label_79be58;
        }
    }
    ctx->pc = 0x79BDE8u;
    // 0x79bde8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x79BDE8u;
    {
        const bool branch_taken_0x79bde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BDE8u;
        // 0x79bdec: 0x7bb10010  lq          $s1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bde8) {
            ctx->pc = 0x79BEF0u;
            goto label_79bef0;
        }
    }
    ctx->pc = 0x79BDF0u;
label_79bdf0:
    // 0x79bdf0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x79bdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79bdf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79bdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bdf8: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x79bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79bdfc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79bdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79be00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79be00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79be04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79be04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79be08: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79be08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x79be0c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x79BE0Cu;
    SET_GPR_U32(ctx, 31, 0x79BE14u);
    ctx->pc = 0x79BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE0Cu;
    // 0x79be10: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x79BE0Cu, 0x79BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE14u;
label_79be14:
    // 0x79be14: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79be14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79be18: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x79be18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x79be1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79be1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79be20: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x79be20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79be24: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x79be24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79be28: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x79be28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x79be2c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x79be2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x79be30: 0xc0b45da  jal         func_2D1768
    ctx->pc = 0x79BE30u;
    SET_GPR_U32(ctx, 31, 0x79BE38u);
    ctx->pc = 0x79BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE30u;
    // 0x79be34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1768u, 0x79BE30u, 0x79BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE38u;
label_79be38:
    // 0x79be38: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x79be38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x79be3c: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x79be3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79be40: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x79be40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79be44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79be44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79be48: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x79be48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x79be4c: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x79be4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x79be50: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x79be50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x79be54: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79be54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79be58:
    // 0x79be58: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79be58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79be5c: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x79be5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x79be60: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79BE60u;
    SET_GPR_U32(ctx, 31, 0x79BE68u);
    ctx->pc = 0x79BE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE60u;
    // 0x79be64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79BE60u, 0x79BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE68u;
label_79be68:
    // 0x79be68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79be68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79be6c: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x79BE6Cu;
    {
        const bool branch_taken_0x79be6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79be6c) {
            ctx->pc = 0x79BE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BE6Cu;
            // 0x79be70: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BEECu;
            goto label_79beec;
        }
    }
    ctx->pc = 0x79BE74u;
    // 0x79be74: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79BE74u;
    SET_GPR_U32(ctx, 31, 0x79BE7Cu);
    ctx->pc = 0x79BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE74u;
    // 0x79be78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79BE74u, 0x79BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE7Cu;
label_79be7c:
    // 0x79be7c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x79be7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x79be80: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x79BE80u;
    {
        const bool branch_taken_0x79be80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE80u;
        // 0x79be84: 0x26300080  addiu       $s0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be80) {
            ctx->pc = 0x79BEE8u;
            goto label_79bee8;
        }
    }
    ctx->pc = 0x79BE88u;
    // 0x79be88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79be88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79be8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79be8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79be90: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79BE90u;
    SET_GPR_U32(ctx, 31, 0x79BE98u);
    ctx->pc = 0x79BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE90u;
    // 0x79be94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79BE90u, 0x79BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE98u;
label_79be98:
    // 0x79be98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79be9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79be9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bea0: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x79BEA0u;
    SET_GPR_U32(ctx, 31, 0x79BEA8u);
    ctx->pc = 0x79BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BEA0u;
    // 0x79bea4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x79BEA0u, 0x79BEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BEA8u;
label_79bea8:
    // 0x79bea8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79bea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79beac: 0x8c627a34  lw          $v0, 0x7A34($v1)
    ctx->pc = 0x79beacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x79beb0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x79beb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x79beb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79BEB4u;
    {
        const bool branch_taken_0x79beb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEB4u;
        // 0x79beb8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79beb4) {
            ctx->pc = 0x79BED8u;
            goto label_79bed8;
        }
    }
    ctx->pc = 0x79BEBCu;
    // 0x79bebc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x79bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x79bec0: 0x54440006  bnel        $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79BEC0u;
    {
        const bool branch_taken_0x79bec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x79bec0) {
            ctx->pc = 0x79BEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BEC0u;
            // 0x79bec4: 0xa2240000  sb          $a0, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BEDCu;
            goto label_79bedc;
        }
    }
    ctx->pc = 0x79BEC8u;
    // 0x79bec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79bec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79becc: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79beccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bed0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79BED0u;
    {
        const bool branch_taken_0x79bed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BED0u;
        // 0x79bed4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bed0) {
            ctx->pc = 0x79BEE0u;
            goto label_79bee0;
        }
    }
    ctx->pc = 0x79BED8u;
label_79bed8:
    // 0x79bed8: 0xa2240000  sb          $a0, 0x0($s1)
    ctx->pc = 0x79bed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
label_79bedc:
    // 0x79bedc: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79bedcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79bee0:
    // 0x79bee0: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x79bee0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bee4: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x79bee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_79bee8:
    // 0x79bee8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79bee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79beec:
    // 0x79beec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79beecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79bef0:
    // 0x79bef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bef4: 0x3e00008  jr          $ra
    ctx->pc = 0x79BEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BEF4u;
        // 0x79bef8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BEFCu;
    // 0x79befc: 0x0  nop
    ctx->pc = 0x79befcu;
    // NOP
    ctx->pc = 0x79bf00u;
}
} // namespace gh_r020
