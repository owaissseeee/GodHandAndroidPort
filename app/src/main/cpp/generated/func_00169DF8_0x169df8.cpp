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

// Function: func_00169DF8
// Address: 0x169df8 - 0x16a4d8
void func_00169DF8_0x169df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00169DF8_0x169df8");
#endif

    switch (ctx->pc) {
        case 0x16a058u: goto label_16a058;
        case 0x16a108u: goto label_16a108;
        case 0x16a118u: goto label_16a118;
        case 0x16a260u: goto label_16a260;
        case 0x16a270u: goto label_16a270;
        case 0x16a2e4u: goto label_16a2e4;
        case 0x16a304u: goto label_16a304;
        case 0x16a330u: goto label_16a330;
        case 0x16a3bcu: goto label_16a3bc;
        case 0x16a3dcu: goto label_16a3dc;
        default: break;
    }

    ctx->pc = 0x169df8u;

    // 0x169df8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x169df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x169dfc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x169dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x169e00: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x169e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x169e04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x169e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169e08: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x169e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x169e0c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x169e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x169e10: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x169e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x169e14: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x169e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x169e18: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x169e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x169e1c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x169e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x169e20: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x169e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x169e24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x169e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x169e28: 0x8243005b  lb          $v1, 0x5B($s2)
    ctx->pc = 0x169e28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 91)));
    // 0x169e2c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x169e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x169e30: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x169E30u;
    {
        const bool branch_taken_0x169e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E30u;
        // 0x169e34: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e30) {
            ctx->pc = 0x169FA4u;
            goto label_169fa4;
        }
    }
    ctx->pc = 0x169E38u;
    // 0x169e38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x169e3c: 0x2442fd20  addiu       $v0, $v0, -0x2E0
    ctx->pc = 0x169e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966560));
    // 0x169e40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x169e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x169e44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x169e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169e48: 0x800008  jr          $a0
    ctx->pc = 0x169E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169E50u: goto label_169e50;
            case 0x169EDCu: goto label_169edc;
            case 0x169F34u: goto label_169f34;
            case 0x169F94u: goto label_169f94;
            case 0x169FA4u: goto label_169fa4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169E48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x169E50u;
label_169e50:
    // 0x169e50: 0x86420202  lh          $v0, 0x202($s2)
    ctx->pc = 0x169e50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 514)));
    // 0x169e54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x169E54u;
    {
        const bool branch_taken_0x169e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E54u;
        // 0x169e58: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169e54) {
            ctx->pc = 0x169E78u;
            goto label_169e78;
        }
    }
    ctx->pc = 0x169E5Cu;
    // 0x169e5c: 0x8e4400bc  lw          $a0, 0xBC($s2)
    ctx->pc = 0x169e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x169e60: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x169e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x169e64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x169e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x169e68: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169e6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x169e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x169e70: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x169e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x169e74: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x169e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_169e78:
    // 0x169e78: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x169e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31244)));
    // 0x169e7c: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x169E7Cu;
    {
        const bool branch_taken_0x169e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169e7c) {
            ctx->pc = 0x169E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169E7Cu;
            // 0x169e80: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169EC8u;
            goto label_169ec8;
        }
    }
    ctx->pc = 0x169E84u;
    // 0x169e84: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x169e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x169e88: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x169e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x169e8c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x169e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x169e90: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x169e90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x169e94: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x169e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x169e98: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169e9c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x169e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x169ea0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x169ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x169ea4: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x169ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x169ea8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x169ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x169eac: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x169eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x169eb0: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x169eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x169eb4: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x169eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x169eb8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169ebc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x169ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x169ec0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x169ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x169ec4: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x169ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_169ec8:
    // 0x169ec8: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x169ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x169ecc: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x169eccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x169ed0: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x169ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x169ed4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x169ED4u;
    {
        const bool branch_taken_0x169ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169ED4u;
        // 0x169ed8: 0xa4640090  sh          $a0, 0x90($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ed4) {
            ctx->pc = 0x169FA4u;
            goto label_169fa4;
        }
    }
    ctx->pc = 0x169EDCu;
