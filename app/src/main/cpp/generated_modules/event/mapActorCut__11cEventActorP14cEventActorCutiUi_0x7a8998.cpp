#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: mapActorCut__11cEventActorP14cEventActorCutiUi
// Address: 0x7a8998 - 0x7a8b40
void mapActorCut__11cEventActorP14cEventActorCutiUi_0x7a8998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapActorCut__11cEventActorP14cEventActorCutiUi_0x7a8998");
#endif

    switch (ctx->pc) {
        case 0x7a89b8u: goto label_7a89b8;
        default: break;
    }

    ctx->pc = 0x7a8998u;

    // 0x7a8998: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x7a8998u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a899c: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x7a899cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7a89a0: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x7a89a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7a89a4: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x7a89a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a89a8: 0x18c00062  blez        $a2, . + 4 + (0x62 << 2)
    ctx->pc = 0x7A89A8u;
    {
        const bool branch_taken_0x7a89a8 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x7A89ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A89A8u;
        // 0x7a89ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a89a8) {
            ctx->pc = 0x7A8B34u;
            goto label_7a8b34;
        }
    }
    ctx->pc = 0x7A89B0u;
    // 0x7a89b0: 0x240c001c  addiu       $t4, $zero, 0x1C
    ctx->pc = 0x7a89b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7a89b4: 0x2488ffe4  addiu       $t0, $a0, -0x1C
    ctx->pc = 0x7a89b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967268));
label_7a89b8:
    // 0x7a89b8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7a89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7a89bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x7A89BCu;
    {
        const bool branch_taken_0x7a89bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A89BCu;
        // 0x7a89c0: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a89bc) {
            ctx->pc = 0x7A89C8u;
            goto label_7a89c8;
        }
    }
    ctx->pc = 0x7A89C4u;
    // 0x7a89c4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7a89c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_7a89c8:
    // 0x7a89c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x7a89c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x7a89cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7A89CCu;
    {
        const bool branch_taken_0x7a89cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A89D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A89CCu;
        // 0x7a89d0: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a89cc) {
            ctx->pc = 0x7A89F8u;
            goto label_7a89f8;
        }
    }
    ctx->pc = 0x7A89D4u;
    // 0x7a89d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x7a89d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7a89d8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x7a89d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x7a89dc: 0xa089000c  sb          $t1, 0xC($a0)
    ctx->pc = 0x7a89dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 9));
    // 0x7a89e0: 0xa089000d  sb          $t1, 0xD($a0)
    ctx->pc = 0x7a89e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 9));
    // 0x7a89e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x7A89E4u;
    {
        const bool branch_taken_0x7a89e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A89E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A89E4u;
        // 0x7a89e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a89e4) {
            ctx->pc = 0x7A89F0u;
            goto label_7a89f0;
        }
    }
    ctx->pc = 0x7A89ECu;
    // 0x7a89ec: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x7a89ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_7a89f0:
    // 0x7a89f0: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x7a89f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x7a89f4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x7a89f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_7a89f8:
    // 0x7a89f8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x7a89f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7a89fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7a89fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7a8a00: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x7A8A00u;
    {
        const bool branch_taken_0x7a8a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a8a00) {
            ctx->pc = 0x7A8A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A8A00u;
            // 0x7a8a04: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A8A70u;
            goto label_7a8a70;
        }
    }
    ctx->pc = 0x7A8A08u;
    // 0x7a8a08: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7a8a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7a8a0c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7A8A0Cu;
    {
        const bool branch_taken_0x7a8a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8A0Cu;
        // 0x7a8a10: 0x16c1018  mult        $v0, $t3, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8a0c) {
            ctx->pc = 0x7A8A44u;
            goto label_7a8a44;
        }
    }
    ctx->pc = 0x7A8A14u;
    // 0x7a8a14: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x7a8a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x7a8a18: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7A8A18u;
    {
        const bool branch_taken_0x7a8a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8A18u;
        // 0x7a8a1c: 0x16c1018  mult        $v0, $t3, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8a18) {
            ctx->pc = 0x7A8A44u;
            goto label_7a8a44;
        }
    }
    ctx->pc = 0x7A8A20u;
    // 0x7a8a20: 0x9102000c  lbu         $v0, 0xC($t0)
    ctx->pc = 0x7a8a20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x7a8a24: 0xa082000c  sb          $v0, 0xC($a0)
    ctx->pc = 0x7a8a24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x7a8a28: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x7a8a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x7a8a2c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x7a8a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x7a8a30: 0x9102000d  lbu         $v0, 0xD($t0)
    ctx->pc = 0x7a8a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 13)));
    // 0x7a8a34: 0xa082000d  sb          $v0, 0xD($a0)
    ctx->pc = 0x7a8a34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x7a8a38: 0x9503000e  lhu         $v1, 0xE($t0)
    ctx->pc = 0x7a8a38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
    // 0x7a8a3c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7A8A3Cu;
    {
        const bool branch_taken_0x7a8a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8A3Cu;
        // 0x7a8a40: 0xa483000e  sh          $v1, 0xE($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8a3c) {
            ctx->pc = 0x7A8A6Cu;
            goto label_7a8a6c;
        }
    }
    ctx->pc = 0x7A8A44u;
