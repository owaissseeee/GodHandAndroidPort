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

// Function: func_002D7E50
// Address: 0x2d7e50 - 0x2d8008
void func_002D7E50_0x2d7e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D7E50_0x2d7e50");
#endif

    switch (ctx->pc) {
        case 0x2d7ea4u: goto label_2d7ea4;
        case 0x2d7eb0u: goto label_2d7eb0;
        case 0x2d7ef0u: goto label_2d7ef0;
        case 0x2d7f20u: goto label_2d7f20;
        case 0x2d7f50u: goto label_2d7f50;
        case 0x2d7f78u: goto label_2d7f78;
        default: break;
    }

    ctx->pc = 0x2d7e50u;

    // 0x2d7e50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d7e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d7e54: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2d7e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2d7e58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d7e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d7e5c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d7e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d7e60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d7e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d7e64: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d7e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d7e68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d7e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d7e6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d7e6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2d7e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e74: 0x344261b0  ori         $v0, $v0, 0x61B0
    ctx->pc = 0x2d7e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25008);
    // 0x2d7e78: 0x346361c0  ori         $v1, $v1, 0x61C0
    ctx->pc = 0x2d7e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25024);
    // 0x2d7e7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d7e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d7e80: 0x34a561a0  ori         $a1, $a1, 0x61A0
    ctx->pc = 0x2d7e80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24992);
    // 0x2d7e84: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d7e84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e88: 0x2423021  addu        $a2, $s2, $v0
    ctx->pc = 0x2d7e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d7e8c: 0x2433821  addu        $a3, $s2, $v1
    ctx->pc = 0x2d7e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2d7e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d7e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d7e98: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2d7e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7e9c: 0xc0c2a5e  jal         func_30A978
    ctx->pc = 0x2D7E9Cu;
    SET_GPR_U32(ctx, 31, 0x2D7EA4u);
    ctx->pc = 0x2D7EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7E9Cu;
    // 0x2d7ea0: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A978u, 0x2D7E9Cu, 0x2D7EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7EA4u;
