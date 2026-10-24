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

// Function: func_00345848
// Address: 0x345848 - 0x345af8
void func_00345848_0x345848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00345848_0x345848");
#endif

    switch (ctx->pc) {
        case 0x34587cu: goto label_34587c;
        case 0x3459e8u: goto label_3459e8;
        case 0x3459f8u: goto label_3459f8;
        case 0x345a10u: goto label_345a10;
        case 0x345a3cu: goto label_345a3c;
        case 0x345a5cu: goto label_345a5c;
        case 0x345a80u: goto label_345a80;
        case 0x345a9cu: goto label_345a9c;
        case 0x345abcu: goto label_345abc;
        default: break;
    }

    ctx->pc = 0x345848u;

    // 0x345848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34584c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34584cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x345854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x345858: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x345858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34585c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x34585cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x345860: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x345860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345864: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x345864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x345868: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x345868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x34586c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x34586Cu;
    {
        const bool branch_taken_0x34586c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x345870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34586Cu;
        // 0x345870: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34586c) {
            ctx->pc = 0x345898u;
            goto label_345898;
        }
    }
    ctx->pc = 0x345874u;
    // 0x345874: 0xc0d19be  jal         func_3466F8
    ctx->pc = 0x345874u;
    SET_GPR_U32(ctx, 31, 0x34587Cu);
    ctx->pc = 0x3466F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3466F8u, 0x345874u, 0x34587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34587Cu;
label_34587c:
    // 0x34587c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34587cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x345880: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x345880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345884: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x345884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x345888: 0xac50e070  sw          $s0, -0x1F90($v0)
    ctx->pc = 0x345888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3EE070u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE070u, _value); } while (0);
    // 0x34588c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34588Cu;
    {
        const bool branch_taken_0x34588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34588Cu;
        // 0x345890: 0xac72e074  sw          $s2, -0x1F8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294959220), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34588c) {
            ctx->pc = 0x3458ACu;
            goto label_3458ac;
        }
    }
    ctx->pc = 0x345894u;
    // 0x345894: 0x0  nop
    ctx->pc = 0x345894u;
    // NOP
label_345898:
    // 0x345898: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x345898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x34589c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x34589cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3458a0: 0xac40e070  sw          $zero, -0x1F90($v0)
    ctx->pc = 0x3458a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EE070u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE070u, _value); } while (0);
    // 0x3458a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3458a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3458a8: 0xac60e074  sw          $zero, -0x1F8C($v1)
    ctx->pc = 0x3458a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EE074u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE074u, _value); } while (0);