label_7a8a44:
    // 0x7a8a44: 0xa08b000c  sb          $t3, 0xC($a0)
    ctx->pc = 0x7a8a44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 11));
    // 0x7a8a48: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x7a8a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x7a8a4c: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x7a8a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x7a8a50: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7a8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7a8a54: 0xa089000d  sb          $t1, 0xD($a0)
    ctx->pc = 0x7a8a54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 13), (uint8_t)GPR_U32(ctx, 9));
    // 0x7a8a58: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x7a8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x7a8a5c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x7A8A5Cu;
    {
        const bool branch_taken_0x7a8a5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8A5Cu;
        // 0x7a8a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8a5c) {
            ctx->pc = 0x7A8A68u;
            goto label_7a8a68;
        }
    }
    ctx->pc = 0x7A8A64u;
    // 0x7a8a64: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x7a8a64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_7a8a68:
    // 0x7a8a68: 0xa482000e  sh          $v0, 0xE($a0)
    ctx->pc = 0x7a8a68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 2));
label_7a8a6c:
    // 0x7a8a6c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x7a8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_7a8a70:
    // 0x7a8a70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x7A8A70u;
    {
        const bool branch_taken_0x7a8a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8A70u;
        // 0x7a8a74: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8a70) {
            ctx->pc = 0x7A8A7Cu;
            goto label_7a8a7c;
        }
    }
    ctx->pc = 0x7A8A78u;
    // 0x7a8a78: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x7a8a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_7a8a7c:
    // 0x7a8a7c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x7a8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x7a8a80: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7A8A80u;
    {
        const bool branch_taken_0x7a8a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8A80u;
        // 0x7a8a84: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8a80) {
            ctx->pc = 0x7A8AACu;
            goto label_7a8aac;
        }
    }
    ctx->pc = 0x7A8A88u;
    // 0x7a8a88: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x7a8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x7a8a8c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x7a8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x7a8a90: 0xa0890018  sb          $t1, 0x18($a0)
    ctx->pc = 0x7a8a90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 9));
    // 0x7a8a94: 0xa0890019  sb          $t1, 0x19($a0)
    ctx->pc = 0x7a8a94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 9));
    // 0x7a8a98: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x7A8A98u;
    {
        const bool branch_taken_0x7a8a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8A98u;
        // 0x7a8a9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8a98) {
            ctx->pc = 0x7A8AA4u;
            goto label_7a8aa4;
        }
    }
    ctx->pc = 0x7A8AA0u;
    // 0x7a8aa0: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x7a8aa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_7a8aa4:
    // 0x7a8aa4: 0xa482001a  sh          $v0, 0x1A($a0)
    ctx->pc = 0x7a8aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x7a8aa8: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x7a8aa8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_7a8aac:
    // 0x7a8aac: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x7a8aacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7a8ab0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x7a8ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x7a8ab4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x7A8AB4u;
    {
        const bool branch_taken_0x7a8ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a8ab4) {
            ctx->pc = 0x7A8AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A8AB4u;
            // 0x7a8ab8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A8B24u;
            goto label_7a8b24;
        }
    }
    ctx->pc = 0x7A8ABCu;
    // 0x7a8abc: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x7a8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x7a8ac0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7A8AC0u;
    {
        const bool branch_taken_0x7a8ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8AC0u;
        // 0x7a8ac4: 0x14c1018  mult        $v0, $t2, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8ac0) {
            ctx->pc = 0x7A8AF8u;
            goto label_7a8af8;
        }
    }
    ctx->pc = 0x7A8AC8u;
    // 0x7a8ac8: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x7a8ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x7a8acc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7A8ACCu;
    {
        const bool branch_taken_0x7a8acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8ACCu;
        // 0x7a8ad0: 0x14c1018  mult        $v0, $t2, $t4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8acc) {
            ctx->pc = 0x7A8AF8u;
            goto label_7a8af8;
        }
    }
    ctx->pc = 0x7A8AD4u;
    // 0x7a8ad4: 0x91020018  lbu         $v0, 0x18($t0)
    ctx->pc = 0x7a8ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x7a8ad8: 0xa0820018  sb          $v0, 0x18($a0)
    ctx->pc = 0x7a8ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x7a8adc: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x7a8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x7a8ae0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x7a8ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x7a8ae4: 0x91020019  lbu         $v0, 0x19($t0)
    ctx->pc = 0x7a8ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 25)));
    // 0x7a8ae8: 0xa0820019  sb          $v0, 0x19($a0)
    ctx->pc = 0x7a8ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x7a8aec: 0x9503001a  lhu         $v1, 0x1A($t0)
    ctx->pc = 0x7a8aecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26)));
    // 0x7a8af0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7A8AF0u;
    {
        const bool branch_taken_0x7a8af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8AF0u;
        // 0x7a8af4: 0xa483001a  sh          $v1, 0x1A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8af0) {
            ctx->pc = 0x7A8B20u;
            goto label_7a8b20;
        }
    }
    ctx->pc = 0x7A8AF8u;