label_2d7ea4:
    // 0x2d7ea4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2d7ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d7ea8: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2d7ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2d7eac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d7eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2d7eb0:
    // 0x2d7eb0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d7eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7eb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d7eb8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2d7eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2d7ebc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2d7ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2d7ec0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7EC0u;
    {
        const bool branch_taken_0x2d7ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2D7EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7EC0u;
        // 0x2d7ec4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7ec0) {
            ctx->pc = 0x2D7EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7eb0;
        }
    }
    ctx->pc = 0x2D7EC8u;
    // 0x2d7ec8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d7ecc: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2d7eccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7ed0: 0x344261d0  ori         $v0, $v0, 0x61D0
    ctx->pc = 0x2d7ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25040);
    // 0x2d7ed4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d7ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7ed8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d7edc: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x2d7edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2d7ee0: 0x26670020  addiu       $a3, $s3, 0x20
    ctx->pc = 0x2d7ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2d7ee4: 0x26680030  addiu       $t0, $s3, 0x30
    ctx->pc = 0x2d7ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2d7ee8: 0x26490040  addiu       $t1, $s2, 0x40
    ctx->pc = 0x2d7ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2d7eec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d7ef0:
    // 0x2d7ef0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7ef4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2d7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2d7ef8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7efc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d7efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d7f00: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7F00u;
    {
        const bool branch_taken_0x2d7f00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D7F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F00u;
        // 0x2d7f04: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f00) {
            ctx->pc = 0x2D7EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7ef0;
        }
    }
    ctx->pc = 0x2D7F08u;
    // 0x2d7f08: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d7f0c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x2d7f0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f10: 0x344261e0  ori         $v0, $v0, 0x61E0
    ctx->pc = 0x2d7f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25056);
    // 0x2d7f14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7f18: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2d7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d7f1c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d7f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d7f20:
    // 0x2d7f20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7f24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2d7f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2d7f28: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d7f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7f2c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d7f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d7f30: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7F30u;
    {
        const bool branch_taken_0x2d7f30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F30u;
        // 0x2d7f34: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f30) {
            ctx->pc = 0x2D7F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7f20;
        }
    }
    ctx->pc = 0x2D7F38u;
    // 0x2d7f38: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d7f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d7f3c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x2d7f3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f40: 0x344261f0  ori         $v0, $v0, 0x61F0
    ctx->pc = 0x2d7f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25072);
    // 0x2d7f44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2d7f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7f48: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2d7f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2d7f4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d7f50:
    // 0x2d7f50: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2d7f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7f54: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2d7f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d7f58: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2d7f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2d7f5c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d7f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d7f60: 0x14a2fffb  bne         $a1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7F60u;
    {
        const bool branch_taken_0x2d7f60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F60u;
        // 0x2d7f64: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f60) {
            ctx->pc = 0x2D7F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7f50;
        }
    }
    ctx->pc = 0x2D7F68u;
    // 0x2d7f68: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2d7f68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f6c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2d7f6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7f70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d7f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d7f74: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2d7f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2d7f78:
    // 0x2d7f78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7f7c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2d7f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2d7f80: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7f84: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d7f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d7f88: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7F88u;
    {
        const bool branch_taken_0x2d7f88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x2D7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7F88u;
        // 0x2d7f8c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7f88) {
            ctx->pc = 0x2D7F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7f78;
        }
    }
    ctx->pc = 0x2D7F90u;
    // 0x2d7f90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d7f90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d7f94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7f98: 0x0  nop
    ctx->pc = 0x2d7f98u;
    // NOP
    // 0x2d7f9c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2d7f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2d7fa0: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x2d7fa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2d7fa4: 0xda650030  lqc2        $vf5, 0x30($s3)
    ctx->pc = 0x2d7fa4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2d7fa8: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2d7fa8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d7fac: 0xda630010  lqc2        $vf3, 0x10($s3)
    ctx->pc = 0x2d7facu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2d7fb0: 0xda640020  lqc2        $vf4, 0x20($s3)
    ctx->pc = 0x2d7fb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2d7fb4: 0x4bc12958  vmulx.xyz   $vf5, $vf5, $vf1x
    ctx->pc = 0x2d7fb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d7fb8: 0x4be01090  vmaxx.xyzw  $vf2, $vf2, $vf0x
    ctx->pc = 0x2d7fb8u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d7fbc: 0x4be018d0  vmaxx.xyzw  $vf3, $vf3, $vf0x
    ctx->pc = 0x2d7fbcu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d7fc0: 0x4be02110  vmaxx.xyzw  $vf4, $vf4, $vf0x
    ctx->pc = 0x2d7fc0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d7fc4: 0x4be02950  vmaxx.xyzw  $vf5, $vf5, $vf0x
    ctx->pc = 0x2d7fc4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d7fc8: 0x4be01097  vminiw.xyzw $vf2, $vf2, $vf0w
    ctx->pc = 0x2d7fc8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2d7fcc: 0x4be018d7  vminiw.xyzw $vf3, $vf3, $vf0w
    ctx->pc = 0x2d7fccu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2d7fd0: 0x4be02117  vminiw.xyzw $vf4, $vf4, $vf0w
    ctx->pc = 0x2d7fd0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2d7fd4: 0x4be02957  vminiw.xyzw $vf5, $vf5, $vf0w
    ctx->pc = 0x2d7fd4u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2d7fd8: 0xfa620000  sqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2d7fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x2d7fdc: 0xfa630010  sqc2        $vf3, 0x10($s3)
    ctx->pc = 0x2d7fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2d7fe0: 0xfa640020  sqc2        $vf4, 0x20($s3)
    ctx->pc = 0x2d7fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2d7fe4: 0xfa650030  sqc2        $vf5, 0x30($s3)
    ctx->pc = 0x2d7fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2d7fe8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d7fe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d7fec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d7fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d7ff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d7ff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d7ff4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d7ff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d7ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7FFCu;
        // 0x2d8000: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8004u;
    // 0x2d8004: 0x0  nop
    ctx->pc = 0x2d8004u;
    // NOP
    ctx->pc = 0x2d8008u;
}