label_3458ac:
    // 0x3458ac: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x3458ACu;
    {
        const bool branch_taken_0x3458ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3458B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458ACu;
        // 0x3458b0: 0x3c020076  lui         $v0, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3458ac) {
            ctx->pc = 0x3458DCu;
            goto label_3458dc;
        }
    }
    ctx->pc = 0x3458B4u;
    // 0x3458b4: 0x24458b48  addiu       $a1, $v0, -0x74B8
    ctx->pc = 0x3458b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937416));
    // 0x3458b8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3458b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3458bc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3458bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3458c0: 0x2883000f  slti        $v1, $a0, 0xF
    ctx->pc = 0x3458c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x3458c4: 0x3c010076  lui         $at, 0x76
    ctx->pc = 0x3458c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)118 << 16));
    // 0x3458c8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x3458c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x3458cc: 0xac318b08  sw          $s1, -0x74F8($at)
    ctx->pc = 0x3458ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937352), GPR_U32(ctx, 17));
    // 0x3458d0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3458D0u;
    {
        const bool branch_taken_0x3458d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3458D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458D0u;
        // 0x3458d4: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3458d0) {
            ctx->pc = 0x3458DCu;
            goto label_3458dc;
        }
    }
    ctx->pc = 0x3458D8u;
    // 0x3458d8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3458d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3458dc:
    // 0x3458dc: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3458dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x3458e0: 0x34420f18  ori         $v0, $v0, 0xF18
    ctx->pc = 0x3458e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3864);
    // 0x3458e4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x3458e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3458e8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3458E8u;
    {
        const bool branch_taken_0x3458e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3458e8) {
            ctx->pc = 0x345960u;
            goto label_345960;
        }
    }
    ctx->pc = 0x3458F0u;
    // 0x3458f0: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3458f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x3458f4: 0x34420f17  ori         $v0, $v0, 0xF17
    ctx->pc = 0x3458f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3863);
    // 0x3458f8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3458f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3458fc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x3458FCu;
    {
        const bool branch_taken_0x3458fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3458FCu;
        // 0x345900: 0x3c140076  lui         $s4, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3458fc) {
            ctx->pc = 0x345A18u;
            goto label_345a18;
        }
    }
    ctx->pc = 0x345904u;
    // 0x345904: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x345904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x345908: 0x3442040c  ori         $v0, $v0, 0x40C
    ctx->pc = 0x345908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1036);
    // 0x34590c: 0x12220046  beq         $s1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x34590Cu;
    {
        const bool branch_taken_0x34590c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x345910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34590Cu;
        // 0x345910: 0x51102a  slt         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34590c) {
            ctx->pc = 0x345A28u;
            goto label_345a28;
        }
    }
    ctx->pc = 0x345914u;
    // 0x345914: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x345914u;
    {
        const bool branch_taken_0x345914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345914) {
            ctx->pc = 0x345938u;
            goto label_345938;
        }
    }
    ctx->pc = 0x34591Cu;
    // 0x34591c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x34591cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x345920: 0x34420408  ori         $v0, $v0, 0x408
    ctx->pc = 0x345920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1032);
    // 0x345924: 0x12220041  beq         $s1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x345924u;
    {
        const bool branch_taken_0x345924 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x345928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345924u;
        // 0x345928: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345924) {
            ctx->pc = 0x345A2Cu;
            goto label_345a2c;
        }
    }
    ctx->pc = 0x34592Cu;
    // 0x34592c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x34592Cu;
    {
        const bool branch_taken_0x34592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34592Cu;
        // 0x345930: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34592c) {
            ctx->pc = 0x345AACu;
            goto label_345aac;
        }
    }
    ctx->pc = 0x345934u;
    // 0x345934: 0x0  nop
    ctx->pc = 0x345934u;
    // NOP
label_345938:
    // 0x345938: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x345938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x34593c: 0x34420c04  ori         $v0, $v0, 0xC04
    ctx->pc = 0x34593cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3076);
    // 0x345940: 0x12220049  beq         $s1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x345940u;
    {
        const bool branch_taken_0x345940 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x345944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345940u;
        // 0x345944: 0x3c140076  lui         $s4, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345940) {
            ctx->pc = 0x345A68u;
            goto label_345a68;
        }
    }
    ctx->pc = 0x345948u;
    // 0x345948: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x345948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x34594c: 0x34420f15  ori         $v0, $v0, 0xF15
    ctx->pc = 0x34594cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3861);
    // 0x345950: 0x1222003d  beq         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x345950u;
    {
        const bool branch_taken_0x345950 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x345954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345950u;
        // 0x345954: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345950) {
            ctx->pc = 0x345A48u;
            goto label_345a48;
        }
    }
    ctx->pc = 0x345958u;
    // 0x345958: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x345958u;
    {
        const bool branch_taken_0x345958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345958u;
        // 0x34595c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345958) {
            ctx->pc = 0x345AACu;
            goto label_345aac;
        }
    }
    ctx->pc = 0x345960u;
