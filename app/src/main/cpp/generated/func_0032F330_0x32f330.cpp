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

// Function: func_0032F330
// Address: 0x32f330 - 0x32f428
void func_0032F330_0x32f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F330_0x32f330");
#endif

    switch (ctx->pc) {
        case 0x32f370u: goto label_32f370;
        case 0x32f3c0u: goto label_32f3c0;
        case 0x32f3d8u: goto label_32f3d8;
        default: break;
    }

    ctx->pc = 0x32f330u;

    // 0x32f330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32f334: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x32f334u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x32f338: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32f338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32f33c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32f33cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f340: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32f340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32f344: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32f344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f348: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32f34c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x32f34cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32f350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32f354: 0x24e31e70  addiu       $v1, $a3, 0x1E70
    ctx->pc = 0x32f354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 7792));
    // 0x32f358: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32f358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32f35c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x32f35cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3D1E70u));
    // 0x32f360: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x32F360u;
    {
        const bool branch_taken_0x32f360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F360u;
        // 0x32f364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f360) {
            ctx->pc = 0x32F394u;
            goto label_32f394;
        }
    }
    ctx->pc = 0x32F368u;
    // 0x32f368: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32f368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32f36c: 0x0  nop
    ctx->pc = 0x32f36cu;
    // NOP
label_32f370:
    // 0x32f370: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x32f370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x32f374: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32F374u;
    {
        const bool branch_taken_0x32f374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F374u;
        // 0x32f378: 0x24631964  addiu       $v1, $v1, 0x1964 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f374) {
            ctx->pc = 0x32F394u;
            goto label_32f394;
        }
    }
    ctx->pc = 0x32F37Cu;
    // 0x32f37c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x32f37cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32f380: 0x0  nop
    ctx->pc = 0x32f380u;
    // NOP
    // 0x32f384: 0x0  nop
    ctx->pc = 0x32f384u;
    // NOP
    // 0x32f388: 0x0  nop
    ctx->pc = 0x32f388u;
    // NOP
    // 0x32f38c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32F38Cu;
    {
        const bool branch_taken_0x32f38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32f38c) {
            ctx->pc = 0x32F390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32F38Cu;
            // 0x32f390: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32F370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f370;
        }
    }
    ctx->pc = 0x32F394u;
label_32f394:
    // 0x32f394: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32f394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32f398: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x32F398u;
    {
        const bool branch_taken_0x32f398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x32F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F398u;
        // 0x32f39c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f398) {
            ctx->pc = 0x32F40Cu;
            goto label_32f40c;
        }
    }
    ctx->pc = 0x32F3A0u;
    // 0x32f3a0: 0x24021964  addiu       $v0, $zero, 0x1964
    ctx->pc = 0x32f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
    // 0x32f3a4: 0x24e31e70  addiu       $v1, $a3, 0x1E70
    ctx->pc = 0x32f3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 7792));
    // 0x32f3a8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x32f3a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x32f3ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f3b0: 0x24061964  addiu       $a2, $zero, 0x1964
    ctx->pc = 0x32f3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
    // 0x32f3b4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x32f3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32f3b8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x32F3B8u;
    SET_GPR_U32(ctx, 31, 0x32F3C0u);
    ctx->pc = 0x32F3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F3B8u;
    // 0x32f3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32F3B8u, 0x32F3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F3C0u;
label_32f3c0:
    // 0x32f3c0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x32f3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f3c4: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x32f3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x32f3c8: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x32F3C8u;
    {
        const bool branch_taken_0x32f3c8 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x32F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F3C8u;
        // 0x32f3cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f3c8) {
            ctx->pc = 0x32F3F4u;
            goto label_32f3f4;
        }
    }
    ctx->pc = 0x32F3D0u;
    // 0x32f3d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32f3d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f3d4: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x32f3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_32f3d8:
    // 0x32f3d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x32f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32f3dc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x32f3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x32f3e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32f3e4: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x32f3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x32f3e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x32f3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x32f3ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32F3ECu;
    {
        const bool branch_taken_0x32f3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F3ECu;
        // 0x32f3f0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f3ec) {
            ctx->pc = 0x32F3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32f3d8;
        }
    }
    ctx->pc = 0x32F3F4u;
label_32f3f4:
    // 0x32f3f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f3f8: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x32f3f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x32f3fc: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x32f3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f400: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x32f400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x32f404: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x32f404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x32f408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32f408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32f40c:
    // 0x32f40c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32f410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f414: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32f414u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f418: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32f418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32f41c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32f41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f420: 0x3e00008  jr          $ra
    ctx->pc = 0x32F420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F420u;
        // 0x32f424: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F428u;
}
