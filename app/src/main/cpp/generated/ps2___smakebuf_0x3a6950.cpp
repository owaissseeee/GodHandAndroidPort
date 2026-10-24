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

// Function: __smakebuf
// Address: 0x3a6950 - 0x3a6a20
void ps2___smakebuf_0x3a6950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___smakebuf_0x3a6950");
#endif

    switch (ctx->pc) {
        case 0x3a699cu: goto label_3a699c;
        default: break;
    }

    ctx->pc = 0x3a6950u;

    // 0x3a6950: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a6950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3a6954: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3a6954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3a6958: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a6958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3a695c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a695cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6960: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3a6960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a6964: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3a6964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3a6968: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6968u;
    {
        const bool branch_taken_0x3a6968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6968u;
        // 0x3a696c: 0x26030043  addiu       $v1, $s0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6968) {
            ctx->pc = 0x3A6984u;
            goto label_3a6984;
        }
    }
    ctx->pc = 0x3A6970u;
    // 0x3a6970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a6970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6974: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3a6974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x3a6978: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x3a6978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x3a697c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3A697Cu;
    {
        const bool branch_taken_0x3a697c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A697Cu;
        // 0x3a6980: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a697c) {
            ctx->pc = 0x3A6A04u;
            goto label_3a6a04;
        }
    }
    ctx->pc = 0x3A6984u;
label_3a6984:
    // 0x3a6984: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3a6984u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3a6988: 0x4a20014  bltzl       $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A6988u;
    {
        const bool branch_taken_0x3a6988 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x3a6988) {
            ctx->pc = 0x3A698Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6988u;
            // 0x3a698c: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A69DCu;
            goto label_3a69dc;
        }
    }
    ctx->pc = 0x3A6990u;
    // 0x3a6990: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3a6990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3a6994: 0xc0eb7ea  jal         func_3ADFA8
    ctx->pc = 0x3A6994u;
    SET_GPR_U32(ctx, 31, 0x3A699Cu);
    ctx->pc = 0x3A6998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6994u;
    // 0x3a6998: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADFA8u, 0x3A6994u, 0x3A699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A699Cu;
label_3a699c:
    // 0x3a699c: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A699Cu;
    {
        const bool branch_taken_0x3a699c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3A69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A699Cu;
        // 0x3a69a0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a699c) {
            ctx->pc = 0x3A69D8u;
            goto label_3a69d8;
        }
    }
    ctx->pc = 0x3A69A4u;
    // 0x3a69a4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x3a69a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3a69a8: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x3a69a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x3a69ac: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3A69ACu;
    {
        const bool branch_taken_0x3a69ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a69ac) {
            ctx->pc = 0x3A69B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A69ACu;
            // 0x3a69b0: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A69DCu;
            goto label_3a69dc;
        }
    }
    ctx->pc = 0x3A69B4u;
    // 0x3a69b4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3a69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3a69b8: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x3a69b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3a69bc: 0x24426e60  addiu       $v0, $v0, 0x6E60
    ctx->pc = 0x3a69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28256));
    // 0x3a69c0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A69C0u;
    {
        const bool branch_taken_0x3a69c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A69C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69C0u;
        // 0x3a69c4: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a69c0) {
            ctx->pc = 0x3A69DCu;
            goto label_3a69dc;
        }
    }
    ctx->pc = 0x3A69C8u;
    // 0x3a69c8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3a69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3a69cc: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x3a69ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x3a69d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A69D0u;
    {
        const bool branch_taken_0x3a69d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A69D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A69D0u;
        // 0x3a69d4: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a69d0) {
            ctx->pc = 0x3A69E0u;
            goto label_3a69e0;
        }
    }
    ctx->pc = 0x3A69D8u;
label_3a69d8:
    // 0x3a69d8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3a69d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_3a69dc:
    // 0x3a69dc: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3a69dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_3a69e0:
    // 0x3a69e0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3a69e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a69e4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3a69e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3a69e8: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x3a69e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x3a69ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a69ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a69f0: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x3a69f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x3a69f4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3a69f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3a69f8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3a69f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x3a69fc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x3a69fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a6a00: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3a6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3a6a04:
    // 0x3a6a04: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3a6a04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a6a08: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a6a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a6a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6A0Cu;
        // 0x3a6a10: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6A14u;
    // 0x3a6a14: 0x0  nop
    ctx->pc = 0x3a6a14u;
    // NOP
    // 0x3a6a18: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3a6a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3a6a1c: 0x0  nop
    ctx->pc = 0x3a6a1cu;
    // NOP
    ctx->pc = 0x3a6a20u;
}
