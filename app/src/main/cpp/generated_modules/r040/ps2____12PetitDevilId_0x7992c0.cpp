#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: _$_12PetitDevilId
// Address: 0x7992c0 - 0x799370
void ps2____12PetitDevilId_0x7992c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____12PetitDevilId_0x7992c0");
#endif

    switch (ctx->pc) {
        case 0x7992f8u: goto label_7992f8;
        case 0x799304u: goto label_799304;
        case 0x799328u: goto label_799328;
        case 0x799334u: goto label_799334;
        case 0x799350u: goto label_799350;
        default: break;
    }

    ctx->pc = 0x7992c0u;

    // 0x7992c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7992c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7992c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x7992c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x7992c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x7992c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x7992cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7992ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7992d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7992d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7992d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7992d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7992dc: 0x26420700  addiu       $v0, $s2, 0x700
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1792));
    // 0x7992e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7992E0u;
    {
        const bool branch_taken_0x7992e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992E0u;
        // 0x7992e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992e0) {
            ctx->pc = 0x799310u;
            goto label_799310;
        }
    }
    ctx->pc = 0x7992E8u;
    // 0x7992e8: 0x26500ec0  addiu       $s0, $s2, 0xEC0
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3776));
    // 0x7992ec: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7992ECu;
    {
        const bool branch_taken_0x7992ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x7992F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992ECu;
        // 0x7992f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992ec) {
            ctx->pc = 0x799310u;
            goto label_799310;
        }
    }
    ctx->pc = 0x7992F4u;
    // 0x7992f4: 0x2610ff84  addiu       $s0, $s0, -0x7C
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967172));
label_7992f8:
    // 0x7992f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992fc: 0xc0b5760  jal         func_2D5D80
    ctx->pc = 0x7992FCu;
    SET_GPR_U32(ctx, 31, 0x799304u);
    ctx->pc = 0x799300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992FCu;
    // 0x799300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D80u, 0x7992FCu, 0x799304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799304u;
label_799304:
    // 0x799304: 0x0  nop
    ctx->pc = 0x799304u;
    // NOP
    // 0x799308: 0x5630fffb  bnel        $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799308u;
    {
        const bool branch_taken_0x799308 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x799308) {
            ctx->pc = 0x79930Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799308u;
            // 0x79930c: 0x2610ff84  addiu       $s0, $s0, -0x7C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967172));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7992F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992f8;
        }
    }
    ctx->pc = 0x799310u;
label_799310:
    // 0x799310: 0x26510060  addiu       $s1, $s2, 0x60
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x799314: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x799314u;
    {
        const bool branch_taken_0x799314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799314u;
        // 0x799318: 0x32730001  andi        $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799314) {
            ctx->pc = 0x799340u;
            goto label_799340;
        }
    }
    ctx->pc = 0x79931Cu;
    // 0x79931c: 0x265006ac  addiu       $s0, $s2, 0x6AC
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1708));
    // 0x799320: 0x12300007  beq         $s1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799320u;
    {
        const bool branch_taken_0x799320 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x799324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799320u;
        // 0x799324: 0x2610ff84  addiu       $s0, $s0, -0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799320) {
            ctx->pc = 0x799340u;
            goto label_799340;
        }
    }
    ctx->pc = 0x799328u;
label_799328:
    // 0x799328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79932c: 0xc0b5760  jal         func_2D5D80
    ctx->pc = 0x79932Cu;
    SET_GPR_U32(ctx, 31, 0x799334u);
    ctx->pc = 0x799330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79932Cu;
    // 0x799330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D80u, 0x79932Cu, 0x799334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799334u;
label_799334:
    // 0x799334: 0x0  nop
    ctx->pc = 0x799334u;
    // NOP
    // 0x799338: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799338u;
    {
        const bool branch_taken_0x799338 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x79933Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799338u;
        // 0x79933c: 0x2610ff84  addiu       $s0, $s0, -0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799338) {
            ctx->pc = 0x799328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799328;
        }
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x799340u;
    {
        const bool branch_taken_0x799340 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x799344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799340u;
        // 0x799344: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799340) {
            ctx->pc = 0x799354u;
            goto label_799354;
        }
    }
    ctx->pc = 0x799348u;
    // 0x799348: 0xc1e6474  jal         func_7991D0
    ctx->pc = 0x799348u;
    SET_GPR_U32(ctx, 31, 0x799350u);
    ctx->pc = 0x79934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799348u;
    // 0x79934c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7991D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7991D0u, 0x799348u, 0x799350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799350u;
label_799350:
    // 0x799350: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_799354:
    // 0x799354: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799358: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799358u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79935c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79935cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799364: 0x3e00008  jr          $ra
    ctx->pc = 0x799364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799364u;
        // 0x799368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79936Cu;
    // 0x79936c: 0x0  nop
    ctx->pc = 0x79936cu;
    // NOP
    ctx->pc = 0x799370u;
}
} // namespace gh_r040
