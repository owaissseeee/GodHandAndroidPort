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

// Function: _$_22_IO_istream_withassign
// Address: 0x3899d8 - 0x389ab8
void ps2____22_IO_istream_withassign_0x3899d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____22_IO_istream_withassign_0x3899d8");
#endif

    switch (ctx->pc) {
        case 0x389a8cu: goto label_389a8c;
        case 0x389aa0u: goto label_389aa0;
        default: break;
    }

    ctx->pc = 0x3899d8u;

    // 0x3899d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3899d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3899dc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3899dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3899e0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3899e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3899e4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3899e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3899e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3899e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3899ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3899ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3899f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3899f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3899f4: 0x2444d148  addiu       $a0, $v0, -0x2EB8
    ctx->pc = 0x3899f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955336));
    // 0x3899f8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3899f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3899fc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3899fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389a00: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x389A00u;
    {
        const bool branch_taken_0x389a00 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x389A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A00u;
        // 0x389a04: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a00) {
            ctx->pc = 0x389A34u;
            goto label_389a34;
        }
    }
    ctx->pc = 0x389A08u;
    // 0x389a08: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x389a08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x389a0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x389a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x389a10: 0xdc46d148  ld          $a2, -0x2EB8($v0)
    ctx->pc = 0x389a10u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294955336)));
    // 0x389a14: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x389a14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x389a18: 0x24e2fff8  addiu       $v0, $a3, -0x8
    ctx->pc = 0x389a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x389a1c: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x389a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x389a20: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x389a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x389a24: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x389a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x389a28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x389a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x389a2c: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x389a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x389a30: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x389a30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_389a34:
    // 0x389a34: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x389a34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x389a38: 0x2524fff8  addiu       $a0, $t1, -0x8
    ctx->pc = 0x389a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x389a3c: 0x24e2d168  addiu       $v0, $a3, -0x2E98
    ctx->pc = 0x389a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955368));
    // 0x389a40: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x389a40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x389a44: 0xad220028  sw          $v0, 0x28($t1)
    ctx->pc = 0x389a44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
    // 0x389a48: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x389a48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x389a4c: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x389a4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x389a50: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x389a50u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x389a54: 0xdce5d168  ld          $a1, -0x2E98($a3)
    ctx->pc = 0x389a54u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294955368)));
    // 0x389a58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x389a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x389a5c: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x389a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x389a60: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x389a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x389a64: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x389a64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x389a68: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x389A68u;
    {
        const bool branch_taken_0x389a68 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x389A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A68u;
        // 0x389a6c: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a68) {
            ctx->pc = 0x389A8Cu;
            goto label_389a8c;
        }
    }
    ctx->pc = 0x389A70u;
    // 0x389a70: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x389a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x389a74: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x389a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x389a78: 0x2442d340  addiu       $v0, $v0, -0x2CC0
    ctx->pc = 0x389a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955840));
    // 0x389a7c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389A7Cu;
    {
        const bool branch_taken_0x389a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A7Cu;
        // 0x389a80: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a7c) {
            ctx->pc = 0x389A8Cu;
            goto label_389a8c;
        }
    }
    ctx->pc = 0x389A84u;
    // 0x389a84: 0xc0c3d72  jal         func_30F5C8
    ctx->pc = 0x389A84u;
    SET_GPR_U32(ctx, 31, 0x389A8Cu);
    ctx->pc = 0x30F5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5C8u, 0x389A84u, 0x389A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389A8Cu;
label_389a8c:
    // 0x389a8c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x389a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x389a90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x389A90u;
    {
        const bool branch_taken_0x389a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x389A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A90u;
        // 0x389a94: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a90) {
            ctx->pc = 0x389AA4u;
            goto label_389aa4;
        }
    }
    ctx->pc = 0x389A98u;
    // 0x389a98: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x389A98u;
    SET_GPR_U32(ctx, 31, 0x389AA0u);
    ctx->pc = 0x389A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389A98u;
    // 0x389a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x389A98u, 0x389AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389AA0u;
label_389aa0:
    // 0x389aa0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x389aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_389aa4:
    // 0x389aa4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x389aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x389aa8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x389aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389aac: 0x3e00008  jr          $ra
    ctx->pc = 0x389AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389AACu;
        // 0x389ab0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389AB4u;
    // 0x389ab4: 0x0  nop
    ctx->pc = 0x389ab4u;
    // NOP
    ctx->pc = 0x389ab8u;
}