label_169edc:
    // 0x169edc: 0x86420202  lh          $v0, 0x202($s2)
    ctx->pc = 0x169edcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 514)));
    // 0x169ee0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x169EE0u;
    {
        const bool branch_taken_0x169ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EE0u;
        // 0x169ee4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ee0) {
            ctx->pc = 0x169F04u;
            goto label_169f04;
        }
    }
    ctx->pc = 0x169EE8u;
    // 0x169ee8: 0x8e4400bc  lw          $a0, 0xBC($s2)
    ctx->pc = 0x169ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x169eec: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x169eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x169ef0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x169ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x169ef4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169ef8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x169ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x169efc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x169efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x169f00: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x169f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_169f04:
    // 0x169f04: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x169f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31244)));
    // 0x169f08: 0x54600027  bnel        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x169F08u;
    {
        const bool branch_taken_0x169f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169f08) {
            ctx->pc = 0x169F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169F08u;
            // 0x169f0c: 0x8e4200b8  lw          $v0, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169FA8u;
            goto label_169fa8;
        }
    }
    ctx->pc = 0x169F10u;
    // 0x169f10: 0x8e4300bc  lw          $v1, 0xBC($s2)
    ctx->pc = 0x169f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x169f14: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x169f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x169f18: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x169f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x169f1c: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x169f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x169f20: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x169f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x169f24: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169f28: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x169f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x169f2c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x169F2Cu;
    {
        const bool branch_taken_0x169f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F2Cu;
        // 0x169f30: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f2c) {
            ctx->pc = 0x169FA4u;
            goto label_169fa4;
        }
    }
    ctx->pc = 0x169F34u;
label_169f34:
    // 0x169f34: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x169f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x169f38: 0x2404200b  addiu       $a0, $zero, 0x200B
    ctx->pc = 0x169f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8203));
    // 0x169f3c: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x169f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x169f40: 0x3c060042  lui         $a2, 0x42
    ctx->pc = 0x169f40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)66 << 16));
    // 0x169f44: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x169f44u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x169f48: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x169f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x169f4c: 0x24c6fe78  addiu       $a2, $a2, -0x188
    ctx->pc = 0x169f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966904));
    // 0x169f50: 0x8e420090  lw          $v0, 0x90($s2)
    ctx->pc = 0x169f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x169f54: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x169f54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x169f58: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x169f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x169f5c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x169f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x169f60: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x169f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x169f64: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x169f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x169f68: 0x8e440094  lw          $a0, 0x94($s2)
    ctx->pc = 0x169f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x169f6c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169f70: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x169f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x169f74: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x169f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x169f78: 0x824301d4  lb          $v1, 0x1D4($s2)
    ctx->pc = 0x169f78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 468)));
    // 0x169f7c: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x169f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x169f80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x169f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x169f84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x169f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x169f88: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x169f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169f8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x169F8Cu;
    {
        const bool branch_taken_0x169f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F8Cu;
        // 0x169f90: 0xe4400038  swc1        $f0, 0x38($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f8c) {
            ctx->pc = 0x169FA4u;
            goto label_169fa4;
        }
    }
    ctx->pc = 0x169F94u;
label_169f94:
    // 0x169f94: 0x92420286  lbu         $v0, 0x286($s2)
    ctx->pc = 0x169f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 646)));
    // 0x169f98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x169F98u;
    {
        const bool branch_taken_0x169f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F98u;
        // 0x169f9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f98) {
            ctx->pc = 0x169FA4u;
            goto label_169fa4;
        }
    }
    ctx->pc = 0x169FA0u;
    // 0x169fa0: 0xa242005b  sb          $v0, 0x5B($s2)
    ctx->pc = 0x169fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 91), (uint8_t)GPR_U32(ctx, 2));
