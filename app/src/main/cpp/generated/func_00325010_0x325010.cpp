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

// Function: func_00325010
// Address: 0x325010 - 0x325100
void func_00325010_0x325010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00325010_0x325010");
#endif

    switch (ctx->pc) {
        case 0x325070u: goto label_325070;
        case 0x325098u: goto label_325098;
        case 0x3250c0u: goto label_3250c0;
        default: break;
    }

    ctx->pc = 0x325010u;

    // 0x325010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x325010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x325014: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x325014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x325018: 0x3c15003d  lui         $s5, 0x3D
    ctx->pc = 0x325018u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)61 << 16));
    // 0x32501c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32501cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325020: 0x26a28188  addiu       $v0, $s5, -0x7E78
    ctx->pc = 0x325020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934920));
    // 0x325024: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x325028: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x325028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32502c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32502cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x325030: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x325030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x325034: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x325034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x325038: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x325038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x32503c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x32503cu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x3C8188u));
    // 0x325040: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x325040u;
    {
        const bool branch_taken_0x325040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325040u;
        // 0x325044: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325040) {
            ctx->pc = 0x3250CCu;
            goto label_3250cc;
        }
    }
    ctx->pc = 0x325048u;
    // 0x325048: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x325048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32504c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32504cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x325050: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x325050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x325054: 0x3c121200  lui         $s2, 0x1200
    ctx->pc = 0x325054u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4608 << 16));
    // 0x325058: 0x24548118  addiu       $s4, $v0, -0x7EE8
    ctx->pc = 0x325058u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934808));
    // 0x32505c: 0x247380f0  addiu       $s3, $v1, -0x7F10
    ctx->pc = 0x32505cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934768));
    // 0x325060: 0x249181c4  addiu       $s1, $a0, -0x7E3C
    ctx->pc = 0x325060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934980));
    // 0x325064: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x325064u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325068: 0x365200e0  ori         $s2, $s2, 0xE0
    ctx->pc = 0x325068u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)224);
    // 0x32506c: 0x0  nop
    ctx->pc = 0x32506cu;
    // NOP
label_325070:
    // 0x325070: 0xde820000  ld          $v0, 0x0($s4)
    ctx->pc = 0x325070u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x325074: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x325074u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x325078: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x325078u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x32507c: 0xfe820000  sd          $v0, 0x0($s4)
    ctx->pc = 0x32507cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
    // 0x325080: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x325080u;
    {
        const bool branch_taken_0x325080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x325084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325080u;
        // 0x325084: 0xae760000  sw          $s6, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325080) {
            ctx->pc = 0x325090u;
            goto label_325090;
        }
    }
    ctx->pc = 0x325088u;
    // 0x325088: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x325088u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32508c: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x32508cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
label_325090:
    // 0x325090: 0xc0cef5e  jal         func_33BD78
    ctx->pc = 0x325090u;
    SET_GPR_U32(ctx, 31, 0x325098u);
    ctx->pc = 0x33BD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BD78u, 0x325090u, 0x325098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325098u;
label_325098:
    // 0x325098: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x325098u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32509c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32509Cu;
    {
        const bool branch_taken_0x32509c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32509c) {
            ctx->pc = 0x3250A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32509Cu;
            // 0x3250a0: 0xfe400000  sd          $zero, 0x0($s2) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3250A4u;
            goto label_3250a4;
        }
    }
    ctx->pc = 0x3250A4u;
label_3250a4:
    // 0x3250a4: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3250a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x3250a8: 0x26b08188  addiu       $s0, $s5, -0x7E78
    ctx->pc = 0x3250a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294934920));
    // 0x3250ac: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x3250acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3250b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3250B0u;
    {
        const bool branch_taken_0x3250b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3250b0) {
            ctx->pc = 0x3250B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3250B0u;
            // 0x3250b4: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3250CCu;
            goto label_3250cc;
        }
    }
    ctx->pc = 0x3250B8u;
    // 0x3250b8: 0xc0c94b8  jal         func_3252E0
    ctx->pc = 0x3250B8u;
    SET_GPR_U32(ctx, 31, 0x3250C0u);
    ctx->pc = 0x3252E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252E0u, 0x3250B8u, 0x3250C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3250C0u;
label_3250c0:
    // 0x3250c0: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x3250c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3250c4: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3250C4u;
    {
        const bool branch_taken_0x3250c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3250C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3250C4u;
        // 0x3250c8: 0x3c02003d  lui         $v0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3250c4) {
            ctx->pc = 0x325070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325070;
        }
    }
    ctx->pc = 0x3250CCu;
label_3250cc:
    // 0x3250cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3250ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3250d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3250d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3250d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3250d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3250d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3250d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3250dc: 0x24428190  addiu       $v0, $v0, -0x7E70
    ctx->pc = 0x3250dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934928));
    // 0x3250e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3250e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3250e4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3250e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3250e8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3250e8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3250ec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3250ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3250f0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3250f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3250f4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3250f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x3250f8: 0x80ebeb8  j           func_3AFAE0
    ctx->pc = 0x3250F8u;
    ctx->pc = 0x3250FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3250F8u;
    // 0x3250fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFAE0u, 0x3250F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x325100u;
}