label_345960:
    // 0x345960: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x345960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x345964: 0x34420f40  ori         $v0, $v0, 0xF40
    ctx->pc = 0x345964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3904);
    // 0x345968: 0x12220017  beq         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x345968u;
    {
        const bool branch_taken_0x345968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x34596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345968u;
        // 0x34596c: 0x51102a  slt         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x345968) {
            ctx->pc = 0x3459C8u;
            goto label_3459c8;
        }
    }
    ctx->pc = 0x345970u;
    // 0x345970: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x345970u;
    {
        const bool branch_taken_0x345970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x345974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345970u;
        // 0x345974: 0x2a22ffff  slti        $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x345970) {
            ctx->pc = 0x3459A0u;
            goto label_3459a0;
        }
    }
    ctx->pc = 0x345978u;
    // 0x345978: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x345978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x34597c: 0x34420f1c  ori         $v0, $v0, 0xF1C
    ctx->pc = 0x34597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3868);
    // 0x345980: 0x12220029  beq         $s1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x345980u;
    {
        const bool branch_taken_0x345980 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x345984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345980u;
        // 0x345984: 0x3c140076  lui         $s4, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345980) {
            ctx->pc = 0x345A28u;
            goto label_345a28;
        }
    }
    ctx->pc = 0x345988u;
    // 0x345988: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x345988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x34598c: 0x34420f1f  ori         $v0, $v0, 0xF1F
    ctx->pc = 0x34598cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3871);
    // 0x345990: 0x1222003d  beq         $s1, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x345990u;
    {
        const bool branch_taken_0x345990 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x345994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345990u;
        // 0x345994: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345990) {
            ctx->pc = 0x345A88u;
            goto label_345a88;
        }
    }
    ctx->pc = 0x345998u;
    // 0x345998: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x345998u;
    {
        const bool branch_taken_0x345998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345998u;
        // 0x34599c: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345998) {
            ctx->pc = 0x345AACu;
            goto label_345aac;
        }
    }
    ctx->pc = 0x3459A0u;
label_3459a0:
    // 0x3459a0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3459A0u;
    {
        const bool branch_taken_0x3459a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3459A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459A0u;
        // 0x3459a4: 0x3c140076  lui         $s4, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3459a0) {
            ctx->pc = 0x345AA8u;
            goto label_345aa8;
        }
    }
    ctx->pc = 0x3459A8u;
    // 0x3459a8: 0x2a22fffd  slti        $v0, $s1, -0x3
    ctx->pc = 0x3459a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x3459ac: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x3459ACu;
    {
        const bool branch_taken_0x3459ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3459ac) {
            ctx->pc = 0x3459B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3459ACu;
            // 0x3459b0: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345AACu;
            goto label_345aac;
        }
    }
    ctx->pc = 0x3459B4u;
    // 0x3459b4: 0x3c140076  lui         $s4, 0x76
    ctx->pc = 0x3459b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)118 << 16));
    // 0x3459b8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3459b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3459bc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x3459BCu;
    {
        const bool branch_taken_0x3459bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3459C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459BCu;
        // 0x3459c0: 0x24a57c50  addiu       $a1, $a1, 0x7C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3459bc) {
            ctx->pc = 0x345A30u;
            goto label_345a30;
        }
    }
    ctx->pc = 0x3459C4u;
    // 0x3459c4: 0x0  nop
    ctx->pc = 0x3459c4u;
    // NOP
label_3459c8:
    // 0x3459c8: 0x3c140076  lui         $s4, 0x76
    ctx->pc = 0x3459c8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)118 << 16));
    // 0x3459cc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3459ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3459d0: 0x26908b50  addiu       $s0, $s4, -0x74B0
    ctx->pc = 0x3459d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
    // 0x3459d4: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x3459d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x3459d8: 0x24a57c68  addiu       $a1, $a1, 0x7C68
    ctx->pc = 0x3459d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31848));
    // 0x3459dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3459dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3459e0: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x3459E0u;
    SET_GPR_U32(ctx, 31, 0x3459E8u);
    ctx->pc = 0x3459E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3459E0u;
    // 0x3459e4: 0x34c60f40  ori         $a2, $a2, 0xF40 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3904);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x3459E0u, 0x3459E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459E8u;
