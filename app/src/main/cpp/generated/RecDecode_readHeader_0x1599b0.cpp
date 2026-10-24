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

// Function: RecDecode_readHeader
// Address: 0x1599b0 - 0x159ad0
void RecDecode_readHeader_0x1599b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RecDecode_readHeader_0x1599b0");
#endif

    switch (ctx->pc) {
        case 0x159aacu: goto label_159aac;
        default: break;
    }

    ctx->pc = 0x1599b0u;

    // 0x1599b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1599b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1599b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1599b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1599b8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1599b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1599bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1599bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1599c0: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x1599c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x1599c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1599c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1599c8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1599c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1599cc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1599ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1599d0: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1599D0u;
    {
        const bool branch_taken_0x1599d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1599D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599D0u;
        // 0x1599d4: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599d0) {
            ctx->pc = 0x159A00u;
            goto label_159a00;
        }
    }
    ctx->pc = 0x1599D8u;
    // 0x1599d8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1599d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1599dc: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x1599DCu;
    {
        const bool branch_taken_0x1599dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1599dc) {
            ctx->pc = 0x1599E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1599DCu;
            // 0x1599e0: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x159ABCu;
            goto label_159abc;
        }
    }
    ctx->pc = 0x1599E4u;
    // 0x1599e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1599e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1599e8: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1599E8u;
    {
        const bool branch_taken_0x1599e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1599ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599E8u;
        // 0x1599ec: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599e8) {
            ctx->pc = 0x159A3Cu;
            goto label_159a3c;
        }
    }
    ctx->pc = 0x1599F0u;
    // 0x1599f0: 0x50820021  beql        $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1599F0u;
    {
        const bool branch_taken_0x1599f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1599f0) {
            ctx->pc = 0x1599F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1599F0u;
            // 0x1599f4: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159A78u;
            goto label_159a78;
        }
    }
    ctx->pc = 0x1599F8u;
    // 0x1599f8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1599F8u;
    {
        const bool branch_taken_0x1599f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1599FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599F8u;
        // 0x1599fc: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1599f8) {
            ctx->pc = 0x159ABCu;
            goto label_159abc;
        }
    }
    ctx->pc = 0x159A00u;
label_159a00:
    // 0x159a00: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x159a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x159a04: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x159a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x159a08: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x159a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x159a0c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x159a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x159a10: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x159a10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x159a14: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x159a14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x159a18: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x159a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x159a1c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x159A1Cu;
    {
        const bool branch_taken_0x159a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159a1c) {
            ctx->pc = 0x159A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159A1Cu;
            // 0x159a20: 0xace00010  sw          $zero, 0x10($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159AB4u;
            goto label_159ab4;
        }
    }
    ctx->pc = 0x159A24u;
    // 0x159a24: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x159a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x159a28: 0xa4e0000c  sh          $zero, 0xC($a3)
    ctx->pc = 0x159a28u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x159a2c: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x159a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x159a30: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x159a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a34: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x159A34u;
    {
        const bool branch_taken_0x159a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A34u;
        // 0x159a38: 0x90a20010  lbu         $v0, 0x10($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a34) {
            ctx->pc = 0x159AA4u;
            goto label_159aa4;
        }
    }
    ctx->pc = 0x159A3Cu;
label_159a3c:
    // 0x159a3c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x159a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x159a40: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x159a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x159a44: 0x24a30018  addiu       $v1, $a1, 0x18
    ctx->pc = 0x159a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x159a48: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x159a48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x159a4c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x159a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x159a50: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x159a50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x159a54: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x159a54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x159a58: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x159A58u;
    {
        const bool branch_taken_0x159a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159a58) {
            ctx->pc = 0x159A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159A58u;
            // 0x159a5c: 0xace00010  sw          $zero, 0x10($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159AB4u;
            goto label_159ab4;
        }
    }
    ctx->pc = 0x159A60u;
    // 0x159a60: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x159a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x159a64: 0xa4e0000c  sh          $zero, 0xC($a3)
    ctx->pc = 0x159a64u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x159a68: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x159a68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x159a6c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x159a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159a70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x159A70u;
    {
        const bool branch_taken_0x159a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A70u;
        // 0x159a74: 0x94a20020  lhu         $v0, 0x20($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159a70) {
            ctx->pc = 0x159AA4u;
            goto label_159aa4;
        }
    }
    ctx->pc = 0x159A78u;
label_159a78:
    // 0x159a78: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x159a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x159a7c: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x159a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x159a80: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x159a80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x159a84: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x159a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x159a88: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x159A88u;
    {
        const bool branch_taken_0x159a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x159a88) {
            ctx->pc = 0x159A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159A88u;
            // 0x159a8c: 0xace00010  sw          $zero, 0x10($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159AB4u;
            goto label_159ab4;
        }
    }
    ctx->pc = 0x159A90u;
    // 0x159a90: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x159a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x159a94: 0xa4e0000c  sh          $zero, 0xC($a3)
    ctx->pc = 0x159a94u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x159a98: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x159a98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x159a9c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x159a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159aa0: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x159aa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_159aa4:
    // 0x159aa4: 0xc056768  jal         func_159DA0
    ctx->pc = 0x159AA4u;
    SET_GPR_U32(ctx, 31, 0x159AACu);
    ctx->pc = 0x159AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159AA4u;
    // 0x159aa8: 0xa4e2000e  sh          $v0, 0xE($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159DA0u, 0x159AA4u, 0x159AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AACu;
label_159aac:
    // 0x159aac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x159AACu;
    {
        const bool branch_taken_0x159aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AACu;
        // 0x159ab0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159aac) {
            ctx->pc = 0x159AC4u;
            goto label_159ac4;
        }
    }
    ctx->pc = 0x159AB4u;
label_159ab4:
    // 0x159ab4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x159AB4u;
    {
        const bool branch_taken_0x159ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AB4u;
        // 0x159ab8: 0xa0e00000  sb          $zero, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159ab4) {
            ctx->pc = 0x159AC0u;
            goto label_159ac0;
        }
    }
    ctx->pc = 0x159ABCu;
label_159abc:
    // 0x159abc: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x159abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_159ac0:
    // 0x159ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x159ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159ac4:
    // 0x159ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x159AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AC4u;
        // 0x159ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159ACCu;
    // 0x159acc: 0x0  nop
    ctx->pc = 0x159accu;
    // NOP
    ctx->pc = 0x159ad0u;
}