label_7a8af8:
    // 0x7a8af8: 0xa08a0018  sb          $t2, 0x18($a0)
    ctx->pc = 0x7a8af8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 10));
    // 0x7a8afc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x7a8afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x7a8b00: 0x4d1821  addu        $v1, $v0, $t5
    ctx->pc = 0x7a8b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x7a8b04: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x7a8b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x7a8b08: 0xa0890019  sb          $t1, 0x19($a0)
    ctx->pc = 0x7a8b08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 25), (uint8_t)GPR_U32(ctx, 9));
    // 0x7a8b0c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x7a8b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x7a8b10: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x7A8B10u;
    {
        const bool branch_taken_0x7a8b10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8B10u;
        // 0x7a8b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8b10) {
            ctx->pc = 0x7A8B1Cu;
            goto label_7a8b1c;
        }
    }
    ctx->pc = 0x7A8B18u;
    // 0x7a8b18: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x7a8b18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_7a8b1c:
    // 0x7a8b1c: 0xa482001a  sh          $v0, 0x1A($a0)
    ctx->pc = 0x7a8b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 2));
label_7a8b20:
    // 0x7a8b20: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x7a8b20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_7a8b24:
    // 0x7a8b24: 0x2508001c  addiu       $t0, $t0, 0x1C
    ctx->pc = 0x7a8b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28));
    // 0x7a8b28: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x7a8b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x7a8b2c: 0x1440ffa2  bnez        $v0, . + 4 + (-0x5E << 2)
    ctx->pc = 0x7A8B2Cu;
    {
        const bool branch_taken_0x7a8b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A8B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8B2Cu;
        // 0x7a8b30: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8b2c) {
            ctx->pc = 0x7A89B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a89b8;
        }
    }
    ctx->pc = 0x7A8B34u;
label_7a8b34:
    // 0x7a8b34: 0x3e00008  jr          $ra
    ctx->pc = 0x7A8B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A8B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A8B3Cu;
    // 0x7a8b3c: 0x0  nop
    ctx->pc = 0x7a8b3cu;
    // NOP
    ctx->pc = 0x7a8b40u;
}
} // namespace gh_event