label_3459e8:
    // 0x3459e8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3459E8u;
    {
        const bool branch_taken_0x3459e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3459e8) {
            ctx->pc = 0x3459FCu;
            goto label_3459fc;
        }
    }
    ctx->pc = 0x3459F0u;
    // 0x3459f0: 0xc0d5974  jal         func_3565D0
    ctx->pc = 0x3459F0u;
    SET_GPR_U32(ctx, 31, 0x3459F8u);
    ctx->pc = 0x3459F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3459F0u;
    // 0x3459f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3565D0u, 0x3459F0u, 0x3459F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3459F8u;
label_3459f8:
    // 0x3459f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3459f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3459fc:
    // 0x3459fc: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x3459FCu;
    {
        const bool branch_taken_0x3459fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3459FCu;
        // 0x345a00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3459fc) {
            ctx->pc = 0x345ABCu;
            goto label_345abc;
        }
    }
    ctx->pc = 0x345A04u;
    // 0x345a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x345a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a08: 0xc0e9688  jal         func_3A5A20
    ctx->pc = 0x345A08u;
    SET_GPR_U32(ctx, 31, 0x345A10u);
    ctx->pc = 0x345A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A08u;
    // 0x345a0c: 0x240600e9  addiu       $a2, $zero, 0xE9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A20u, 0x345A08u, 0x345A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A10u;
label_345a10:
    // 0x345a10: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x345A10u;
    {
        const bool branch_taken_0x345a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A10u;
        // 0x345a14: 0x26848b50  addiu       $a0, $s4, -0x74B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a10) {
            ctx->pc = 0x345AC0u;
            goto label_345ac0;
        }
    }
    ctx->pc = 0x345A18u;
label_345a18:
    // 0x345a18: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x345a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x345a1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x345A1Cu;
    {
        const bool branch_taken_0x345a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A1Cu;
        // 0x345a20: 0x24a57c80  addiu       $a1, $a1, 0x7C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a1c) {
            ctx->pc = 0x345A30u;
            goto label_345a30;
        }
    }
    ctx->pc = 0x345A24u;
    // 0x345a24: 0x0  nop
    ctx->pc = 0x345a24u;
    // NOP
label_345a28:
    // 0x345a28: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x345a28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_345a2c:
    // 0x345a2c: 0x24a57ce0  addiu       $a1, $a1, 0x7CE0
    ctx->pc = 0x345a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31968));
label_345a30:
    // 0x345a30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x345a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345a34: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x345A34u;
    SET_GPR_U32(ctx, 31, 0x345A3Cu);
    ctx->pc = 0x345A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A34u;
    // 0x345a38: 0x26848b50  addiu       $a0, $s4, -0x74B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x345A34u, 0x345A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A3Cu;
label_345a3c:
    // 0x345a3c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x345A3Cu;
    {
        const bool branch_taken_0x345a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A3Cu;
        // 0x345a40: 0x26848b50  addiu       $a0, $s4, -0x74B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a3c) {
            ctx->pc = 0x345AC0u;
            goto label_345ac0;
        }
    }
    ctx->pc = 0x345A44u;
    // 0x345a44: 0x0  nop
    ctx->pc = 0x345a44u;
    // NOP
label_345a48:
    // 0x345a48: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x345a48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x345a4c: 0x24a57d38  addiu       $a1, $a1, 0x7D38
    ctx->pc = 0x345a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32056));
    // 0x345a50: 0x26848b50  addiu       $a0, $s4, -0x74B0
    ctx->pc = 0x345a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
    // 0x345a54: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x345A54u;
    SET_GPR_U32(ctx, 31, 0x345A5Cu);
    ctx->pc = 0x345A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A54u;
    // 0x345a58: 0x34c60f15  ori         $a2, $a2, 0xF15 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3861);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x345A54u, 0x345A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A5Cu;
