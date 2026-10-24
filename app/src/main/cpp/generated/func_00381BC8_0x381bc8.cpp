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

// Function: func_00381BC8
// Address: 0x381bc8 - 0x381ce0
void func_00381BC8_0x381bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381BC8_0x381bc8");
#endif

    switch (ctx->pc) {
        case 0x381bf8u: goto label_381bf8;
        case 0x381c14u: goto label_381c14;
        case 0x381c20u: goto label_381c20;
        case 0x381c30u: goto label_381c30;
        case 0x381c3cu: goto label_381c3c;
        case 0x381c48u: goto label_381c48;
        case 0x381ca0u: goto label_381ca0;
        case 0x381cb0u: goto label_381cb0;
        case 0x381cc0u: goto label_381cc0;
        default: break;
    }

    ctx->pc = 0x381bc8u;

    // 0x381bc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x381bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x381bcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x381bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x381bd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x381bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381bd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x381bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x381bd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x381bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x381bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x381bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381be0: 0x26510030  addiu       $s1, $s2, 0x30
    ctx->pc = 0x381be0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x381be4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x381be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381be8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x381be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x381bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381bf0: 0xc0e06ce  jal         func_381B38
    ctx->pc = 0x381BF0u;
    SET_GPR_U32(ctx, 31, 0x381BF8u);
    ctx->pc = 0x381BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381BF0u;
    // 0x381bf4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381B38u, 0x381BF0u, 0x381BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381BF8u;
label_381bf8:
    // 0x381bf8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x381BF8u;
    {
        const bool branch_taken_0x381bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x381bf8) {
            ctx->pc = 0x381BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x381BF8u;
            // 0x381bfc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x381C0Cu;
            goto label_381c0c;
        }
    }
    ctx->pc = 0x381C00u;
    // 0x381c00: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x381c00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x381c04: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x381C04u;
    {
        const bool branch_taken_0x381c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C04u;
        // 0x381c08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c04) {
            ctx->pc = 0x381CC4u;
            goto label_381cc4;
        }
    }
    ctx->pc = 0x381C0Cu;
label_381c0c:
    // 0x381c0c: 0xc0cb7a2  jal         func_32DE88
    ctx->pc = 0x381C0Cu;
    SET_GPR_U32(ctx, 31, 0x381C14u);
    ctx->pc = 0x381C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381C0Cu;
    // 0x381c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DE88u, 0x381C0Cu, 0x381C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381C14u;
label_381c14:
    // 0x381c14: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x381c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x381c18: 0xc0cb7be  jal         func_32DEF8
    ctx->pc = 0x381C18u;
    SET_GPR_U32(ctx, 31, 0x381C20u);
    ctx->pc = 0x381C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381C18u;
    // 0x381c1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEF8u, 0x381C18u, 0x381C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381C20u;
label_381c20:
    // 0x381c20: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x381c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x381c24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x381c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x381c28: 0xc0cb7dc  jal         func_32DF70
    ctx->pc = 0x381C28u;
    SET_GPR_U32(ctx, 31, 0x381C30u);
    ctx->pc = 0x381C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381C28u;
    // 0x381c2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF70u, 0x381C28u, 0x381C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381C30u;
label_381c30:
    // 0x381c30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381c34: 0xc0e0876  jal         func_3821D8
    ctx->pc = 0x381C34u;
    SET_GPR_U32(ctx, 31, 0x381C3Cu);
    ctx->pc = 0x381C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381C34u;
    // 0x381c38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3821D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3821D8u, 0x381C34u, 0x381C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381C3Cu;
label_381c3c:
    // 0x381c3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x381c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381c40: 0xc0e096a  jal         func_3825A8
    ctx->pc = 0x381C40u;
    SET_GPR_U32(ctx, 31, 0x381C48u);
    ctx->pc = 0x381C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381C40u;
    // 0x381c44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3825A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3825A8u, 0x381C40u, 0x381C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381C48u;
label_381c48:
    // 0x381c48: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x381c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x381c4c: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x381c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x381c50: 0xdc65c7f0  ld          $a1, -0x3810($v1)
    ctx->pc = 0x381c50u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x45C7F0u));
    // 0x381c54: 0x2464c7f0  addiu       $a0, $v1, -0x3810
    ctx->pc = 0x381c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952944));
    // 0x381c58: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x381c58u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x45C7F8u));
    // 0x381c5c: 0x2447bf80  addiu       $a3, $v0, -0x4080
    ctx->pc = 0x381c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950784));
    // 0x381c60: 0x9086000a  lbu         $a2, 0xA($a0)
    ctx->pc = 0x381c60u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)FAST_READ8(0x45C7FAu));
    // 0x381c64: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x381c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381c68: 0xfc45bf80  sd          $a1, -0x4080($v0)
    ctx->pc = 0x381c68u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x77BF80u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x77BF80u, _value); } while (0);
    // 0x381c6c: 0xa4e30008  sh          $v1, 0x8($a3)
    ctx->pc = 0x381c6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x77BF88u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x77BF88u, _value); } while (0);
    // 0x381c70: 0xa0e6000a  sb          $a2, 0xA($a3)
    ctx->pc = 0x381c70u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x77BF8Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x77BF8Au, _value); } while (0);
    // 0x381c74: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x381c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x381c78: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x381c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x381c7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381C7Cu;
    {
        const bool branch_taken_0x381c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x381C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C7Cu;
        // 0x381c80: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c7c) {
            ctx->pc = 0x381C90u;
            goto label_381c90;
        }
    }
    ctx->pc = 0x381C84u;
    // 0x381c84: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x381c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x381c88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x381C88u;
    {
        const bool branch_taken_0x381c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x381C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381C88u;
        // 0x381c8c: 0x2445c800  addiu       $a1, $v0, -0x3800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381c88) {
            ctx->pc = 0x381C98u;
            goto label_381c98;
        }
    }
    ctx->pc = 0x381C90u;
label_381c90:
    // 0x381c90: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x381c90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x381c94: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x381c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_381c98:
    // 0x381c98: 0xc0e94ea  jal         func_3A53A8
    ctx->pc = 0x381C98u;
    SET_GPR_U32(ctx, 31, 0x381CA0u);
    ctx->pc = 0x381C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381C98u;
    // 0x381c9c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53A8u, 0x381C98u, 0x381CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381CA0u;
label_381ca0:
    // 0x381ca0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x381ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x381ca4: 0x2665bf80  addiu       $a1, $s3, -0x4080
    ctx->pc = 0x381ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950784));
    // 0x381ca8: 0xc0cb66e  jal         func_32D9B8
    ctx->pc = 0x381CA8u;
    SET_GPR_U32(ctx, 31, 0x381CB0u);
    ctx->pc = 0x381CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381CA8u;
    // 0x381cac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D9B8u, 0x381CA8u, 0x381CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381CB0u;
label_381cb0:
    // 0x381cb0: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x381cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x381cb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x381cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381cb8: 0xc0cb810  jal         func_32E040
    ctx->pc = 0x381CB8u;
    SET_GPR_U32(ctx, 31, 0x381CC0u);
    ctx->pc = 0x381CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381CB8u;
    // 0x381cbc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E040u, 0x381CB8u, 0x381CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381CC0u;
label_381cc0:
    // 0x381cc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x381cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_381cc4:
    // 0x381cc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x381cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x381cc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x381cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x381ccc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x381cccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381cd0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x381cd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x381CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381CD8u;
        // 0x381cdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381CE0u;
}