label_169fa4:
    // 0x169fa4: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x169fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_169fa8:
    // 0x169fa8: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x169fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x169fac: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x169facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x169fb0: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x169fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x169fb4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x169fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x169fb8: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x169fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x169fbc: 0x86440202  lh          $a0, 0x202($s2)
    ctx->pc = 0x169fbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 514)));
    // 0x169fc0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x169FC0u;
    {
        const bool branch_taken_0x169fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x169fc0) {
            ctx->pc = 0x169FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169FC0u;
            // 0x169fc4: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169FDCu;
            goto label_169fdc;
        }
    }
    ctx->pc = 0x169FC8u;
    // 0x169fc8: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x169fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x169fcc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x169fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x169fd0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x169fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x169fd4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x169FD4u;
    {
        const bool branch_taken_0x169fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FD4u;
        // 0x169fd8: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169fd4) {
            ctx->pc = 0x169FECu;
            goto label_169fec;
        }
    }
    ctx->pc = 0x169FDCu;
label_169fdc:
    // 0x169fdc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x169fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x169fe0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x169fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x169fe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169fe8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x169fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_169fec:
    // 0x169fec: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x169fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x169ff0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x169ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x169ff4: 0x26420120  addiu       $v0, $s2, 0x120
    ctx->pc = 0x169ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x169ff8: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x169ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x169ffc: 0xa083008b  sb          $v1, 0x8B($a0)
    ctx->pc = 0x169ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 139), (uint8_t)GPR_U32(ctx, 3));
    // 0x16a000: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16a000u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a004: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x16a004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x16a008: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x16a008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x16a00c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x16a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x16a010: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16a010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a014: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x16a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x16a018: 0x2654019c  addiu       $s4, $s2, 0x19C
    ctx->pc = 0x16a018u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 412));
    // 0x16a01c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x16a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x16a020: 0x26530134  addiu       $s3, $s2, 0x134
    ctx->pc = 0x16a020u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 308));
    // 0x16a024: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16a028: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16a028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16a02c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16a02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x16a030: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x16a030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x16a034: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16a034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x16a038: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x16a038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x16a03c: 0x2403ffec  addiu       $v1, $zero, -0x14
    ctx->pc = 0x16a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x16a040: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x16a040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a044: 0x2442ad58  addiu       $v0, $v0, -0x52A8
    ctx->pc = 0x16a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946136));
    // 0x16a048: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x16a048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x16a04c: 0x245effec  addiu       $fp, $v0, -0x14
    ctx->pc = 0x16a04cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x16a050: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x16a050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x16a054: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x16a054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_16a058:
    // 0x16a058: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16a058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a05c: 0x240630c1  addiu       $a2, $zero, 0x30C1
    ctx->pc = 0x16a05cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12481));
    // 0x16a060: 0x864301d0  lh          $v1, 0x1D0($s2)
    ctx->pc = 0x16a060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 464)));
    // 0x16a064: 0x27de0014  addiu       $fp, $fp, 0x14
    ctx->pc = 0x16a064u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x16a068: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x16a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16a06c: 0x8e64004c  lw          $a0, 0x4C($s3)
    ctx->pc = 0x16a06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x16a070: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16a070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16a074: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x16a074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x16a078: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16a078u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16a07c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16a080: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x16a080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x16a084: 0x26b60005  addiu       $s6, $s5, 0x5
    ctx->pc = 0x16a084u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 5));
    // 0x16a088: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x16a088u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x16a08c: 0x26b70011  addiu       $s7, $s5, 0x11
    ctx->pc = 0x16a08cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 17));
    // 0x16a090: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16a090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a094: 0x26a4000b  addiu       $a0, $s5, 0xB
    ctx->pc = 0x16a094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 11));
    // 0x16a098: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x16a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a09c: 0x2865001f  slti        $a1, $v1, 0x1F
    ctx->pc = 0x16a09cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x16a0a0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x16a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x16a0a4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x16a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x16a0a8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x16a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16a0ac: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x16a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x16a0b0: 0xa4660090  sh          $a2, 0x90($v1)
    ctx->pc = 0x16a0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 6));
    // 0x16a0b4: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x16a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x16a0b8: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x16a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x16a0bc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16a0c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x16a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16a0c4: 0xa062008b  sb          $v0, 0x8B($v1)
    ctx->pc = 0x16a0c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 2));
    // 0x16a0c8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x16a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a0cc: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x16a0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x16a0d0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16a0d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16a0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16a0d8: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A0D8u;
    {
        const bool branch_taken_0x16a0d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0D8u;
        // 0x16a0dc: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0d8) {
            ctx->pc = 0x16A0ECu;
            goto label_16a0ec;
        }
    }
    ctx->pc = 0x16A0E0u;
    // 0x16a0e0: 0x8e62004c  lw          $v0, 0x4C($s3)
    ctx->pc = 0x16a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x16a0e4: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x16A0E4u;
    {
        const bool branch_taken_0x16a0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0E4u;
        // 0x16a0e8: 0xac400084  sw          $zero, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0e4) {
            ctx->pc = 0x16A3F8u;
            goto label_16a3f8;
        }
    }
    ctx->pc = 0x16A0ECu;
