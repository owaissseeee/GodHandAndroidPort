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

// Function: Esp_killByGroupPair
// Address: 0x2fb898 - 0x2fb998
void Esp_killByGroupPair_0x2fb898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Esp_killByGroupPair_0x2fb898");
#endif

    switch (ctx->pc) {
        case 0x2fb8f0u: goto label_2fb8f0;
        case 0x2fb958u: goto label_2fb958;
        default: break;
    }

    ctx->pc = 0x2fb898u;

    // 0x2fb898: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2fb898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2fb89c: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb8a0: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2fb8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2fb8a4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2fb8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2fb8a8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2fb8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2fb8ac: 0x2476b840  addiu       $s6, $v1, -0x47C0
    ctx->pc = 0x2fb8acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948928));
    // 0x2fb8b0: 0x2457b7c0  addiu       $s7, $v0, -0x4840
    ctx->pc = 0x2fb8b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
    // 0x2fb8b4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2fb8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2fb8b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2fb8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2fb8bc: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb8c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2fb8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2fb8c4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2fb8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2fb8c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2fb8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2fb8cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2fb8ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8d0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fb8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2fb8d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fb8d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8d8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2fb8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2fb8dc: 0x2471b7c0  addiu       $s1, $v1, -0x4840
    ctx->pc = 0x2fb8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948800));
    // 0x2fb8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fb8e4: 0x2455b8c0  addiu       $s5, $v0, -0x4740
    ctx->pc = 0x2fb8e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x2fb8e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fb8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8ec: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x2fb8ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_2fb8f0:
    // 0x2fb8f0: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x2fb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x2fb8f4: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x2fb8f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x2fb8f8: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2fb8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2fb8fc: 0x942006  srlv        $a0, $s4, $a0
    ctx->pc = 0x2fb8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
    // 0x2fb900: 0xb71821  addu        $v1, $a1, $s7
    ctx->pc = 0x2fb900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x2fb904: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb908: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb90c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FB90Cu;
    {
        const bool branch_taken_0x2fb90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB90Cu;
        // 0x2fb910: 0xb61821  addu        $v1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb90c) {
            ctx->pc = 0x2FB958u;
            goto label_2fb958;
        }
    }
    ctx->pc = 0x2FB914u;
    // 0x2fb914: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb918: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb91c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2FB91Cu;
    {
        const bool branch_taken_0x2fb91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb91c) {
            ctx->pc = 0x2FB920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB91Cu;
            // 0x2fb920: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB95Cu;
            goto label_2fb95c;
        }
    }
    ctx->pc = 0x2FB924u;
    // 0x2fb924: 0xb51821  addu        $v1, $a1, $s5
    ctx->pc = 0x2fb924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x2fb928: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb92c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb930: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2FB930u;
    {
        const bool branch_taken_0x2fb930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fb930) {
            ctx->pc = 0x2FB934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB930u;
            // 0x2fb934: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB95Cu;
            goto label_2fb95c;
        }
    }
    ctx->pc = 0x2FB938u;
    // 0x2fb938: 0x8622023a  lh          $v0, 0x23A($s1)
    ctx->pc = 0x2fb938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 570)));
    // 0x2fb93c: 0x54530007  bnel        $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB93Cu;
    {
        const bool branch_taken_0x2fb93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2fb93c) {
            ctx->pc = 0x2FB940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB93Cu;
            // 0x2fb940: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB95Cu;
            goto label_2fb95c;
        }
    }
    ctx->pc = 0x2FB944u;
    // 0x2fb944: 0x9622023c  lhu         $v0, 0x23C($s1)
    ctx->pc = 0x2fb944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 572)));
    // 0x2fb948: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB948u;
    {
        const bool branch_taken_0x2fb948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2fb948) {
            ctx->pc = 0x2FB94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB948u;
            // 0x2fb94c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB95Cu;
            goto label_2fb95c;
        }
    }
    ctx->pc = 0x2FB950u;
    // 0x2fb950: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2FB950u;
    SET_GPR_U32(ctx, 31, 0x2FB958u);
    ctx->pc = 0x2FB954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB950u;
    // 0x2fb954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2FB950u, 0x2FB958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB958u;
label_2fb958:
    // 0x2fb958: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fb958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fb95c:
    // 0x2fb95c: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x2fb95cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2fb960: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2FB960u;
    {
        const bool branch_taken_0x2fb960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB960u;
        // 0x2fb964: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb960) {
            ctx->pc = 0x2FB8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb8f0;
        }
    }
    ctx->pc = 0x2FB968u;
    // 0x2fb968: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2fb968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2fb96c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2fb96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2fb970: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2fb970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2fb974: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2fb974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2fb978: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fb978u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2fb97c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2fb97cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2fb980: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2fb980u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb984: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2fb984u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb988: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fb988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb98c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB98Cu;
        // 0x2fb990: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB994u;
    // 0x2fb994: 0x0  nop
    ctx->pc = 0x2fb994u;
    // NOP
    ctx->pc = 0x2fb998u;
}
