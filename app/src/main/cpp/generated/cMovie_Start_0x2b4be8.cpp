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

// Function: cMovie_Start
// Address: 0x2b4be8 - 0x2b4d38
void cMovie_Start_0x2b4be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMovie_Start_0x2b4be8");
#endif

    switch (ctx->pc) {
        case 0x2b4c08u: goto label_2b4c08;
        case 0x2b4c68u: goto label_2b4c68;
        case 0x2b4c70u: goto label_2b4c70;
        default: break;
    }

    ctx->pc = 0x2b4be8u;

    // 0x2b4be8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b4be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b4bec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b4becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b4bf0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b4bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b4bf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b4bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4bf8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b4bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b4bfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4c00: 0xc0ad3ce  jal         func_2B4F38
    ctx->pc = 0x2B4C00u;
    SET_GPR_U32(ctx, 31, 0x2B4C08u);
    ctx->pc = 0x2B4C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C00u;
    // 0x2b4c04: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F38u, 0x2B4C00u, 0x2B4C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C08u;
label_2b4c08:
    // 0x2b4c08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b4c08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c0c: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4C0Cu;
    {
        const bool branch_taken_0x2b4c0c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x2B4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C0Cu;
        // 0x2b4c10: 0x240300ac  addiu       $v1, $zero, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c0c) {
            ctx->pc = 0x2B4C1Cu;
            goto label_2b4c1c;
        }
    }
    ctx->pc = 0x2B4C14u;
    // 0x2b4c14: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2B4C14u;
    {
        const bool branch_taken_0x2b4c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C14u;
        // 0x2b4c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c14) {
            ctx->pc = 0x2B4D0Cu;
            goto label_2b4d0c;
        }
    }
    ctx->pc = 0x2B4C1Cu;
label_2b4c1c:
    // 0x2b4c1c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b4c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b4c20: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x2b4c20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b4c24: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2b4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2b4c28: 0x8c447a0c  lw          $a0, 0x7A0C($v0)
    ctx->pc = 0x2b4c28u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2b4c2c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4C2Cu;
    {
        const bool branch_taken_0x2b4c2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C2Cu;
        // 0x2b4c30: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c2c) {
            ctx->pc = 0x2B4C48u;
            goto label_2b4c48;
        }
    }
    ctx->pc = 0x2B4C34u;
    // 0x2b4c34: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b4c38: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x2b4c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x2b4c3c: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2b4c3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b4c40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4C40u;
    {
        const bool branch_taken_0x2b4c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C40u;
        // 0x2b4c44: 0x24427bf0  addiu       $v0, $v0, 0x7BF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c40) {
            ctx->pc = 0x2B4C58u;
            goto label_2b4c58;
        }
    }
    ctx->pc = 0x2B4C48u;
label_2b4c48:
    // 0x2b4c48: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b4c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b4c4c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x2b4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x2b4c50: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x2b4c50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b4c54: 0x24427d10  addiu       $v0, $v0, 0x7D10
    ctx->pc = 0x2b4c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32016));
label_2b4c58:
    // 0x2b4c58: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x2b4c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b4c5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b4c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4c60: 0xc0b4eea  jal         func_2D3BA8
    ctx->pc = 0x2B4C60u;
    SET_GPR_U32(ctx, 31, 0x2B4C68u);
    ctx->pc = 0x2B4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C60u;
    // 0x2b4c64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3BA8u, 0x2B4C60u, 0x2B4C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C68u;
label_2b4c68:
    // 0x2b4c68: 0xc0ad3de  jal         func_2B4F78
    ctx->pc = 0x2B4C68u;
    SET_GPR_U32(ctx, 31, 0x2B4C70u);
    ctx->pc = 0x2B4C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4C68u;
    // 0x2b4c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F78u, 0x2B4C68u, 0x2B4C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4C70u;
label_2b4c70:
    // 0x2b4c70: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x2b4c70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2b4c74: 0x26230004  addiu       $v1, $s1, 0x4
    ctx->pc = 0x2b4c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2b4c78: 0x646021  addu        $t4, $v1, $a0
    ctx->pc = 0x2b4c78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4c7c: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x2b4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x2b4c80: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2b4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2b4c84: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2b4c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2b4c88: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B4C88u;
    {
        const bool branch_taken_0x2b4c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4C88u;
        // 0x2b4c8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4c88) {
            ctx->pc = 0x2B4CECu;
            goto label_2b4cec;
        }
    }
    ctx->pc = 0x2B4C90u;
    // 0x2b4c90: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x2b4c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2b4c94: 0x2421004  sllv        $v0, $v0, $s2
    ctx->pc = 0x2b4c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 18) & 0x1F));
    // 0x2b4c98: 0x3c0b0074  lui         $t3, 0x74
    ctx->pc = 0x2b4c98u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)116 << 16));
    // 0x2b4c9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2b4c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2b4ca0: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x2b4ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x2b4ca4: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x2b4ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x2b4ca8: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x2b4ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x2b4cac: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x2b4cacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x2b4cb0: 0x3c0a2000  lui         $t2, 0x2000
    ctx->pc = 0x2b4cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)8192 << 16));
    // 0x2b4cb4: 0x8d627a80  lw          $v0, 0x7A80($t3)
    ctx->pc = 0x2b4cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x2b4cb8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2b4cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2b4cbc: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x2b4cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x2b4cc0: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x2b4cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x2b4cc4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2b4cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2b4cc8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2b4cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2b4ccc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2b4cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2b4cd0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2b4cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2b4cd4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2b4cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2b4cd8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2b4cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2b4cdc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2b4cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2b4ce0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2b4ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2b4ce4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b4ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b4ce8: 0xad627a80  sw          $v0, 0x7A80($t3)
    ctx->pc = 0x2b4ce8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
label_2b4cec:
    // 0x2b4cec: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x2b4cecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x2b4cf0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2b4cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2b4cf4: 0x8ca27a84  lw          $v0, 0x7A84($a1)
    ctx->pc = 0x2b4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A84u));
    // 0x2b4cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b4cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4cfc: 0xac833cd4  sw          $v1, 0x3CD4($a0)
    ctx->pc = 0x2b4cfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3C3CD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C3CD4u, _value); } while (0);
    // 0x2b4d00: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2b4d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2b4d04: 0xaca27a84  sw          $v0, 0x7A84($a1)
    ctx->pc = 0x2b4d04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A84u, _value); } while (0);
    // 0x2b4d08: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x2b4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_2b4d0c:
    // 0x2b4d0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b4d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4d10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b4d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4d14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b4d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D1Cu;
        // 0x2b4d20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4D24u;
    // 0x2b4d24: 0x0  nop
    ctx->pc = 0x2b4d24u;
    // NOP
    // 0x2b4d28: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x2b4d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2b4d2c: 0x0  nop
    ctx->pc = 0x2b4d2cu;
    // NOP
    // 0x2b4d30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4d34: 0x0  nop
    ctx->pc = 0x2b4d34u;
    // NOP
    ctx->pc = 0x2b4d38u;
}