label_16a0ec:
    // 0x16a0ec: 0x83d10010  lb          $s1, 0x10($fp)
    ctx->pc = 0x16a0ecu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x16a0f0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16a0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a0f4: 0x12240012  beq         $s1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16A0F4u;
    {
        const bool branch_taken_0x16a0f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x16A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A0F4u;
        // 0x16a0f8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a0f4) {
            ctx->pc = 0x16A140u;
            goto label_16a140;
        }
    }
    ctx->pc = 0x16A0FCu;
    // 0x16a0fc: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x16a0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x16a100: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x16A100u;
    SET_GPR_U32(ctx, 31, 0x16A108u);
    ctx->pc = 0x16A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A100u;
    // 0x16a104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x16A100u, 0x16A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A108u;
label_16a108:
    // 0x16a108: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16A108u;
    {
        const bool branch_taken_0x16a108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A108u;
        // 0x16a10c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a108) {
            ctx->pc = 0x16A124u;
            goto label_16a124;
        }
    }
    ctx->pc = 0x16A110u;
    // 0x16a110: 0xc07f008  jal         func_1FC020
    ctx->pc = 0x16A110u;
    SET_GPR_U32(ctx, 31, 0x16A118u);
    ctx->pc = 0x16A114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A110u;
    // 0x16a114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC020u, 0x16A110u, 0x16A118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A118u;
label_16a118:
    // 0x16a118: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x16a118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16a11c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16A11Cu;
    {
        const bool branch_taken_0x16a11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A11Cu;
        // 0x16a120: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a11c) {
            ctx->pc = 0x16A140u;
            goto label_16a140;
        }
    }
    ctx->pc = 0x16A124u;
label_16a124:
    // 0x16a124: 0x864301d0  lh          $v1, 0x1D0($s2)
    ctx->pc = 0x16a124u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 464)));
    // 0x16a128: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x16a128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16a12c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16a130: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16a130u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16a134: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x16a134u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16a138: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A138u;
    {
        const bool branch_taken_0x16a138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A138u;
        // 0x16a13c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a138) {
            ctx->pc = 0x16A158u;
            goto label_16a158;
        }
    }
    ctx->pc = 0x16A140u;
label_16a140:
    // 0x16a140: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x16a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x16a144: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x16a144u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x16a148: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16a148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16a14c: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x16a14cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x16a150: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x16A150u;
    {
        const bool branch_taken_0x16a150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A150u;
        // 0x16a154: 0x2ac03  sra         $s5, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a150) {
            ctx->pc = 0x16A3F8u;
            goto label_16a3f8;
        }
    }
    ctx->pc = 0x16A158u;
