#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: move_Save__5cR021
// Address: 0x79b380 - 0x79b450
void move_Save__5cR021_0x79b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("move_Save__5cR021_0x79b380");
#endif

    switch (ctx->pc) {
        case 0x79b400u: goto label_79b400;
        default: break;
    }

    ctx->pc = 0x79b380u;

    // 0x79b380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79b384: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79b384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79b388: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79b388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79b38c: 0x24637a2c  addiu       $v1, $v1, 0x7A2C
    ctx->pc = 0x79b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
    // 0x79b390: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b394: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x79b394u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x79b398: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x79b398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x79b39c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x79B39Cu;
    {
        const bool branch_taken_0x79b39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B39Cu;
        // 0x79b3a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b39c) {
            ctx->pc = 0x79B3D0u;
            goto label_79b3d0;
        }
    }
    ctx->pc = 0x79B3A4u;
    // 0x79b3a4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x79b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x79b3a8: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79B3A8u;
    {
        const bool branch_taken_0x79b3a8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x79B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3A8u;
        // 0x79b3ac: 0x211ba  dsrl        $v0, $v0, 6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3a8) {
            ctx->pc = 0x79B3D0u;
            goto label_79b3d0;
        }
    }
    ctx->pc = 0x79B3B0u;
    // 0x79b3b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79b3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79b3b4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x79B3B4u;
    {
        const bool branch_taken_0x79b3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3B4u;
        // 0x79b3b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3b4) {
            ctx->pc = 0x79B43Cu;
            goto label_79b43c;
        }
    }
    ctx->pc = 0x79B3BCu;
    // 0x79b3bc: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x79b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x79b3c0: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x79b3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x79b3c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79b3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79b3c8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B3C8u;
    {
        const bool branch_taken_0x79b3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b3c8) {
            ctx->pc = 0x79B3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B3C8u;
            // 0x79b3cc: 0x86030002  lh          $v1, 0x2($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B3D8u;
            goto label_79b3d8;
        }
    }
    ctx->pc = 0x79B3D0u;
label_79b3d0:
    // 0x79b3d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x79B3D0u;
    {
        const bool branch_taken_0x79b3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3D0u;
        // 0x79b3d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3d0) {
            ctx->pc = 0x79B43Cu;
            goto label_79b43c;
        }
    }
    ctx->pc = 0x79B3D8u;
label_79b3d8:
    // 0x79b3d8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B3D8u;
    {
        const bool branch_taken_0x79b3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3D8u;
        // 0x79b3dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3d8) {
            ctx->pc = 0x79B3F0u;
            goto label_79b3f0;
        }
    }
    ctx->pc = 0x79B3E0u;
    // 0x79b3e0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79B3E0u;
    {
        const bool branch_taken_0x79b3e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3E0u;
        // 0x79b3e4: 0x3c050074  lui         $a1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3e0) {
            ctx->pc = 0x79B40Cu;
            goto label_79b40c;
        }
    }
    ctx->pc = 0x79B3E8u;
    // 0x79b3e8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x79B3E8u;
    {
        const bool branch_taken_0x79b3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3E8u;
        // 0x79b3ec: 0x2404fffd  addiu       $a0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b3e8) {
            ctx->pc = 0x79B42Cu;
            goto label_79b42c;
        }
    }
    ctx->pc = 0x79B3F0u;
label_79b3f0:
    // 0x79b3f0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79b3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x79b3f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3f8: 0xc0afc68  jal         func_2BF1A0
    ctx->pc = 0x79B3F8u;
    SET_GPR_U32(ctx, 31, 0x79B400u);
    ctx->pc = 0x79B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B3F8u;
    // 0x79b3fc: 0x8c442648  lw          $a0, 0x2648($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF1A0u, 0x79B3F8u, 0x79B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B400u;
label_79b400:
    // 0x79b400: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x79b400u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x79b404: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x79b404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x79b408: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x79b408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_79b40c:
    // 0x79b40c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b410: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79b410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x79b414: 0x8c437a88  lw          $v1, 0x7A88($v0)
    ctx->pc = 0x79b414u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A88u));
    // 0x79b418: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79b418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79b41c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B41Cu;
    {
        const bool branch_taken_0x79b41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B41Cu;
        // 0x79b420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b41c) {
            ctx->pc = 0x79B43Cu;
            goto label_79b43c;
        }
    }
    ctx->pc = 0x79B424u;
    // 0x79b424: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x79b424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x79b428: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x79b428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_79b42c:
    // 0x79b42c: 0x8ca37a24  lw          $v1, 0x7A24($a1)
    ctx->pc = 0x79b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 31268)));
    // 0x79b430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79b430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b434: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79b434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x79b438: 0xaca37a24  sw          $v1, 0x7A24($a1)
    ctx->pc = 0x79b438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31268), GPR_U32(ctx, 3));
label_79b43c:
    // 0x79b43c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79b43cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b444: 0x3e00008  jr          $ra
    ctx->pc = 0x79B444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B444u;
        // 0x79b448: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B44Cu;
    // 0x79b44c: 0x0  nop
    ctx->pc = 0x79b44cu;
    // NOP
    ctx->pc = 0x79b450u;
}
} // namespace gh_r021