label_345a5c:
    // 0x345a5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x345A5Cu;
    {
        const bool branch_taken_0x345a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A5Cu;
        // 0x345a60: 0x26848b50  addiu       $a0, $s4, -0x74B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a5c) {
            ctx->pc = 0x345AC0u;
            goto label_345ac0;
        }
    }
    ctx->pc = 0x345A64u;
    // 0x345a64: 0x0  nop
    ctx->pc = 0x345a64u;
    // NOP
label_345a68:
    // 0x345a68: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x345a68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x345a6c: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x345a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x345a70: 0x24a57da8  addiu       $a1, $a1, 0x7DA8
    ctx->pc = 0x345a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32168));
    // 0x345a74: 0x26848b50  addiu       $a0, $s4, -0x74B0
    ctx->pc = 0x345a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
    // 0x345a78: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x345A78u;
    SET_GPR_U32(ctx, 31, 0x345A80u);
    ctx->pc = 0x345A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A78u;
    // 0x345a7c: 0x34c60c04  ori         $a2, $a2, 0xC04 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3076);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x345A78u, 0x345A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A80u;
label_345a80:
    // 0x345a80: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x345A80u;
    {
        const bool branch_taken_0x345a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A80u;
        // 0x345a84: 0x26848b50  addiu       $a0, $s4, -0x74B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a80) {
            ctx->pc = 0x345AC0u;
            goto label_345ac0;
        }
    }
    ctx->pc = 0x345A88u;
label_345a88:
    // 0x345a88: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x345a88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x345a8c: 0x24a57e30  addiu       $a1, $a1, 0x7E30
    ctx->pc = 0x345a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32304));
    // 0x345a90: 0x26848b50  addiu       $a0, $s4, -0x74B0
    ctx->pc = 0x345a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
    // 0x345a94: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x345A94u;
    SET_GPR_U32(ctx, 31, 0x345A9Cu);
    ctx->pc = 0x345A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345A94u;
    // 0x345a98: 0x34c60f1f  ori         $a2, $a2, 0xF1F (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)3871);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x345A94u, 0x345A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345A9Cu;
label_345a9c:
    // 0x345a9c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x345A9Cu;
    {
        const bool branch_taken_0x345a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345A9Cu;
        // 0x345aa0: 0x26848b50  addiu       $a0, $s4, -0x74B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345a9c) {
            ctx->pc = 0x345AC0u;
            goto label_345ac0;
        }
    }
    ctx->pc = 0x345AA4u;
    // 0x345aa4: 0x0  nop
    ctx->pc = 0x345aa4u;
    // NOP
label_345aa8:
    // 0x345aa8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x345aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_345aac:
    // 0x345aac: 0x24a57e78  addiu       $a1, $a1, 0x7E78
    ctx->pc = 0x345aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32376));
    // 0x345ab0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x345ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345ab4: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x345AB4u;
    SET_GPR_U32(ctx, 31, 0x345ABCu);
    ctx->pc = 0x345AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345AB4u;
    // 0x345ab8: 0x26848b50  addiu       $a0, $s4, -0x74B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x345AB4u, 0x345ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345ABCu;
label_345abc:
    // 0x345abc: 0x26848b50  addiu       $a0, $s4, -0x74B0
    ctx->pc = 0x345abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294937424));
label_345ac0:
    // 0x345ac0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x345ac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345ac8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345acc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345accu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345ad0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x345ad0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345ad4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x345ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x345ad8: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x345AD8u;
    ctx->pc = 0x345ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345AD8u;
    // 0x345adc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x345AD8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x345AE0u;
    // 0x345ae0: 0x8c621898  lw          $v0, 0x1898($v1)
    ctx->pc = 0x345ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6296)));
    // 0x345ae4: 0x0  nop
    ctx->pc = 0x345ae4u;
    // NOP
    // 0x345ae8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x345ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x345aec: 0x0  nop
    ctx->pc = 0x345aecu;
    // NOP
    // 0x345af0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x345af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x345af4: 0x0  nop
    ctx->pc = 0x345af4u;
    // NOP
    ctx->pc = 0x345af8u;
}