label_16a158:
    // 0x16a158: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x16a158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x16a15c: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x16a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x16a160: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16a160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16a164: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x16a164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x16a168: 0xac4401b8  sw          $a0, 0x1B8($v0)
    ctx->pc = 0x16a168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 4));
    // 0x16a16c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16a16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a170: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x16a170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a174: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x16a174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x16a178: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x16a178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a17c: 0x2484ad58  addiu       $a0, $a0, -0x52A8
    ctx->pc = 0x16a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946136));
    // 0x16a180: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x16a180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a184: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x16a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16a188: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x16a188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a18c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x16a18cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16a190: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x16a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a194: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16a194u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16a198: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16a198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16a19c: 0x8fc5000c  lw          $a1, 0xC($fp)
    ctx->pc = 0x16a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x16a1a0: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x16a1a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16a1a4: 0xa4c30090  sh          $v1, 0x90($a2)
    ctx->pc = 0x16a1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x16a1a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16a1ac: 0xac450084  sw          $a1, 0x84($v0)
    ctx->pc = 0x16a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 5));
    // 0x16a1b0: 0x8243005b  lb          $v1, 0x5B($s2)
    ctx->pc = 0x16a1b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 91)));
    // 0x16a1b4: 0x1467000a  bne         $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x16A1B4u;
    {
        const bool branch_taken_0x16a1b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x16A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1B4u;
        // 0x16a1b8: 0x864201d2  lh          $v0, 0x1D2($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 466)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1b4) {
            ctx->pc = 0x16A1E0u;
            goto label_16a1e0;
        }
    }
    ctx->pc = 0x16A1BCu;
    // 0x16a1bc: 0x16a20024  bne         $s5, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16A1BCu;
    {
        const bool branch_taken_0x16a1bc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1BCu;
        // 0x16a1c0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1bc) {
            ctx->pc = 0x16A250u;
            goto label_16a250;
        }
    }
    ctx->pc = 0x16A1C4u;
    // 0x16a1c4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16a1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a1c8: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x16a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x16a1cc: 0x24a42085  addiu       $a0, $a1, 0x2085
    ctx->pc = 0x16a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8325));
    // 0x16a1d0: 0xa4440090  sh          $a0, 0x90($v0)
    ctx->pc = 0x16a1d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a1d4: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x16a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x16a1d8: 0xa4640090  sh          $a0, 0x90($v1)
    ctx->pc = 0x16a1d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a1dc: 0x864201d2  lh          $v0, 0x1D2($s2)
    ctx->pc = 0x16a1dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 466)));
label_16a1e0:
    // 0x16a1e0: 0x16a2001b  bne         $s5, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x16A1E0u;
    {
        const bool branch_taken_0x16a1e0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1E0u;
        // 0x16a1e4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1e0) {
            ctx->pc = 0x16A250u;
            goto label_16a250;
        }
    }
    ctx->pc = 0x16A1E8u;
    // 0x16a1e8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x16a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x16a1ec: 0x246374a0  addiu       $v1, $v1, 0x74A0
    ctx->pc = 0x16a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x16a1f0: 0x8c62056c  lw          $v0, 0x56C($v1)
    ctx->pc = 0x16a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x16a1f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16A1F4u;
    {
        const bool branch_taken_0x16a1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A1F4u;
        // 0x16a1f8: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a1f4) {
            ctx->pc = 0x16A210u;
            goto label_16a210;
        }
    }
    ctx->pc = 0x16A1FCu;
    // 0x16a1fc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x16a1fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x16a200: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x16a200u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x16a204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16a204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a208: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A208u;
    {
        const bool branch_taken_0x16a208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A208u;
        // 0x16a20c: 0xe4400040  swc1        $f0, 0x40($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a208) {
            ctx->pc = 0x16A224u;
            goto label_16a224;
        }
    }
    ctx->pc = 0x16A210u;
label_16a210:
    // 0x16a210: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x16a210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x16a214: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x16a214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x16a218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16a218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a21c: 0x0  nop
    ctx->pc = 0x16a21cu;
    // NOP
    // 0x16a220: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x16a220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_16a224:
    // 0x16a224: 0x93c20011  lbu         $v0, 0x11($fp)
    ctx->pc = 0x16a224u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 17)));
    // 0x16a228: 0x8e4500bc  lw          $a1, 0xBC($s2)
    ctx->pc = 0x16a228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x16a22c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x16a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x16a230: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x16a230u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x16a234: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16a234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a238: 0x248420a3  addiu       $a0, $a0, 0x20A3
    ctx->pc = 0x16a238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8355));
    // 0x16a23c: 0x244220a3  addiu       $v0, $v0, 0x20A3
    ctx->pc = 0x16a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8355));
    // 0x16a240: 0xa4a40090  sh          $a0, 0x90($a1)
    ctx->pc = 0x16a240u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 4));
    // 0x16a244: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x16a244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x16a248: 0xa4620090  sh          $v0, 0x90($v1)
    ctx->pc = 0x16a248u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x16a24c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x16a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_16a250:
    // 0x16a250: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x16a250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x16a254: 0x24919b70  addiu       $s1, $a0, -0x6490
    ctx->pc = 0x16a254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x16a258: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x16A258u;
    SET_GPR_U32(ctx, 31, 0x16A260u);
    ctx->pc = 0x16A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A258u;
    // 0x16a25c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x16A258u, 0x16A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A260u;
label_16a260:
    // 0x16a260: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x16A260u;
    {
        const bool branch_taken_0x16a260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A260u;
        // 0x16a264: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a260) {
            ctx->pc = 0x16A320u;
            goto label_16a320;
        }
    }
    ctx->pc = 0x16A268u;
    // 0x16a268: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x16A268u;
    SET_GPR_U32(ctx, 31, 0x16A270u);
    ctx->pc = 0x16A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A268u;
    // 0x16a26c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x16A268u, 0x16A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A270u;
label_16a270:
    // 0x16a270: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x16a270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x16a274: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16a274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a278: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16a278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16a27c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16a280: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16a280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a284: 0x8c850084  lw          $a1, 0x84($a0)
    ctx->pc = 0x16a284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x16a288: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x16a288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16a28c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16A28Cu;
    {
        const bool branch_taken_0x16a28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A28Cu;
        // 0x16a290: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a28c) {
            ctx->pc = 0x16A320u;
            goto label_16a320;
        }
    }
    ctx->pc = 0x16A294u;
    // 0x16a294: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x16a294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a298: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x16a298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x16a29c: 0x93c30010  lbu         $v1, 0x10($fp)
    ctx->pc = 0x16a29cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x16a2a0: 0x163080  sll         $a2, $s6, 2
    ctx->pc = 0x16a2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x16a2a4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16a2a8: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x16a2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16a2ac: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x16a2acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a2b0: 0x38600  sll         $s0, $v1, 24
    ctx->pc = 0x16a2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x16a2b4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x16a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x16a2b8: 0x102e03  sra         $a1, $s0, 24
    ctx->pc = 0x16a2b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 24));
    // 0x16a2bc: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x16a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x16a2c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16a2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16a2c4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x16a2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16a2c8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x16a2c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x16a2cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16a2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16a2d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2d4: 0xad03002c  sw          $v1, 0x2C($t0)
    ctx->pc = 0x16a2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 3));
    // 0x16a2d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16a2dc: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x16A2DCu;
    SET_GPR_U32(ctx, 31, 0x16A2E4u);
    ctx->pc = 0x16A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2DCu;
    // 0x16a2e0: 0xa047008b  sb          $a3, 0x8B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x16A2DCu, 0x16A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A2E4u;
label_16a2e4:
    // 0x16a2e4: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x16A2E4u;
    {
        const bool branch_taken_0x16a2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2E4u;
        // 0x16a2e8: 0x26a30001  addiu       $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2e4) {
            ctx->pc = 0x16A3FCu;
            goto label_16a3fc;
        }
    }
    ctx->pc = 0x16A2ECu;
    // 0x16a2ec: 0x101603  sra         $v0, $s0, 24
    ctx->pc = 0x16a2ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 24));
    // 0x16a2f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a2f4: 0x10430041  beq         $v0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x16A2F4u;
    {
        const bool branch_taken_0x16a2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A2F4u;
        // 0x16a2f8: 0x26a30001  addiu       $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2f4) {
            ctx->pc = 0x16A3FCu;
            goto label_16a3fc;
        }
    }
    ctx->pc = 0x16A2FCu;
    // 0x16a2fc: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x16A2FCu;
    SET_GPR_U32(ctx, 31, 0x16A304u);
    ctx->pc = 0x16A300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A2FCu;
    // 0x16a300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x16A2FCu, 0x16A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A304u;
label_16a304:
    // 0x16a304: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x16A304u;
    {
        const bool branch_taken_0x16a304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A304u;
        // 0x16a308: 0x26a30001  addiu       $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a304) {
            ctx->pc = 0x16A3FCu;
            goto label_16a3fc;
        }
    }
    ctx->pc = 0x16A30Cu;
    // 0x16a30c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x16a30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16a310: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x16a310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a314: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16a318: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x16A318u;
    {
        const bool branch_taken_0x16a318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A318u;
        // 0x16a31c: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a318) {
            ctx->pc = 0x16A3F4u;
            goto label_16a3f4;
        }
    }
    ctx->pc = 0x16A320u;
label_16a320:
    // 0x16a320: 0x24b19b70  addiu       $s1, $a1, -0x6490
    ctx->pc = 0x16a320u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x16a324: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x16a324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x16a328: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x16A328u;
    SET_GPR_U32(ctx, 31, 0x16A330u);
    ctx->pc = 0x16A32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A328u;
    // 0x16a32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x16A328u, 0x16A330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A330u;
label_16a330:
    // 0x16a330: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16A330u;
    {
        const bool branch_taken_0x16a330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A330u;
        // 0x16a334: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a330) {
            ctx->pc = 0x16A36Cu;
            goto label_16a36c;
        }
    }
    ctx->pc = 0x16A338u;
    // 0x16a338: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x16a338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x16a33c: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x16a33cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x16a340: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x16a340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a344: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x16a344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16a348: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16a34c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x16a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a350: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x16a350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x16a354: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x16a354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16a358: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x16a358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x16a35c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16a35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16a360: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16a360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16a364: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x16A364u;
    {
        const bool branch_taken_0x16a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A364u;
        // 0x16a368: 0xa064008b  sb          $a0, 0x8B($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 139), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a364) {
            ctx->pc = 0x16A3F8u;
            goto label_16a3f8;
        }
    }
    ctx->pc = 0x16A36Cu;
label_16a36c:
    // 0x16a36c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x16a36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a370: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x16a370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x16a374: 0x93c30010  lbu         $v1, 0x10($fp)
    ctx->pc = 0x16a374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x16a378: 0x163080  sll         $a2, $s6, 2
    ctx->pc = 0x16a378u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x16a37c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16a380: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x16a380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16a384: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x16a384u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a388: 0x38600  sll         $s0, $v1, 24
    ctx->pc = 0x16a388u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x16a38c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x16a38cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x16a390: 0x102e03  sra         $a1, $s0, 24
    ctx->pc = 0x16a390u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 24));
    // 0x16a394: 0x8ce3002c  lw          $v1, 0x2C($a3)
    ctx->pc = 0x16a394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x16a398: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16a398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16a39c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x16a39cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x16a3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16a3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16a3a8: 0xace3002c  sw          $v1, 0x2C($a3)
    ctx->pc = 0x16a3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 3));
    // 0x16a3ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x16a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16a3b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16a3b4: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x16A3B4u;
    SET_GPR_U32(ctx, 31, 0x16A3BCu);
    ctx->pc = 0x16A3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3B4u;
    // 0x16a3b8: 0xa043008b  sb          $v1, 0x8B($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x16A3B4u, 0x16A3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3BCu;
label_16a3bc:
    // 0x16a3bc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16A3BCu;
    {
        const bool branch_taken_0x16a3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3BCu;
        // 0x16a3c0: 0x26a30001  addiu       $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a3bc) {
            ctx->pc = 0x16A3FCu;
            goto label_16a3fc;
        }
    }
    ctx->pc = 0x16A3C4u;
    // 0x16a3c4: 0x101603  sra         $v0, $s0, 24
    ctx->pc = 0x16a3c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 24));
    // 0x16a3c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a3cc: 0x5044000c  beql        $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x16A3CCu;
    {
        const bool branch_taken_0x16a3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x16a3cc) {
            ctx->pc = 0x16A3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A3CCu;
            // 0x16a3d0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A400u;
            goto label_16a400;
        }
    }
    ctx->pc = 0x16A3D4u;
    // 0x16a3d4: 0xc07e9b0  jal         func_1FA6C0
    ctx->pc = 0x16A3D4u;
    SET_GPR_U32(ctx, 31, 0x16A3DCu);
    ctx->pc = 0x16A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A3D4u;
    // 0x16a3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA6C0u, 0x16A3D4u, 0x16A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A3DCu;
label_16a3dc:
    // 0x16a3dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A3DCu;
    {
        const bool branch_taken_0x16a3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A3DCu;
        // 0x16a3e0: 0x26a30001  addiu       $v1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a3dc) {
            ctx->pc = 0x16A3FCu;
            goto label_16a3fc;
        }
    }
    ctx->pc = 0x16A3E4u;
    // 0x16a3e4: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x16a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16a3e8: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x16a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x16a3ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x16a3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x16a3f0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x16a3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_16a3f4:
    // 0x16a3f4: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x16a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_16a3f8:
    // 0x16a3f8: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x16a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_16a3fc:
    // 0x16a3fc: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x16a3fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_16a400:
    // 0x16a400: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x16a400u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16a404: 0x3ac03  sra         $s5, $v1, 16
    ctx->pc = 0x16a404u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 3), 16));
    // 0x16a408: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x16a408u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x16a40c: 0x1440ff12  bnez        $v0, . + 4 + (-0xEE << 2)
    ctx->pc = 0x16A40Cu;
    {
        const bool branch_taken_0x16a40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A40Cu;
        // 0x16a410: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a40c) {
            ctx->pc = 0x16A058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a058;
        }
    }
    ctx->pc = 0x16A414u;
    // 0x16a414: 0x86420202  lh          $v0, 0x202($s2)
    ctx->pc = 0x16a414u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 514)));
    // 0x16a418: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x16a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16a41c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x16a41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x16a420: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x16a420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16a424: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x16a424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16a428: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a42c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16a42cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16a430: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x16a430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x16a434: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x16a434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16a438: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x16a438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x16a43c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x16a43cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x16a440: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x16a440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16a444: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x16a444u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x16a448: 0x8e44017c  lw          $a0, 0x17C($s2)
    ctx->pc = 0x16a448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x16a44c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x16a44cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a450: 0x0  nop
    ctx->pc = 0x16a450u;
    // NOP
    // 0x16a454: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16a454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16a458: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x16a458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x16a45c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x16a45cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16a460: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x16a460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16a464: 0x0  nop
    ctx->pc = 0x16a464u;
    // NOP
    // 0x16a468: 0x0  nop
    ctx->pc = 0x16a468u;
    // NOP
    // 0x16a46c: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x16a46cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x16a470: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x16a470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16a474: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x16a474u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x16a478: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16a478u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16a47c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x16a47cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16a480: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x16a480u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a484: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x16a484u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16a488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a48c: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x16a48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x16a490: 0x864201d0  lh          $v0, 0x1D0($s2)
    ctx->pc = 0x16a490u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 464)));
    // 0x16a494: 0x8e43017c  lw          $v1, 0x17C($s2)
    ctx->pc = 0x16a494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
    // 0x16a498: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16a498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16a49c: 0x0  nop
    ctx->pc = 0x16a49cu;
    // NOP
    // 0x16a4a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16a4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16a4a4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x16a4a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16a4a8: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x16a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a4ac: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x16a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x16a4b0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x16a4b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x16a4b4: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x16a4b4u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x16a4b8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x16a4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16a4bc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x16a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16a4c0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x16a4c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x16a4c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x16a4c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x16a4c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x16a4c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16a4cc: 0xe461003c  swc1        $f1, 0x3C($v1)
    ctx->pc = 0x16a4ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x16a4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x16A4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4D0u;
        // 0x16a4d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A4D8u;
}
